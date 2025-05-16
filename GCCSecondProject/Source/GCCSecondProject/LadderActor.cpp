#include "LadderActor.h"
#include "PlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"

ALadderActor::ALadderActor()
{
	PrimaryActorTick.bCanEverTick = true;

	LadderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LadderMesh"));
	SetRootComponent(LadderMesh);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(RootComponent);
	TriggerBox->SetBoxExtent(FVector(50, 50, 200));
	TriggerBox->SetCollisionProfileName(TEXT("Trigger"));
	TriggerBox->SetGenerateOverlapEvents(true);

	TopMarker = CreateDefaultSubobject<USceneComponent>(TEXT("TopMarker"));
	TopMarker->SetupAttachment(RootComponent);

	BottomMarker = CreateDefaultSubobject<USceneComponent>(TEXT("BottomMarker"));
	BottomMarker->SetupAttachment(RootComponent);
}

void ALadderActor::BeginPlay()
{
	Super::BeginPlay();
	UpdateLadderBounds();
}

void ALadderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALadderActor::Interact_Implementation(AActor* Interactor)
{
	if (APlayerCharacter* Player = Cast<APlayerCharacter>(Interactor))
	{
		Player->EnterLadderMode(this);
	}
}

void ALadderActor::UpdateLadderBounds()
{
	if (!TopMarker || !BottomMarker) return;

	TopZ = TopMarker->GetComponentLocation().Z;
	BottomZ = BottomMarker->GetComponentLocation().Z;

	// 시각화 디버그
	DrawDebugLine(GetWorld(), TopMarker->GetComponentLocation(), TopMarker->GetComponentLocation() + FVector(0, 0, 10), FColor::Green, true, 10.f, 0, 2.f);
	DrawDebugLine(GetWorld(), BottomMarker->GetComponentLocation(), BottomMarker->GetComponentLocation() - FVector(0, 0, 10), FColor::Red, true, 10.f, 0, 2.f);
}
