// Fill out your copyright notice in the Description page of Project Settings.


#include "FuelActor.h"

#include "PlayerCharacter.h"
#include "Components/BoxComponent.h"

// Sets default values
AFuelActor::AFuelActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 루트: 충돌 박스
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	SetRootComponent(CollisionBox);
	CollisionBox->SetBoxExtent(FVector(30.f));
	CollisionBox->SetGenerateOverlapEvents(true);

	// 메시: 박스 하위에 위치
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CollisionBox);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 메시 자체는 충돌 안함
}

// Called when the game starts or when spawned
void AFuelActor::BeginPlay()
{
	Super::BeginPlay();
	DefaultMaterial = Mesh->GetMaterial(0); // 기본 머티리얼 저장
}

// Called every frame
void AFuelActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// 상호작용 함수
void AFuelActor::Interact_Implementation(AActor* Interactor)
{
	// 플레이어 캐릭터가 처리할 로직을 위해, 상태 변경 신호만 줌
	UE_LOG(LogTemp, Warning, TEXT("FuelActor Interacted"));
}

void AFuelActor::AttachTo(USceneComponent* Parent, FName Socket)
{
	if (!Parent) return;
	UE_LOG(LogTemp, Warning, TEXT("연료가 없는 상태에서 상호작용 입력4"));

	AttachToComponent(Parent, FAttachmentTransformRules::SnapToTargetNotIncludingScale, Socket);
	bIsCarried = true;

	SetBlurred(false);
}

void AFuelActor::DetachFrom()
{
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	bIsCarried = false;

	SetBlurred(true);
}

// 연료가 상호작용할 때 머터리얼 뿌옇게 효과주기
void AFuelActor::SetBlurred(bool bEnable)
{
	if (!Mesh || !BlurredMaterial || !DefaultMaterial) return;

	Mesh->SetMaterial(0, bEnable ? BlurredMaterial : DefaultMaterial);
}