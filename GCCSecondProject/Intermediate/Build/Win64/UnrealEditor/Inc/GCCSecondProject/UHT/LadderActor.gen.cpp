// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCCSecondProject/LadderActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLadderActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_ALadderActor();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_ALadderActor_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_GCCSecondProject();
// End Cross Module References

// Begin Class ALadderActor
void ALadderActor::StaticRegisterNativesALadderActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALadderActor);
UClass* Z_Construct_UClass_ALadderActor_NoRegister()
{
	return ALadderActor::StaticClass();
}
struct Z_Construct_UClass_ALadderActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LadderActor.h" },
		{ "ModuleRelativePath", "LadderActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LadderMesh_MetaData[] = {
		{ "Category", "Ladder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xeb\x8b\xa4\xeb\xa6\xac \xeb\xb3\xb8\xec\xb2\xb4 \xeb\xa9\x94\xec\x8b\x9c (\xed\x95\x84\xec\x9a\x94 \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 \xec\xa0\x9c\xea\xb1\xb0\xed\x95\xb4\xeb\x8f\x84 \xeb\x90\xa8)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LadderActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xeb\x8b\xa4\xeb\xa6\xac \xeb\xb3\xb8\xec\xb2\xb4 \xeb\xa9\x94\xec\x8b\x9c (\xed\x95\x84\xec\x9a\x94 \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 \xec\xa0\x9c\xea\xb1\xb0\xed\x95\xb4\xeb\x8f\x84 \xeb\x90\xa8)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Ladder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xeb\x8b\xa4\xeb\xa6\xac \xec\x83\x81\xed\x98\xb8\xec\x9e\x91\xec\x9a\xa9\xec\x9a\xa9 \xed\x8a\xb8\xeb\xa6\xac\xea\xb1\xb0\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LadderActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xeb\x8b\xa4\xeb\xa6\xac \xec\x83\x81\xed\x98\xb8\xec\x9e\x91\xec\x9a\xa9\xec\x9a\xa9 \xed\x8a\xb8\xeb\xa6\xac\xea\xb1\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopMarker_MetaData[] = {
		{ "Category", "Ladder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xeb\x8b\xa4\xeb\xa6\xac \xec\x9c\x84\xec\xaa\xbd \xea\xb8\xb0\xec\xa4\x80\xec\xa0\x90\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LadderActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xeb\x8b\xa4\xeb\xa6\xac \xec\x9c\x84\xec\xaa\xbd \xea\xb8\xb0\xec\xa4\x80\xec\xa0\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomMarker_MetaData[] = {
		{ "Category", "Ladder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xeb\x8b\xa4\xeb\xa6\xac \xec\x95\x84\xeb\x9e\x98\xec\xaa\xbd \xea\xb8\xb0\xec\xa4\x80\xec\xa0\x90\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LadderActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xeb\x8b\xa4\xeb\xa6\xac \xec\x95\x84\xeb\x9e\x98\xec\xaa\xbd \xea\xb8\xb0\xec\xa4\x80\xec\xa0\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopZ_MetaData[] = {
		{ "Category", "Ladder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9c\x84\xec\x95\x84\xeb\x9e\x98 Z\xea\xb0\x92 \xea\xb3\x84\xec\x82\xb0 \xea\xb2\xb0\xea\xb3\xbc\n" },
#endif
		{ "ModuleRelativePath", "LadderActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9c\x84\xec\x95\x84\xeb\x9e\x98 Z\xea\xb0\x92 \xea\xb3\x84\xec\x82\xb0 \xea\xb2\xb0\xea\xb3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomZ_MetaData[] = {
		{ "Category", "Ladder|Debug" },
		{ "ModuleRelativePath", "LadderActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LadderMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomMarker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TopZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALadderActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadderActor_Statics::NewProp_LadderMesh = { "LadderMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadderActor, LadderMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LadderMesh_MetaData), NewProp_LadderMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadderActor_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadderActor, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadderActor_Statics::NewProp_TopMarker = { "TopMarker", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadderActor, TopMarker), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopMarker_MetaData), NewProp_TopMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadderActor_Statics::NewProp_BottomMarker = { "BottomMarker", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadderActor, BottomMarker), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomMarker_MetaData), NewProp_BottomMarker_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALadderActor_Statics::NewProp_TopZ = { "TopZ", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadderActor, TopZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopZ_MetaData), NewProp_TopZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALadderActor_Statics::NewProp_BottomZ = { "BottomZ", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadderActor, BottomZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomZ_MetaData), NewProp_BottomZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALadderActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadderActor_Statics::NewProp_LadderMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadderActor_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadderActor_Statics::NewProp_TopMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadderActor_Statics::NewProp_BottomMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadderActor_Statics::NewProp_TopZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadderActor_Statics::NewProp_BottomZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALadderActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALadderActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GCCSecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALadderActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALadderActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ALadderActor, IInteractable), false },  // 947814800
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALadderActor_Statics::ClassParams = {
	&ALadderActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALadderActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALadderActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALadderActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALadderActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALadderActor()
{
	if (!Z_Registration_Info_UClass_ALadderActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALadderActor.OuterSingleton, Z_Construct_UClass_ALadderActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALadderActor.OuterSingleton;
}
template<> GCCSECONDPROJECT_API UClass* StaticClass<ALadderActor>()
{
	return ALadderActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALadderActor);
ALadderActor::~ALadderActor() {}
// End Class ALadderActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_LadderActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALadderActor, ALadderActor::StaticClass, TEXT("ALadderActor"), &Z_Registration_Info_UClass_ALadderActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALadderActor), 235566425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_LadderActor_h_2605262177(TEXT("/Script/GCCSecondProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_LadderActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_LadderActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
