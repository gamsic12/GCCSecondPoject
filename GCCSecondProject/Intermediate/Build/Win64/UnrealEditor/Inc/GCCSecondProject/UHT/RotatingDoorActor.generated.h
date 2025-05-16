// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RotatingDoorActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GCCSECONDPROJECT_RotatingDoorActor_generated_h
#error "RotatingDoorActor.generated.h already included, missing '#pragma once' in RotatingDoorActor.h"
#endif
#define GCCSECONDPROJECT_RotatingDoorActor_generated_h

#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_RotatingDoorActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTriggerEnd); \
	DECLARE_FUNCTION(execOnTriggerBegin);


#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_RotatingDoorActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARotatingDoorActor(); \
	friend struct Z_Construct_UClass_ARotatingDoorActor_Statics; \
public: \
	DECLARE_CLASS(ARotatingDoorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCCSecondProject"), NO_API) \
	DECLARE_SERIALIZER(ARotatingDoorActor) \
	virtual UObject* _getUObject() const override { return const_cast<ARotatingDoorActor*>(this); }


#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_RotatingDoorActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARotatingDoorActor(ARotatingDoorActor&&); \
	ARotatingDoorActor(const ARotatingDoorActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotatingDoorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotatingDoorActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARotatingDoorActor) \
	NO_API virtual ~ARotatingDoorActor();


#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_RotatingDoorActor_h_10_PROLOG
#define FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_RotatingDoorActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_RotatingDoorActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_RotatingDoorActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_RotatingDoorActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCCSECONDPROJECT_API UClass* StaticClass<class ARotatingDoorActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_GCCSecondProject_Source_GCCSecondProject_RotatingDoorActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
