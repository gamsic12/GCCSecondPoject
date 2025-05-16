// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCCSecondProject/LeverActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeverActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_ALeverActor();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_ALeverActor_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_GCCSecondProject();
// End Cross Module References

// Begin Class ALeverActor
void ALeverActor::StaticRegisterNativesALeverActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeverActor);
UClass* Z_Construct_UClass_ALeverActor_NoRegister()
{
	return ALeverActor::StaticClass();
}
struct Z_Construct_UClass_ALeverActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LeverActor.h" },
		{ "ModuleRelativePath", "LeverActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeverMesh_MetaData[] = {
		{ "Category", "Lever" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa0\x88\xeb\xb2\x84\xec\x9d\x98 \xec\x99\xb8\xed\x98\x95\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LeverActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa0\x88\xeb\xb2\x84\xec\x9d\x98 \xec\x99\xb8\xed\x98\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeverOn_MetaData[] = {
		{ "Category", "Lever" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\x84\xea\xb0\x80 \xec\xbc\x9c\xec\xa0\xb8 \xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80 \xec\x97\xac\xeb\xb6\x80\n" },
#endif
		{ "ModuleRelativePath", "LeverActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\xa0\x88\xeb\xb2\x84\xea\xb0\x80 \xec\xbc\x9c\xec\xa0\xb8 \xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80 \xec\x97\xac\xeb\xb6\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeverMesh;
	static void NewProp_bIsLeverOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeverOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeverActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALeverActor_Statics::NewProp_LeverMesh = { "LeverMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALeverActor, LeverMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeverMesh_MetaData), NewProp_LeverMesh_MetaData) };
void Z_Construct_UClass_ALeverActor_Statics::NewProp_bIsLeverOn_SetBit(void* Obj)
{
	((ALeverActor*)Obj)->bIsLeverOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALeverActor_Statics::NewProp_bIsLeverOn = { "bIsLeverOn", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALeverActor), &Z_Construct_UClass_ALeverActor_Statics::NewProp_bIsLeverOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLeverOn_MetaData), NewProp_bIsLeverOn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeverActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverActor_Statics::NewProp_LeverMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverActor_Statics::NewProp_bIsLeverOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeverActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALeverActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GCCSecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALeverActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALeverActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ALeverActor, IInteractable), false },  // 947814800
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeverActor_Statics::ClassParams = {
	&ALeverActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALeverActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALeverActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALeverActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALeverActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALeverActor()
{
	if (!Z_Registration_Info_UClass_ALeverActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeverActor.OuterSingleton, Z_Construct_UClass_ALeverActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALeverActor.OuterSingleton;
}
template<> GCCSECONDPROJECT_API UClass* StaticClass<ALeverActor>()
{
	return ALeverActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALeverActor);
ALeverActor::~ALeverActor() {}
// End Class ALeverActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_LeverActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALeverActor, ALeverActor::StaticClass, TEXT("ALeverActor"), &Z_Registration_Info_UClass_ALeverActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeverActor), 904822561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_LeverActor_h_1667871820(TEXT("/Script/GCCSecondProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_LeverActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_LeverActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
