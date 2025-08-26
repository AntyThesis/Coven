// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveGameObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COVEN_SaveGameObject_generated_h
#error "SaveGameObject.generated.h already included, missing '#pragma once' in SaveGameObject.h"
#endif
#define COVEN_SaveGameObject_generated_h

#define FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameObject(); \
	friend struct Z_Construct_UClass_USaveGameObject_Statics; \
public: \
	DECLARE_CLASS(USaveGameObject, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Coven"), NO_API) \
	DECLARE_SERIALIZER(USaveGameObject)


#define FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveGameObject(USaveGameObject&&); \
	USaveGameObject(const USaveGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameObject) \
	NO_API virtual ~USaveGameObject();


#define FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_13_PROLOG
#define FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COVEN_API UClass* StaticClass<class USaveGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
