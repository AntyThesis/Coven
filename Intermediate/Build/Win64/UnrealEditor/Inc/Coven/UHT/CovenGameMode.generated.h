// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CovenGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COVEN_CovenGameMode_generated_h
#error "CovenGameMode.generated.h already included, missing '#pragma once' in CovenGameMode.h"
#endif
#define COVEN_CovenGameMode_generated_h

#define FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACovenGameMode(); \
	friend struct Z_Construct_UClass_ACovenGameMode_Statics; \
public: \
	DECLARE_CLASS(ACovenGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Coven"), COVEN_API) \
	DECLARE_SERIALIZER(ACovenGameMode)


#define FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACovenGameMode(ACovenGameMode&&); \
	ACovenGameMode(const ACovenGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COVEN_API, ACovenGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACovenGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACovenGameMode) \
	COVEN_API virtual ~ACovenGameMode();


#define FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_9_PROLOG
#define FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COVEN_API UClass* StaticClass<class ACovenGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
