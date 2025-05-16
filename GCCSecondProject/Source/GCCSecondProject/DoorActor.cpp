#include "DoorActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"

ADoorActor::ADoorActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// 공통 루트 설정
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
    
	// 왼쪽 문
	LeftDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
	LeftDoor->SetupAttachment(SceneRoot);
    
	// 오른쪽 문
	RightDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoor"));
	RightDoor->SetupAttachment(SceneRoot);
    
	// 트리거 영역
	TriggerZone = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerZone"));
	TriggerZone->SetupAttachment(SceneRoot);
	TriggerZone->SetBoxExtent(FVector(100.f, 100.f, 200.f));
	TriggerZone->SetCollisionProfileName(TEXT("Trigger"));
	TriggerZone->SetGenerateOverlapEvents(true);
}


void ADoorActor::BeginPlay()
{
	Super::BeginPlay();

	LeftDoorClosedPos = LeftDoor->GetRelativeLocation();
	RightDoorClosedPos = RightDoor->GetRelativeLocation();

	LeftDoorOpenPos = LeftDoorClosedPos + DoorSlideOffset;
	RightDoorOpenPos = RightDoorClosedPos - DoorSlideOffset;

	TriggerZone->OnComponentBeginOverlap.AddDynamic(this, &ADoorActor::OnTriggerBegin);
	TriggerZone->OnComponentEndOverlap.AddDynamic(this, &ADoorActor::OnTriggerEnd);
}

void ADoorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLeft = FMath::VInterpTo(LeftDoor->GetRelativeLocation(), bShouldOpen ? LeftDoorOpenPos : LeftDoorClosedPos, DeltaTime, 3.f);
	FVector NewRight = FMath::VInterpTo(RightDoor->GetRelativeLocation(), bShouldOpen ? RightDoorOpenPos : RightDoorClosedPos, DeltaTime, 3.f);

	LeftDoor->SetRelativeLocation(NewLeft);
	RightDoor->SetRelativeLocation(NewRight);
}

void ADoorActor::Interact_Implementation(AActor* Interactor)
{
	// 자동문이므로 수동 상호작용은 없음
}

void ADoorActor::OnTriggerBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (APlayerCharacter* Player = Cast<APlayerCharacter>(OtherActor))
	{
		bShouldOpen = true;

		// 투시 효과 켜기
		if (!Player->bCheckInternal)
			Player->bCheckInternal = true;
		else
		{	// 투시 효과 끄기
			Player->bCheckInternal = false;
		}
		Player->SetSeeThroughEffect();
	}
}

void ADoorActor::OnTriggerEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (APlayerCharacter* Player = Cast<APlayerCharacter>(OtherActor))
	{
		bShouldOpen = false;

	}
}
