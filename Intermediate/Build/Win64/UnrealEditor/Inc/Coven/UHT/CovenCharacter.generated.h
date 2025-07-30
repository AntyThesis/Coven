// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CovenCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COVEN_CovenCharacter_generated_h
#error "CovenCharacter.generated.h already included, missing '#pragma once' in CovenCharacter.h"
#endif
#define COVEN_CovenCharacter_generated_h

#define FID_Unreal_Projects_Coven_Source_Coven_CovenCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACovenCharacter(); \
	friend struct Z_Construct_UClass_ACovenCharacter_Statics; \
public: \
	DECLARE_CLASS(ACovenCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Coven"), NO_API) \
	DECLARE_SERIALIZER(ACovenCharacter)


#define FID_Unreal_Projects_Coven_Source_Coven_CovenCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACovenCharacter(ACovenCharacter&&); \
	ACovenCharacter(const ACovenCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACovenCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACovenCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACovenCharacter) \
	NO_API virtual ~ACovenCharacter();


#define FID_Unreal_Projects_Coven_Source_Coven_CovenCharacter_h_19_PROLOG
#define FID_Unreal_Projects_Coven_Source_Coven_CovenCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Coven_Source_Coven_CovenCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Coven_Source_Coven_CovenCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COVEN_API UClass* StaticClass<class ACovenCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Coven_Source_Coven_CovenCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
