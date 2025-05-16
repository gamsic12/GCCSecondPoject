// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "GameFramework/Actor.h"
#include "RotatingDoorActor.generated.h"

UCLASS()
class GCCSECONDPROJECT_API ARotatingDoorActor : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingDoorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact_Implementation(AActor* Interactor) override;

public:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* SceneRoot;
	
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* RotationPivot;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* DoorMesh;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* TriggerZone;

	UPROPERTY(EditAnywhere, Category = "Door")
	float OpenAngle = -90.f;

	UPROPERTY(EditAnywhere, Category = "Door")
	float OpenSpeed = 2.f;

private:
	FRotator ClosedRotation;
	FRotator OpenRotation;

	bool bShouldOpen = false;

	UFUNCTION()
	void OnTriggerBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnTriggerEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
