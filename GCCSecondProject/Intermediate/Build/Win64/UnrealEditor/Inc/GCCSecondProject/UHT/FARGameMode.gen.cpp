// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCCSecondProject/FARGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFARGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_AFARGameMode();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_AFARGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GCCSecondProject();
// End Cross Module References

// Begin Class AFARGameMode
void AFARGameMode::StaticRegisterNativesAFARGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFARGameMode);
UClass* Z_Construct_UClass_AFARGameMode_NoRegister()
{
	return AFARGameMode::StaticClass();
}
struct Z_Construct_UClass_AFARGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FARGameMode.h" },
		{ "ModuleRelativePath", "FARGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFARGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFARGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GCCSecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFARGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFARGameMode_Statics::ClassParams = {
	&AFARGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFARGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFARGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFARGameMode()
{
	if (!Z_Registration_Info_UClass_AFARGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFARGameMode.OuterSingleton, Z_Construct_UClass_AFARGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFARGameMode.OuterSingleton;
}
template<> GCCSECONDPROJECT_API UClass* StaticClass<AFARGameMode>()
{
	return AFARGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFARGameMode);
AFARGameMode::~AFARGameMode() {}
// End Class AFARGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_FARGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFARGameMode, AFARGameMode::StaticClass, TEXT("AFARGameMode"), &Z_Registration_Info_UClass_AFARGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFARGameMode), 1236121199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_FARGameMode_h_103926974(TEXT("/Script/GCCSecondProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_FARGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_FARGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
