#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "DoorActor.generated.h"

UCLASS()
class GCCSECONDPROJECT_API ADoorActor : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	ADoorActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// 인터페이스 구현
	virtual void Interact_Implementation(AActor* Interactor) override;

protected:
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* SceneRoot;
	
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* LeftDoor;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* RightDoor;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* TriggerZone;

	UPROPERTY(EditAnywhere, Category = "Door")
	FVector DoorSlideOffset = FVector(100.f, 0.f, 0.f); // 열릴 거리

private:
	FVector LeftDoorClosedPos;
	FVector RightDoorClosedPos;

	FVector LeftDoorOpenPos;
	FVector RightDoorOpenPos;

	bool bShouldOpen = false;

	// 트리거 이벤트
	UFUNCTION()
	void OnTriggerBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
						UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnTriggerEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
					  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
