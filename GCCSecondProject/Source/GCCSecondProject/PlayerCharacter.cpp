// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputMappingContext.h"
#include "Interactable.h" 
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "MyCharacterMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Materials/MaterialParameterCollectionInstance.h"

APlayerCharacter::APlayerCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UMyCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;
	this->bUseControllerRotationYaw = false;

	// 카메라 설정
	this->CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	this->CameraBoom->SetupAttachment(this->GetRootComponent());
	this->CameraBoom->TargetArmLength = 4000.f;
	this->CameraBoom->bUsePawnControlRotation = false;
	this->CameraBoom->SetRelativeRotation(FRotator(0.f, 0.f, 0.f));
	// 충돌 시 카메라 거리 줄어드는 문제 방지
	CameraBoom->bDoCollisionTest = false;

	this->SideViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	this->SideViewCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	this->SideViewCamera->bUsePawnControlRotation = false;

	// 입력 매핑
	static ConstructorHelpers::FObjectFinder<UInputMappingContext> tempIMC(TEXT("/Script/EnhancedInput.InputMappingContext'/Game/Inputs/IMC_PlayerControls.IMC_PlayerControls'"));
	if (tempIMC.Succeeded()) {
		this->IMC_FARPlayer = tempIMC.Object;
	}

	// 상호작용 박스
	this->InteractionTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionTrigger"));
	this->InteractionTrigger->SetupAttachment(this->GetRootComponent());
	this->InteractionTrigger->SetBoxExtent(FVector(50.f, 50.f, 50.f));
	this->InteractionTrigger->SetCollisionProfileName(TEXT("Trigger"));

	// 충돌 응답 설정
	this->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	this->GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);
	this->InteractionTrigger->SetCollisionResponseToAllChannels(ECR_Ignore);
	this->InteractionTrigger->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);

	// 상호작용 대상 초기화
	this->FocusedActor = nullptr;
}


// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// 트리거 오버랩 이벤트에 함수 바인딩
	InteractionTrigger->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::OnInteractionTriggerBeginOverlap);
	InteractionTrigger->OnComponentEndOverlap.AddDynamic(this, &APlayerCharacter::OnInteractionTriggerEndOverlap);

	// ✅ 공중 제어 가능하게 설정
	GetCharacterMovement()->AirControl = 0.8f;

	SetSeeThroughEffect();

}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsClimbingOffLadderTop)
	{
		// 1단계: Z 위치 올리기
		FVector CurrentLocation = GetActorLocation();
		float TargetZ = CurrentLadder->TopZ + GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		FVector TargetLocation = FVector(CurrentLocation.X, CurrentLocation.Y, TargetZ);

		SetActorLocation(FMath::VInterpTo(CurrentLocation, TargetLocation, DeltaTime, 5.f));

		if (FMath::Abs(CurrentLocation.Z - TargetZ) < 2.f)
		{
			// 2단계: 앞으로 전진할 위치 설정 (횡스크롤 기준 Y 방향)
			float ForwardOffset = 100.f;
			float DirectionSign = FMath::Sign(GetActorScale3D().Y); // 오른쪽 -1, 왼쪽 +1
			LadderTopExitTargetLocation = FVector(CurrentLocation.X, CurrentLocation.Y + DirectionSign * ForwardOffset, TargetZ);
		
			bIsClimbingOffLadderTop = false;
			bIsExitingLadderTopForward = true;
		}
	}
	else if (bIsExitingLadderTopForward)
	{
		// 앞으로 전진
		FVector CurrentLocation = GetActorLocation();
		SetActorLocation(FMath::VInterpTo(CurrentLocation, LadderTopExitTargetLocation, DeltaTime, 5.f));

		if (FVector::DistSquared(CurrentLocation, LadderTopExitTargetLocation) < 4.f)
		{
			bIsExitingLadderTopForward = false;
			ExitLadderMode();
		}
	}

	
	if (bIsOnLadder && GetCharacterMovement()->IsFalling())
	{
		// 사다리에서만 좌우 이동 막기
		FVector Velocity = GetCharacterMovement()->Velocity;
		if (!GetCharacterMovement()->CurrentFloor.bBlockingHit)
		{
			Velocity.Y = 0.0f;
			GetCharacterMovement()->Velocity = Velocity;
		}
	}
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	if (auto* input = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		input->BindAction(IA_FARMoveRight, ETriggerEvent::Triggered, this, &APlayerCharacter::OnActionMoveRight);
		input->BindAction(IA_FARJump, ETriggerEvent::Started, this, &APlayerCharacter::OnActionJump);
		input->BindAction(IA_FARJump, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
		input->BindAction(IA_FARInteract, ETriggerEvent::Started, this, &APlayerCharacter::OnActionInteract);
		input->BindAction(IA_FARMoveUpDown, ETriggerEvent::Triggered, this, &APlayerCharacter::OnActionMoveUpDown);

	}

}

void APlayerCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// 현재 컨트롤러가 플레이어 컨트롤러인지 검증하고 싶다.
	// 만약 맞다면 
	if(auto* pc = Cast<APlayerController>(Controller))
	{
		// UEnhancedInputLocalPlayerSubsystem를 가져와서
		auto* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>
		(pc->GetLocalPlayer());

		// AddMappingContext를 하고싶다.
		subsystem->AddMappingContext(IMC_FARPlayer,0);
	}
}


void APlayerCharacter::OnActionMoveRight(const FInputActionValue& value)
{
	if (bIsOnLadder) return; // 사다리 타는 중엔 좌우 이동 막기
	
	float Direction = value.Get<float>();
	AddMovementInput(FVector(0, 1, 0), Direction);

	// ✅ 방향에 따라 캐릭터 스케일 반전 (횡스크롤 기준)
	if (!FMath::IsNearlyZero(Direction))
	{
		// 메시만 회전: Yaw 0 (오른쪽), 180 (왼쪽)
		FRotator NewMeshRotation = Direction > 0 ? FRotator(0, 0, 0) : FRotator(0, 180, 0);
		GetMesh()->SetRelativeRotation(NewMeshRotation);
	}

}

/*
void APlayerCharacter::OnActionInteract(const FInputActionValue& value)
{
	UE_LOG(LogTemp, Warning, TEXT("1 check")); 
	if (FocusedActor && FocusedActor->Implements<UInteractable>())
	{
		// 현재 상호작용 가능한 오브젝트에 Interact 호출
		IInteractable::Execute_Interact(FocusedActor, this);

		UE_LOG(LogTemp, Warning, TEXT("2 check"));

	}
}*/

/*void APlayerCharacter::OnActionJump(const FInputActionValue& Value)
{
	if (bIsOnLadder)
	{
		ExitLadderMode();

		// 카메라 기준 왼쪽 방향
		const float DirectionSign = -FMath::Sign(GetActorScale3D().Y); // 횡스크롤 기준 좌우 판단

		// 튕겨나가는 힘 설정
		FVector JumpOffVector = FVector(0.f, DirectionSign * 800.f, 600.f);

		LaunchCharacter(JumpOffVector, true, true);

		UE_LOG(LogTemp, Warning, TEXT("⬆️ 사다리 점프 (%s쪽)"), DirectionSign > 0 ? TEXT("오른쪽") : TEXT("왼쪽"));
		UE_LOG(LogTemp, Warning, TEXT("MovementMode After ExitLadderMode: %s"),
			*UEnum::GetValueAsString(GetCharacterMovement()->MovementMode));
	}
	else
	{
		// 현재 이동 입력 값을 가져옴
		float MoveDirection = 0.f;
		if (const UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
		{
			MoveDirection = EnhancedInput->GetAxisValue(IA_FARMoveRight);
		}


		// 수평 속도 설정
		float HorizontalSpeed = MoveDirection * GetCharacterMovement()->MaxWalkSpeed;

		// 점프 속도 설정
		float VerticalSpeed = GetCharacterMovement()->JumpZVelocity;

		// 수평 및 수직 속도를 동시에 부여
		FVector LaunchVelocity = FVector(0.f, HorizontalSpeed, VerticalSpeed);
		LaunchCharacter(LaunchVelocity, true, true);

		UE_LOG(LogTemp, Warning, TEXT("⬆️ 일반 점프 수행"));
		UE_LOG(LogTemp, Warning, TEXT("MovementMode: %s"), *UEnum::GetValueAsString(GetCharacterMovement()->MovementMode));
	}
}*/

void APlayerCharacter::OnActionJump(const FInputActionValue& Value)
{
	if (bIsOnLadder)
	{
		// 사다리 모드 종료
		ExitLadderMode();

		// 좌우 방향 판단 (횡스크롤 기준)
		float DirectionSign = -FMath::Sign(GetActorScale3D().Y);  // 오른쪽 → -1, 왼쪽 → +1

		// 튕겨나갈 속도 설정
		FVector JumpOffVelocity = FVector(0.f, DirectionSign * 600.f, 500.f);
		LaunchCharacter(JumpOffVelocity, true, true);

		UE_LOG(LogTemp, Warning, TEXT("↩️ 사다리에서 튕겨 점프 (%s 방향)"), DirectionSign > 0 ? TEXT("왼쪽") : TEXT("오른쪽"));
	}
	else
	{
		Jump(); // 기본 점프만 사용, 포물선 이동을 위해
		UE_LOG(LogTemp, Warning, TEXT("⬆️ 일반 점프 수행 (포물선 점검용)"));
	}
}


void APlayerCharacter::OnActionInteract(const FInputActionValue& value)
{
	UE_LOG(LogTemp, Warning, TEXT("✅ E키 입력 발생: OnActionInteract() 진입"));

	if (FocusedActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("✅ FocusedActor 존재: %s"), *FocusedActor->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("⚠️ FocusedActor 없음"));
	}
	if (FocusedActor && FocusedActor->Implements<UInteractable>())
	{
		UE_LOG(LogTemp, Warning, TEXT("✅ FocusedActor는 상호작용 가능"));

		IInteractable::Execute_Interact(FocusedActor, this);

		UE_LOG(LogTemp, Warning, TEXT("✅ Execute_Interact 호출 완료"));
	}

	if (!FocusedActor) return;

	if (TryPickupFuel(FocusedActor))
	{
		return;
	}
	if (TryToggleFuelPosition(FocusedActor)) return;
	if (TryDropFuel(FocusedActor)) return;

	// 기타 인터랙션
	if (FocusedActor->Implements<UInteractable>())
	{
		IInteractable::Execute_Interact(FocusedActor, this);
	}
}


// 트리거가 오버랩 시작할 때 호출
void APlayerCharacter::OnInteractionTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
														 UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->Implements<UInteractable>())
	{
		// 상호작용 가능한 오브젝트이면 FocusedActor로 설정
		FocusedActor = OtherActor;
	}
}

// 트리거가 오버랩 종료할 때 호출
void APlayerCharacter::OnInteractionTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
													   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == FocusedActor)
	{
		// 오버랩이 끝나면 FocusedActor 초기화
		FocusedActor = nullptr;
	}
}

void APlayerCharacter::EnterLadderMode(ALadderActor* Ladder)
{
	if (bIsOnLadder || !Ladder) return;

	bIsOnLadder = true;
	CurrentLadder = Ladder;
	
	bIsClimbingOffLadderTop = false;

	// 중력 제거 + 이동 모드 변경
	auto* Movement = GetCharacterMovement();
	Movement->SetMovementMode(MOVE_Flying);
	Movement->GravityScale = 0.f;

	// 🔥 관성 제거용 설정
	Movement->BrakingDecelerationFlying = 4096.f; // 아주 빠르게 멈추도록 설정
	Movement->BrakingFrictionFactor = 10.0f;      // 마찰계수 증가
	Movement->BrakingFriction = 2048.f; 

	UE_LOG(LogTemp, Warning, TEXT("▶ 사다리 탑승"));
}

void APlayerCharacter::ExitLadderMode()
{
	if (!bIsOnLadder) return;

	bIsOnLadder = false;
	CurrentLadder = nullptr;

	auto* Movement = GetCharacterMovement();
	Movement->SetMovementMode(MOVE_Walking);
	Movement->GravityScale = 1.f;

	// 필요 시 복원
	Movement->BrakingDecelerationFlying = 0.f;
	Movement->BrakingFrictionFactor = 1.0f;
	Movement->BrakingFriction = 0.f;

	UE_LOG(LogTemp, Warning, TEXT("▼ 사다리 하차"));
}
void APlayerCharacter::OnActionMoveUpDown(const FInputActionValue& Value)
{
	if (!bIsOnLadder || bIsClimbingOffLadderTop || bIsExitingLadderTopForward)
		return;

	float Input = Value.Get<float>();
	float SpeedScale = 0.3f;

	// ✅ 사다리 꼭대기 도달: 콜리전 중심이 TopZ보다 높아졌을 때
	if (CurrentLadder && Input > 0.f && !bIsClimbingOffLadderTop)
	{
		float PlayerCenterZ = GetActorLocation().Z; // 콜리전 중심

		if (PlayerCenterZ >= CurrentLadder->TopZ)
		{
			bIsClimbingOffLadderTop = true;
			return;
		}
	}

	// ✅ 사다리 아래 탈출
	if (Input < 0.f)
	{
		float PlayerBottomZ = GetActorLocation().Z - GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		if (PlayerBottomZ <= CurrentLadder->BottomZ)
		{
			ExitLadderMode();
			return;
		}
	}

	// ✅ 일반 이동
	if (FMath::IsNearlyZero(Input))
	{
		GetCharacterMovement()->StopMovementImmediately();
		GetCharacterMovement()->Velocity = FVector::ZeroVector;
		return;
	}

	AddMovementInput(FVector::UpVector, Input * SpeedScale);
}

void APlayerCharacter::NotifyHit(
	UPrimitiveComponent* MyComp,
	AActor* Other,
	UPrimitiveComponent* OtherComp,
	bool bSelfMoved,
	FVector HitLocation,
	FVector HitNormal,
	FVector NormalImpulse,
	const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	if (OtherComp)
	{
		UE_LOG(LogTemp, Warning, TEXT("💥 충돌한 컴포넌트 이름: %s (소속 액터: %s)"),
			*OtherComp->GetName(),
			*Other->GetName());
	}
}


bool APlayerCharacter::TryPickupFuel(AActor* Target)
{
	UE_LOG(LogTemp, Warning, TEXT("연료가 없는 상태에서 상호작용 입력1"));

	if (!CarriedFuel && Target->IsA<AFuelActor>())
	{
		UE_LOG(LogTemp, Warning, TEXT("연료가 없는 상태에서 상호작용 입력2"));

		CarriedFuel = Cast<AFuelActor>(Target);
		if (CarriedFuel)
		{
			UE_LOG(LogTemp, Warning, TEXT("연료가 없는 상태에서 상호작용 입력3"));

			CarriedFuel->AttachTo(GetMesh(), TEXT("CarrySocketFront"));
			bIsFuelInBackPosition = false;
			return true;
		}
	}
	return false;
}

bool APlayerCharacter::TryToggleFuelPosition(AActor* Target)
{
	UE_LOG(LogTemp, Warning, TEXT("연료든 상태에서 상호작용 입력5"));

	if (CarriedFuel && Target != CarriedFuel)
	{
		UE_LOG(LogTemp, Warning, TEXT("연료를 든 상태에서 상호작용 입력6"));

		FName NewSocket = bIsFuelInBackPosition ? TEXT("CarrySocketFront") : TEXT("CarrySocketBack");
		CarriedFuel->AttachTo(GetMesh(), NewSocket);
		bIsFuelInBackPosition = !bIsFuelInBackPosition;
		return true;
	}
	return false;
}


bool APlayerCharacter::TryDropFuel(AActor* Target)
{
	UE_LOG(LogTemp, Warning, TEXT("연료를 든 상태에서 연료 내려놓기"));

	if (CarriedFuel && Target == CarriedFuel)
	{
		CarriedFuel->DetachFrom();
		CarriedFuel = nullptr;
		bIsFuelInBackPosition = false;
		return true;
	}
	return false;
}

void APlayerCharacter::SetSeeThroughEffect()
{
	UE_LOG(LogTemp, Warning, TEXT("테스트1"));

	static const FName ParamName(TEXT("Distance"));
	if (!SomeMPCAsset) return;
	
	UE_LOG(LogTemp, Warning, TEXT("테스트2"));

	UMaterialParameterCollectionInstance* MPCInstance = GetWorld()->GetParameterCollectionInstance(SomeMPCAsset);
	if (MPCInstance)
	{	UE_LOG(LogTemp, Warning, TEXT("테스트3"));

		MPCInstance->SetScalarParameterValue(ParamName, bCheckInternal ? 1800.f : 0.f); // 500은 기존 사용된 거리
	}
}