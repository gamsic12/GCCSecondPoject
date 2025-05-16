// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCCSecondProject/DoorActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_ADoorActor();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_ADoorActor_NoRegister();
GCCSECONDPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_GCCSecondProject();
// End Cross Module References

// Begin Class ADoorActor Function OnTriggerBegin
struct Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics
{
	struct DoorActor_eventOnTriggerBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x8a\xb8\xeb\xa6\xac\xea\xb1\xb0 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "DoorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8a\xb8\xeb\xa6\xac\xea\xb1\xb0 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorActor_eventOnTriggerBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorActor_eventOnTriggerBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorActor_eventOnTriggerBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorActor_eventOnTriggerBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((DoorActor_eventOnTriggerBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DoorActor_eventOnTriggerBegin_Parms), &Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorActor_eventOnTriggerBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorActor, nullptr, "OnTriggerBegin", nullptr, nullptr, Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::DoorActor_eventOnTriggerBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::DoorActor_eventOnTriggerBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoorActor_OnTriggerBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorActor_OnTriggerBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoorActor::execOnTriggerBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ADoorActor Function OnTriggerBegin

// Begin Class ADoorActor Function OnTriggerEnd
struct Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics
{
	struct DoorActor_eventOnTriggerEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorActor_eventOnTriggerEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorActor_eventOnTriggerEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorActor_eventOnTriggerEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DoorActor_eventOnTriggerEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorActor, nullptr, "OnTriggerEnd", nullptr, nullptr, Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::DoorActor_eventOnTriggerEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::DoorActor_eventOnTriggerEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoorActor_OnTriggerEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorActor_OnTriggerEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoorActor::execOnTriggerEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ADoorActor Function OnTriggerEnd

// Begin Class ADoorActor
void ADoorActor::StaticRegisterNativesADoorActor()
{
	UClass* Class = ADoorActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTriggerBegin", &ADoorActor::execOnTriggerBegin },
		{ "OnTriggerEnd", &ADoorActor::execOnTriggerEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorActor);
UClass* Z_Construct_UClass_ADoorActor_NoRegister()
{
	return ADoorActor::StaticClass();
}
struct Z_Construct_UClass_ADoorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DoorActor.h" },
		{ "ModuleRelativePath", "DoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "DoorActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftDoor_MetaData[] = {
		{ "Category", "DoorActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightDoor_MetaData[] = {
		{ "Category", "DoorActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerZone_MetaData[] = {
		{ "Category", "DoorActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorSlideOffset_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "DoorActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerZone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorSlideOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoorActor_OnTriggerBegin, "OnTriggerBegin" }, // 1351251527
		{ &Z_Construct_UFunction_ADoorActor_OnTriggerEnd, "OnTriggerEnd" }, // 2325643777
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_LeftDoor = { "LeftDoor", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorActor, LeftDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftDoor_MetaData), NewProp_LeftDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_RightDoor = { "RightDoor", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorActor, RightDoor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightDoor_MetaData), NewProp_RightDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_TriggerZone = { "TriggerZone", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorActor, TriggerZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerZone_MetaData), NewProp_TriggerZone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_DoorSlideOffset = { "DoorSlideOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorActor, DoorSlideOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorSlideOffset_MetaData), NewProp_DoorSlideOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_LeftDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_RightDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_TriggerZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_DoorSlideOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GCCSecondProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoorActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ADoorActor, IInteractable), false },  // 947814800
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorActor_Statics::ClassParams = {
	&ADoorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoorActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoorActor()
{
	if (!Z_Registration_Info_UClass_ADoorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorActor.OuterSingleton, Z_Construct_UClass_ADoorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoorActor.OuterSingleton;
}
template<> GCCSECONDPROJECT_API UClass* StaticClass<ADoorActor>()
{
	return ADoorActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorActor);
ADoorActor::~ADoorActor() {}
// End Class ADoorActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoorActor, ADoorActor::StaticClass, TEXT("ADoorActor"), &Z_Registration_Info_UClass_ADoorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorActor), 3248551310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_1444897738(TEXT("/Script/GCCSecondProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
