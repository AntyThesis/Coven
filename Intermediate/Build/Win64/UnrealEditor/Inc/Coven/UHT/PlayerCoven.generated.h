// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCoven.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANPCBase;
#ifdef COVEN_PlayerCoven_generated_h
#error "PlayerCoven.generated.h already included, missing '#pragma once' in PlayerCoven.h"
#endif
#define COVEN_PlayerCoven_generated_h

#define FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_9_DELEGATE \
COVEN_API void FOnWitchAdded_DelegateWrapper(const FMulticastScriptDelegate& OnWitchAdded);


#define FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_10_DELEGATE \
COVEN_API void FOnWitchRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnWitchRemoved);


#define FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveWitch); \
	DECLARE_FUNCTION(execAddWitch); \
	DECLARE_FUNCTION(execEarnExp); \
	DECLARE_FUNCTION(execIncreaseLevel);


#define FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCoven(); \
	friend struct Z_Construct_UClass_APlayerCoven_Statics; \
public: \
	DECLARE_CLASS(APlayerCoven, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Coven"), NO_API) \
	DECLARE_SERIALIZER(APlayerCoven)


#define FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCoven(APlayerCoven&&); \
	APlayerCoven(const APlayerCoven&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCoven); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCoven); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCoven) \
	NO_API virtual ~APlayerCoven();


#define FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_15_PROLOG
#define FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COVEN_API UClass* StaticClass<class APlayerCoven>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
