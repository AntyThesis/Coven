// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Coven/SaveGameObject.h"
#include "Coven/InventoryItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameObject() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COVEN_API UClass* Z_Construct_UClass_USaveGameObject();
COVEN_API UClass* Z_Construct_UClass_USaveGameObject_NoRegister();
COVEN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_Coven();
// End Cross Module References

// Begin Class USaveGameObject
void USaveGameObject::StaticRegisterNativesUSaveGameObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameObject);
UClass* Z_Construct_UClass_USaveGameObject_NoRegister()
{
	return USaveGameObject::StaticClass();
}
struct Z_Construct_UClass_USaveGameObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SaveGameObject.h" },
		{ "ModuleRelativePath", "SaveGameObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItems_MetaData[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "SaveGameObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array to hold inventory items\n" },
#endif
		{ "ModuleRelativePath", "SaveGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array to hold inventory items" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRotation_MetaData[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player's location in the game world\n" },
#endif
		{ "ModuleRelativePath", "SaveGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player's location in the game world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CovenLevel_MetaData[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player's rotation in the game world\n" },
#endif
		{ "ModuleRelativePath", "SaveGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player's rotation in the game world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpThreshold_MetaData[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Level of the player's Coven\n" },
#endif
		{ "ModuleRelativePath", "SaveGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Level of the player's Coven" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExp_MetaData[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Total Experience points needed to reach the next level\n" },
#endif
		{ "ModuleRelativePath", "SaveGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total Experience points needed to reach the next level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpNeeded_MetaData[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current experience points of the player\n" },
#endif
		{ "ModuleRelativePath", "SaveGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current experience points of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfWitches_MetaData[] = {
		{ "Category", "Save Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Experience points needed to reach the next level\n" },
#endif
		{ "ModuleRelativePath", "SaveGameObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Experience points needed to reach the next level" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CovenLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentExp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpNeeded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfWitches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_InventoryItems_Inner = { "InventoryItems", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 1141982336
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_InventoryItems = { "InventoryItems", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameObject, InventoryItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryItems_MetaData), NewProp_InventoryItems_MetaData) }; // 1141982336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameObject, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLocation_MetaData), NewProp_PlayerLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_PlayerRotation = { "PlayerRotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameObject, PlayerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRotation_MetaData), NewProp_PlayerRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_CovenLevel = { "CovenLevel", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameObject, CovenLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CovenLevel_MetaData), NewProp_CovenLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_ExpThreshold = { "ExpThreshold", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameObject, ExpThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpThreshold_MetaData), NewProp_ExpThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_CurrentExp = { "CurrentExp", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameObject, CurrentExp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentExp_MetaData), NewProp_CurrentExp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_ExpNeeded = { "ExpNeeded", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameObject, ExpNeeded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpNeeded_MetaData), NewProp_ExpNeeded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_NumberOfWitches = { "NumberOfWitches", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveGameObject, NumberOfWitches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfWitches_MetaData), NewProp_NumberOfWitches_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_InventoryItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_InventoryItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_PlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_PlayerRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_CovenLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_ExpThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_CurrentExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_ExpNeeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_NumberOfWitches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveGameObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Coven,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameObject_Statics::ClassParams = {
	&USaveGameObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveGameObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGameObject()
{
	if (!Z_Registration_Info_UClass_USaveGameObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameObject.OuterSingleton, Z_Construct_UClass_USaveGameObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGameObject.OuterSingleton;
}
template<> COVEN_API UClass* StaticClass<USaveGameObject>()
{
	return USaveGameObject::StaticClass();
}
USaveGameObject::USaveGameObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameObject);
USaveGameObject::~USaveGameObject() {}
// End Class USaveGameObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameObject, USaveGameObject::StaticClass, TEXT("USaveGameObject"), &Z_Registration_Info_UClass_USaveGameObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameObject), 2218893012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_4209602558(TEXT("/Script/Coven"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_SaveGameObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
