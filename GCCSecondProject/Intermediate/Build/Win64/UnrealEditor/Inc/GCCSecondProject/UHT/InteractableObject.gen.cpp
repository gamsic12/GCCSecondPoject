// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCCSecondProject/InteractableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableObject() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_AInteractableObject();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_AInteractableObject_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_GCCSecondProject();
// End Cross Module References

// Begin Class AInteractableObject
void AInteractableObject::StaticRegisterNativesAInteractableObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableObject);
UClass* Z_Construct_UClass_AInteractableObject_NoRegister()
{
	return AInteractableObject::StaticClass();
}
struct Z_Construct_UClass_AInteractableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableObject.h" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "InteractableObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb6\xa9\xeb\x8f\x8c\xec\xb2\xb4\xec\x99\x80 \xec\x99\xb8\xea\xb4\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb3\xa0\xec\x8b\xb6\xeb\x8b\xa4.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb6\xa9\xeb\x8f\x8c\xec\xb2\xb4\xec\x99\x80 \xec\x99\xb8\xea\xb4\x80\xec\x9d\x84 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb3\xa0\xec\x8b\xb6\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "InteractableObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableObject, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableObject, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_MeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GCCSecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableObject_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AInteractableObject, IInteractable), false },  // 947814800
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableObject_Statics::ClassParams = {
	&AInteractableObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInteractableObject_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableObject()
{
	if (!Z_Registration_Info_UClass_AInteractableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableObject.OuterSingleton, Z_Construct_UClass_AInteractableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableObject.OuterSingleton;
}
template<> GCCSECONDPROJECT_API UClass* StaticClass<AInteractableObject>()
{
	return AInteractableObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableObject);
AInteractableObject::~AInteractableObject() {}
// End Class AInteractableObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_InteractableObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableObject, AInteractableObject::StaticClass, TEXT("AInteractableObject"), &Z_Registration_Info_UClass_AInteractableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableObject), 3511443791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_InteractableObject_h_590598970(TEXT("/Script/GCCSecondProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_InteractableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_InteractableObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
