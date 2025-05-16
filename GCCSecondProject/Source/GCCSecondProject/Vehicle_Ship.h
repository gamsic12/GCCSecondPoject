#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuoyancyComponent.h"

#include "Vehicle_Ship.generated.h"


// #include "BuoyantMeshComponent.h"

UCLASS()
class GCCSECONDPROJECT_API AVehicle_Ship : public AActor
{
	GENERATED_BODY()

public:
	AVehicle_Ship();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	// 충돌체와 외관을 만들고싶다.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* BoxComp;

	// 선박 SceneComponent
	UPROPERTY(VisibleAnywhere, Category = "Ship")
	USceneComponent* SceneComp;

	
	/*// 선박 StaticMesh
	UPROPERTY(VisibleAnywhere, Category = "Ship")
	UStaticMeshComponent* ShipMesh;*/

	UPROPERTY(VisibleAnywhere, Category = "Buoyancy")
	UBuoyancyComponent* ShipBuoyancy;
};
