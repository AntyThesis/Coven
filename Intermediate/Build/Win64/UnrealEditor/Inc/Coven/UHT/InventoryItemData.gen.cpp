// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Coven/InventoryItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemData() {}

// Begin Cross Module References
COVEN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData();
UPackage* Z_Construct_UPackage__Script_Coven();
// End Cross Module References

// Begin ScriptStruct FInventoryItemData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemData;
class UScriptStruct* FInventoryItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemData, (UObject*)Z_Construct_UPackage__Script_Coven(), TEXT("InventoryItemData"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemData.OuterSingleton;
}
template<> COVEN_API UScriptStruct* StaticStruct<FInventoryItemData>()
{
	return FInventoryItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "InventoryItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconFilePath_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "InventoryItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Item Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Icon for the item\n" },
#endif
		{ "ModuleRelativePath", "InventoryItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon for the item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClassPath_MetaData[] = {
		{ "Category", "InventoryItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the item\n" },
#endif
		{ "ModuleRelativePath", "InventoryItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IconFilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemClassPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_IconFilePath = { "IconFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, IconFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconFilePath_MetaData), NewProp_IconFilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_ItemClassPath = { "ItemClassPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemData, ItemClassPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClassPath_MetaData), NewProp_ItemClassPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_IconFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewProp_ItemClassPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Coven,
	nullptr,
	&NewStructOps,
	"InventoryItemData",
	Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemData_Statics::PropPointers),
	sizeof(FInventoryItemData),
	alignof(FInventoryItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemData()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemData.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemData.InnerSingleton;
}
// End ScriptStruct FInventoryItemData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_InventoryItemData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemData::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemData_Statics::NewStructOps, TEXT("InventoryItemData"), &Z_Registration_Info_UScriptStruct_InventoryItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemData), 1141982336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_InventoryItemData_h_1201006404(TEXT("/Script/Coven"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_InventoryItemData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_InventoryItemData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
