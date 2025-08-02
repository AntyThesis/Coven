// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPCBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COVEN_NPCBase_generated_h
#error "NPCBase.generated.h already included, missing '#pragma once' in NPCBase.h"
#endif
#define COVEN_NPCBase_generated_h

#define FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCBase(); \
	friend struct Z_Construct_UClass_ANPCBase_Statics; \
public: \
	DECLARE_CLASS(ANPCBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Coven"), NO_API) \
	DECLARE_SERIALIZER(ANPCBase)


#define FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANPCBase(ANPCBase&&); \
	ANPCBase(const ANPCBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCBase) \
	NO_API virtual ~ANPCBase();


#define FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_9_PROLOG
#define FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COVEN_API UClass* StaticClass<class ANPCBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
