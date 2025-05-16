// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "FuelActor.generated.h"

UCLASS()
class GCCSECONDPROJECT_API AFuelActor : public AActor,public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFuelActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 루트 충돌 박스 (상호작용 감지용)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fuel")
	class UBoxComponent* CollisionBox;

	// 실제 연료 모델
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fuel")
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fuel")
	UMaterialInterface* BlurredMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fuel")
	UMaterialInterface* DefaultMaterial;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fuel")
	bool bIsCarried = false;

	// 인터랙션 구현
	virtual void Interact_Implementation(AActor* Interactor) override;

	// 부착/분리
	void AttachTo(USceneComponent* Parent, FName SocketName);
	void DetachFrom();

	// 시각 효과 갱신
	void SetBlurred(bool bEnable);
	
};
