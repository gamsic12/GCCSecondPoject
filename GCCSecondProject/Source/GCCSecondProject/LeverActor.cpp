// Fill out your copyright notice in the Description page of Project Settings.


#include "LeverActor.h"

// Sets default values
ALeverActor::ALeverActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 레버 메쉬 생성
	LeverMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeverMesh"));
	RootComponent = LeverMesh;

	// 기본 상태는 OFF
	bIsLeverOn = false;
}

// Called when the game starts or when spawned
void ALeverActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALeverActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// 플레이어가 상호작용할 때 호출
void ALeverActor::Interact_Implementation(AActor* Interactor)
{
	// 레버 상태 토글
	bIsLeverOn = !bIsLeverOn;

	// 상태 출력
	UE_LOG(LogTemp, Warning, TEXT("레버 상태 변경됨: %s"), bIsLeverOn ? TEXT("ON") : TEXT("OFF"));

	// TODO: 여기서 레버 회전 애니메이션 추가 가능
}



