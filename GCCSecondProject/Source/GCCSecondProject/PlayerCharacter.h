// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FuelActor.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "LadderActor.h"
#include "PlayerCharacter.generated.h"



UCLASS()
class GCCSECONDPROJECT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	// PlayerCharacter.h

	APlayerCharacter(const FObjectInitializer& ObjectInitializer);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void NotifyControllerChanged() override;


public:
	// 캐릭터를 옆에서 따라오는 카메라
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* SideViewCamera;
	
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputMappingContext* IMC_FARPlayer;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_FARMoveRight;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_FARMoveUpDown;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_FARJump;

	// 상호작용 InputAction 추가
	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* IA_FARInteract;

	// 플레이어 몸에 부착될 Interaction 감지용 Trigger
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction")
	class UBoxComponent* InteractionTrigger;

	// 사다리 상태
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ladder")
	bool bIsOnLadder;

	bool bIsClimbingOffLadderTop = false;
	bool bIsExitingLadderTopForward = false;
	FVector LadderTopExitTargetLocation;

	// 현재 붙잡은 사다리 액터
	UPROPERTY()
	class ALadderActor* CurrentLadder = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "SeeThrough")
	class UMaterialParameterCollection* SomeMPCAsset;

	// 사다리 모드 진입 함수
	void EnterLadderMode(ALadderActor* Ladder);

	// 사다리 모드 종료
	void ExitLadderMode();
	
	
	void OnActionMoveRight(const FInputActionValue& value);
	void OnActionJump(const FInputActionValue& value);
	// 상하 이동 입력 처리
	void OnActionMoveUpDown(const FInputActionValue& Value);
	
	

	// 상호작용 함수
	void OnActionInteract(const FInputActionValue& value);
	
	// 플레이어가 현재 바라보고 있는 상호작용 대상
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
	AActor* FocusedActor;

	// Trigger가 오브젝트와 오버랩할 때 호출될 함수
	UFUNCTION()
	void OnInteractionTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
										   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Trigger가 오브젝트와 오버랩이 끝났을 때 호출될 함수
	UFUNCTION()
	void OnInteractionTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
										 UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	virtual void NotifyHit(
	UPrimitiveComponent* MyComp,
	AActor* Other,
	UPrimitiveComponent* OtherComp,
	bool bSelfMoved,
	FVector HitLocation,
	FVector HitNormal,
	FVector NormalImpulse,
	const FHitResult& Hit) override;
	// 연료를 들고 있는지 여부
	bool bIsHoldingFuel;

	// 연료 액터 참조
	UPROPERTY()
	class AFuelActor* CarriedFuel = nullptr;

	UPROPERTY()
	bool bIsFuelInBackPosition = false;

	// 연료가 없는 상태에서 상호작용 시, 들기 시도
	bool TryPickupFuel(AActor* Target);

	// 연료를 든 상태에서 다른 대상과 상호작용 시, 위치 전환
	bool TryToggleFuelPosition(AActor* Target);

	// 연료를 들고 있는 상태에서 연료 자체와 상호작용 시, 내려놓기
	bool TryDropFuel(AActor* Target);
	
	UFUNCTION(BlueprintCallable, Category = "Visual")
	void SetSeeThroughEffect();

	bool bCheckInternal;
};

