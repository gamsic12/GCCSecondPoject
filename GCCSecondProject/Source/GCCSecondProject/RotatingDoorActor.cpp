#include "RotatingDoorActor.h"
#include "PlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

ARotatingDoorActor::ARotatingDoorActor()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	// ▶ 회전 기준용 스피어 생성
	RotationPivot = CreateDefaultSubobject<USphereComponent>(TEXT("RotationPivot"));
	RotationPivot->SetupAttachment(SceneRoot);

	// ▶ 문 메쉬를 스피어 하위에 배치
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	DoorMesh->SetupAttachment(RotationPivot);

	// ▶ 트리거
	TriggerZone = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerZone"));
	TriggerZone->SetupAttachment(SceneRoot);
	TriggerZone->SetBoxExtent(FVector(100.f, 100.f, 200.f));
	TriggerZone->SetCollisionProfileName(TEXT("Trigger"));
	TriggerZone->SetGenerateOverlapEvents(true);
}

void ARotatingDoorActor::BeginPlay()
{
	Super::BeginPlay();

	ClosedRotation = RotationPivot->GetRelativeRotation();
	OpenRotation = ClosedRotation + FRotator(OpenAngle, 0.f, 0.f);

	TriggerZone->OnComponentBeginOverlap.AddDynamic(this, &ARotatingDoorActor::OnTriggerBegin);
	TriggerZone->OnComponentEndOverlap.AddDynamic(this, &ARotatingDoorActor::OnTriggerEnd);
}

void ARotatingDoorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator Target = bShouldOpen ? OpenRotation : ClosedRotation;
	FRotator NewRotation = FMath::RInterpTo(RotationPivot->GetRelativeRotation(), Target, DeltaTime, OpenSpeed);
	RotationPivot->SetRelativeRotation(NewRotation);
}

void ARotatingDoorActor::Interact_Implementation(AActor* Interactor)
{
	IInteractable::Interact_Implementation(Interactor);
}

void ARotatingDoorActor::OnTriggerBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<APlayerCharacter>(OtherActor))
	{
		bShouldOpen = true;
	}
}

void ARotatingDoorActor::OnTriggerEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Cast<APlayerCharacter>(OtherActor))
	{
		bShouldOpen = false;
	}
}
