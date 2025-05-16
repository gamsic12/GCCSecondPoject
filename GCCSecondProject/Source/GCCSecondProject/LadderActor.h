#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "LadderActor.generated.h"

UCLASS()
class GCCSECONDPROJECT_API ALadderActor : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	ALadderActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	virtual void Interact_Implementation(AActor* Interactor) override;

	// 사다리 본체 메시 (필요 없으면 제거해도 됨)
	UPROPERTY(VisibleAnywhere, Category = "Ladder")
	UStaticMeshComponent* LadderMesh;

	// 사다리 상호작용용 트리거
	UPROPERTY(VisibleAnywhere, Category = "Ladder")
	class UBoxComponent* TriggerBox;

	// 사다리 위쪽 기준점
	UPROPERTY(VisibleAnywhere, Category = "Ladder")
	USceneComponent* TopMarker;

	// 사다리 아래쪽 기준점
	UPROPERTY(VisibleAnywhere, Category = "Ladder")
	USceneComponent* BottomMarker;

	// 위아래 Z값 계산 결과
	UPROPERTY(VisibleAnywhere, Category = "Ladder|Debug")
	float TopZ;

	UPROPERTY(VisibleAnywhere, Category = "Ladder|Debug")
	float BottomZ;

	// 디버그용 선 그리기
	void UpdateLadderBounds();
};
