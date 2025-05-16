// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "LeverActor.generated.h"

UCLASS()
class GCCSECONDPROJECT_API ALeverActor : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALeverActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// 레버의 외형
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lever")
	class UStaticMeshComponent* LeverMesh;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// IInteractable 인터페이스 함수 구현
	virtual void Interact_Implementation(AActor* Interactor) override;

public:
	// 현재 레버가 켜져 있는지 여부
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lever")
	bool bIsLeverOn;

};
