// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCCSecondProject/FuelActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFuelActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_AFuelActor();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_AFuelActor_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_GCCSecondProject();
// End Cross Module References

// Begin Class AFuelActor
void AFuelActor::StaticRegisterNativesAFuelActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFuelActor);
UClass* Z_Construct_UClass_AFuelActor_NoRegister()
{
	return AFuelActor::StaticClass();
}
struct Z_Construct_UClass_AFuelActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FuelActor.h" },
		{ "ModuleRelativePath", "FuelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Fuel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa3\xa8\xed\x8a\xb8 \xec\xb6\xa9\xeb\x8f\x8c \xeb\xb0\x95\xec\x8a\xa4 (\xec\x83\x81\xed\x98\xb8\xec\x9e\x91\xec\x9a\xa9 \xea\xb0\x90\xec\xa7\x80\xec\x9a\xa9)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FuelActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa3\xa8\xed\x8a\xb8 \xec\xb6\xa9\xeb\x8f\x8c \xeb\xb0\x95\xec\x8a\xa4 (\xec\x83\x81\xed\x98\xb8\xec\x9e\x91\xec\x9a\xa9 \xea\xb0\x90\xec\xa7\x80\xec\x9a\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Fuel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\xa4\xec\xa0\x9c \xec\x97\xb0\xeb\xa3\x8c \xeb\xaa\xa8\xeb\x8d\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FuelActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\xa4\xec\xa0\x9c \xec\x97\xb0\xeb\xa3\x8c \xeb\xaa\xa8\xeb\x8d\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurredMaterial_MetaData[] = {
		{ "Category", "Fuel" },
		{ "ModuleRelativePath", "FuelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Fuel" },
		{ "ModuleRelativePath", "FuelActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCarried_MetaData[] = {
		{ "Category", "Fuel" },
		{ "ModuleRelativePath", "FuelActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlurredMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static void NewProp_bIsCarried_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCarried;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFuelActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFuelActor_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFuelActor, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFuelActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFuelActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFuelActor_Statics::NewProp_BlurredMaterial = { "BlurredMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFuelActor, BlurredMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurredMaterial_MetaData), NewProp_BlurredMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFuelActor_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFuelActor, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
void Z_Construct_UClass_AFuelActor_Statics::NewProp_bIsCarried_SetBit(void* Obj)
{
	((AFuelActor*)Obj)->bIsCarried = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFuelActor_Statics::NewProp_bIsCarried = { "bIsCarried", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFuelActor), &Z_Construct_UClass_AFuelActor_Statics::NewProp_bIsCarried_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCarried_MetaData), NewProp_bIsCarried_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFuelActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFuelActor_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFuelActor_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFuelActor_Statics::NewProp_BlurredMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFuelActor_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFuelActor_Statics::NewProp_bIsCarried,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFuelActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFuelActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GCCSecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFuelActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFuelActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AFuelActor, IInteractable), false },  // 947814800
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFuelActor_Statics::ClassParams = {
	&AFuelActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFuelActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFuelActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFuelActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFuelActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFuelActor()
{
	if (!Z_Registration_Info_UClass_AFuelActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFuelActor.OuterSingleton, Z_Construct_UClass_AFuelActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFuelActor.OuterSingleton;
}
template<> GCCSECONDPROJECT_API UClass* StaticClass<AFuelActor>()
{
	return AFuelActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFuelActor);
AFuelActor::~AFuelActor() {}
// End Class AFuelActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_FuelActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFuelActor, AFuelActor::StaticClass, TEXT("AFuelActor"), &Z_Registration_Info_UClass_AFuelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFuelActor), 2702731965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_FuelActor_h_1656720523(TEXT("/Script/GCCSecondProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_FuelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_FuelActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
