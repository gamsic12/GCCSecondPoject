// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DoorActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GCCSECONDPROJECT_DoorActor_generated_h
#error "DoorActor.generated.h already included, missing '#pragma once' in DoorActor.h"
#endif
#define GCCSECONDPROJECT_DoorActor_generated_h

#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTriggerEnd); \
	DECLARE_FUNCTION(execOnTriggerBegin);


#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorActor(); \
	friend struct Z_Construct_UClass_ADoorActor_Statics; \
public: \
	DECLARE_CLASS(ADoorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCCSecondProject"), NO_API) \
	DECLARE_SERIALIZER(ADoorActor) \
	virtual UObject* _getUObject() const override { return const_cast<ADoorActor*>(this); }


#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADoorActor(ADoorActor&&); \
	ADoorActor(const ADoorActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorActor) \
	NO_API virtual ~ADoorActor();


#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_8_PROLOG
#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCCSECONDPROJECT_API UClass* StaticClass<class ADoorActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_DoorActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
