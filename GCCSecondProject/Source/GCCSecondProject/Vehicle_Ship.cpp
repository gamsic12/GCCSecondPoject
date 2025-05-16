#include "Vehicle_Ship.h"
#include "Components/StaticMeshComponent.h"
#include "BuoyancyComponent.h"
#include "Components/BoxComponent.h"

AVehicle_Ship::AVehicle_Ship()
{
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	SetRootComponent(BoxComp);

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
	SceneComp->SetupAttachment(BoxComp);
		
	/*// 선박 StaticMesh 설정
	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMesh;*/

	/*ShipMesh->SetSimulatePhysics(true);
	ShipMesh->SetEnableGravity(true);*/

	/*// BuoyancyComponent 생성 및 부착
	ShipBuoyancy = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("ShipBuoyancy"));

	ShipMesh->SetMassOverrideInKg(NAME_None, 10.0f); */

	


}

void AVehicle_Ship::BeginPlay()
{
	Super::BeginPlay();

	/*// 부력 컴포넌트 찾기
	ShipBuoyancy = FindComponentByClass<UBuoyancyComponent>();
	if (ShipBuoyancy)
	{
		// 현재 부착된 컴포넌트 로그
		UE_LOG(LogTemp, Warning, TEXT("[DEBUG] BuoyancyComponent Found ✅"));

		// 현재 부력 포인트 개수
		UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Num Pontoons: %d"), ShipBuoyancy->BuoyancyData.Pontoons.Num());

		// 부력 계수
		UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Coefficient: %.2f"), ShipBuoyancy->BuoyancyData.BuoyancyCoefficient);

		// 최대 부력
		UE_LOG(LogTemp, Warning, TEXT("[DEBUG] MaxForce: %.2f"), ShipBuoyancy->BuoyancyData.MaxBuoyantForce);
	}

	// ShipMesh의 물리 상태
	if (ShipMesh)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Mass: %.2f"), ShipMesh->GetMass());
		UE_LOG(LogTemp, Warning, TEXT("[DEBUG] IsSimulatingPhysics: %s"), ShipMesh->IsSimulatingPhysics() ? TEXT("true") : TEXT("false"));
	}
	// ShipMesh를 SimulatingComponent에 연결
	/*if (ShipBuoyancy)
	{
		FProperty* Prop = UBuoyancyComponent::StaticClass()->FindPropertyByName(TEXT("SimulatingComponent"));
		if (FObjectProperty* ObjProp = CastField<FObjectProperty>(Prop))
		{
			void* Ptr = ObjProp->ContainerPtrToValuePtr<void>(ShipBuoyancy);
			ObjProp->SetObjectPropertyValue(Ptr, ShipMesh);
		}
	}#1#*/
}

void AVehicle_Ship::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
