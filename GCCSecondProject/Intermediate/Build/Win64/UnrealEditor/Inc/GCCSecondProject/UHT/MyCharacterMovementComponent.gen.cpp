// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCCSecondProject/MyCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_UMyCharacterMovementComponent();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_UMyCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GCCSecondProject();
// End Cross Module References

// Begin Class UMyCharacterMovementComponent
void UMyCharacterMovementComponent::StaticRegisterNativesUMyCharacterMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyCharacterMovementComponent);
UClass* Z_Construct_UClass_UMyCharacterMovementComponent_NoRegister()
{
	return UMyCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UMyCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "MyCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GCCSecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyCharacterMovementComponent_Statics::ClassParams = {
	&UMyCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UMyCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UMyCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyCharacterMovementComponent.OuterSingleton;
}
template<> GCCSECONDPROJECT_API UClass* StaticClass<UMyCharacterMovementComponent>()
{
	return UMyCharacterMovementComponent::StaticClass();
}
UMyCharacterMovementComponent::UMyCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCharacterMovementComponent);
UMyCharacterMovementComponent::~UMyCharacterMovementComponent() {}
// End Class UMyCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_MyCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyCharacterMovementComponent, UMyCharacterMovementComponent::StaticClass, TEXT("UMyCharacterMovementComponent"), &Z_Registration_Info_UClass_UMyCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyCharacterMovementComponent), 92632672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_MyCharacterMovementComponent_h_3226553179(TEXT("/Script/GCCSecondProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_MyCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_MyCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
