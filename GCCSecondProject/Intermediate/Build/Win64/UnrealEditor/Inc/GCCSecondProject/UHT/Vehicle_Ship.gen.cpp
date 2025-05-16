// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCCSecondProject/Vehicle_Ship.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicle_Ship() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_AVehicle_Ship();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_AVehicle_Ship_NoRegister();
UPackage* Z_Construct_UPackage__Script_GCCSecondProject();
WATER_API UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister();
// End Cross Module References

// Begin Class AVehicle_Ship
void AVehicle_Ship::StaticRegisterNativesAVehicle_Ship()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVehicle_Ship);
UClass* Z_Construct_UClass_AVehicle_Ship_NoRegister()
{
	return AVehicle_Ship::StaticClass();
}
struct Z_Construct_UClass_AVehicle_Ship_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// #include \"BuoyantMeshComponent.h\"\n" },
#endif
		{ "IncludePath", "Vehicle_Ship.h" },
		{ "ModuleRelativePath", "Vehicle_Ship.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#include \"BuoyantMeshComponent.h\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "Vehicle_Ship" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb6\xa9\xeb\x8f\x8c\xec\xb2\xb4\xec\x99\x80 \xec\x99\xb8\xea\xb4\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb3\xa0\xec\x8b\xb6\xeb\x8b\xa4.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicle_Ship.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb6\xa9\xeb\x8f\x8c\xec\xb2\xb4\xec\x99\x80 \xec\x99\xb8\xea\xb4\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb3\xa0\xec\x8b\xb6\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComp_MetaData[] = {
		{ "Category", "Ship" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa0\xeb\xb0\x95 SceneComponent\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicle_Ship.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa0\xeb\xb0\x95 SceneComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShipBuoyancy_MetaData[] = {
		{ "Category", "Buoyancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*// \xec\x84\xa0\xeb\xb0\x95 StaticMesh\n\x09UPROPERTY(VisibleAnywhere, Category = \"Ship\")\n\x09UStaticMeshComponent* ShipMesh;*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicle_Ship.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// \xec\x84\xa0\xeb\xb0\x95 StaticMesh\n       UPROPERTY(VisibleAnywhere, Category = \"Ship\")\n       UStaticMeshComponent* ShipMesh;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipBuoyancy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicle_Ship>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicle_Ship_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle_Ship, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicle_Ship_Statics::NewProp_SceneComp = { "SceneComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle_Ship, SceneComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComp_MetaData), NewProp_SceneComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicle_Ship_Statics::NewProp_ShipBuoyancy = { "ShipBuoyancy", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle_Ship, ShipBuoyancy), Z_Construct_UClass_UBuoyancyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShipBuoyancy_MetaData), NewProp_ShipBuoyancy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicle_Ship_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Ship_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Ship_Statics::NewProp_SceneComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Ship_Statics::NewProp_ShipBuoyancy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Ship_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVehicle_Ship_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GCCSecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Ship_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVehicle_Ship_Statics::ClassParams = {
	&AVehicle_Ship::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVehicle_Ship_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Ship_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Ship_Statics::Class_MetaDataParams), Z_Construct_UClass_AVehicle_Ship_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVehicle_Ship()
{
	if (!Z_Registration_Info_UClass_AVehicle_Ship.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVehicle_Ship.OuterSingleton, Z_Construct_UClass_AVehicle_Ship_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVehicle_Ship.OuterSingleton;
}
template<> GCCSECONDPROJECT_API UClass* StaticClass<AVehicle_Ship>()
{
	return AVehicle_Ship::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicle_Ship);
AVehicle_Ship::~AVehicle_Ship() {}
// End Class AVehicle_Ship

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_Vehicle_Ship_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVehicle_Ship, AVehicle_Ship::StaticClass, TEXT("AVehicle_Ship"), &Z_Registration_Info_UClass_AVehicle_Ship, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVehicle_Ship), 906648103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_Vehicle_Ship_h_4110867628(TEXT("/Script/GCCSecondProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_Vehicle_Ship_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_Vehicle_Ship_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
