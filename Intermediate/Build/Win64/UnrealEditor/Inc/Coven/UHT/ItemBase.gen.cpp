// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Coven/ItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}

// Begin Cross Module References
COVEN_API UClass* Z_Construct_UClass_ACovenCharacter_NoRegister();
COVEN_API UClass* Z_Construct_UClass_AItemBase();
COVEN_API UClass* Z_Construct_UClass_AItemBase_NoRegister();
COVEN_API UEnum* Z_Construct_UEnum_Coven_EItemType();
COVEN_API UFunction* Z_Construct_UDelegateFunction_Coven_OnPickedUp__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Coven();
// End Cross Module References

// Begin Enum EItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Coven_EItemType, (UObject*)Z_Construct_UPackage__Script_Coven(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> COVEN_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_Coven_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KeyItem.DisplayName", "Key Item" },
		{ "KeyItem.Name", "EItemType::KeyItem" },
		{ "ModuleRelativePath", "ItemBase.h" },
		{ "QuestItem.DisplayName", "Quest Item" },
		{ "QuestItem.Name", "EItemType::QuestItem" },
		{ "RegularItem.DisplayName", "Regular Item" },
		{ "RegularItem.Name", "EItemType::RegularItem" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::RegularItem", (int64)EItemType::RegularItem },
		{ "EItemType::QuestItem", (int64)EItemType::QuestItem },
		{ "EItemType::KeyItem", (int64)EItemType::KeyItem },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Coven_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Coven,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_Coven_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Coven_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Coven_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Coven_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Coven_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Coven_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// End Enum EItemType

// Begin Delegate FOnPickedUp
struct Z_Construct_UDelegateFunction_Coven_OnPickedUp__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Coven_OnPickedUp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Coven, nullptr, "OnPickedUp__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Coven_OnPickedUp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Coven_OnPickedUp__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Coven_OnPickedUp__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Coven_OnPickedUp__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPickedUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickedUp)
{
	OnPickedUp.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPickedUp

// Begin Class AItemBase Function Interact
struct Z_Construct_UFunction_AItemBase_Interact_Statics
{
	struct ItemBase_eventInteract_Parms
	{
		ACovenCharacter* InteractingCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBase_Interact_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventInteract_Parms, InteractingCharacter), Z_Construct_UClass_ACovenCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBase_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBase_Interact_Statics::NewProp_InteractingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBase_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBase, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_AItemBase_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_Interact_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemBase_Interact_Statics::ItemBase_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemBase_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemBase_Interact_Statics::ItemBase_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemBase_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemBase_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemBase::execInteract)
{
	P_GET_OBJECT(ACovenCharacter,Z_Param_InteractingCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact(Z_Param_InteractingCharacter);
	P_NATIVE_END;
}
// End Class AItemBase Function Interact

// Begin Class AItemBase Function UseItem
struct Z_Construct_UFunction_AItemBase_UseItem_Statics
{
	struct ItemBase_eventUseItem_Parms
	{
		ACovenCharacter* UsingCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to handle interaction with the item\n" },
#endif
		{ "ModuleRelativePath", "ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to handle interaction with the item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UsingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBase_UseItem_Statics::NewProp_UsingCharacter = { "UsingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemBase_eventUseItem_Parms, UsingCharacter), Z_Construct_UClass_ACovenCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBase_UseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBase_UseItem_Statics::NewProp_UsingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_UseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBase_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBase, nullptr, "UseItem", nullptr, nullptr, Z_Construct_UFunction_AItemBase_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_UseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemBase_UseItem_Statics::ItemBase_eventUseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemBase_UseItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemBase_UseItem_Statics::ItemBase_eventUseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemBase_UseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemBase_UseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemBase::execUseItem)
{
	P_GET_OBJECT(ACovenCharacter,Z_Param_UsingCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseItem(Z_Param_UsingCharacter);
	P_NATIVE_END;
}
// End Class AItemBase Function UseItem

// Begin Class AItemBase
void AItemBase::StaticRegisterNativesAItemBase()
{
	UClass* Class = AItemBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &AItemBase::execInteract },
		{ "UseItem", &AItemBase::execUseItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemBase);
UClass* Z_Construct_UClass_AItemBase_NoRegister()
{
	return AItemBase::StaticClass();
}
struct Z_Construct_UClass_AItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward declaration of the static mesh component class\n" },
#endif
		{ "IncludePath", "ItemBase.h" },
		{ "ModuleRelativePath", "ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declaration of the static mesh component class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPickedUp_MetaData[] = {
		{ "Category", "Item Delegates" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered when the item is picked up\n" },
#endif
		{ "ModuleRelativePath", "ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when the item is picked up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "Category", "Item Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of the item\n" },
#endif
		{ "ModuleRelativePath", "ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Item Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Icon for the item\n" },
#endif
		{ "ModuleRelativePath", "ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon for the item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Item Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Name of the item\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "Item Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh for the item\n" },
#endif
		{ "ModuleRelativePath", "ItemBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh for the item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPickedUp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemBase_Interact, "Interact" }, // 2701342863
		{ &Z_Construct_UFunction_AItemBase_UseItem, "UseItem" }, // 1800589613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_OnPickedUp = { "OnPickedUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, OnPickedUp), Z_Construct_UDelegateFunction_Coven_OnPickedUp__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPickedUp_MetaData), NewProp_OnPickedUp_MetaData) }; // 1761263457
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, ItemType), Z_Construct_UEnum_Coven_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 1782976229
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemBase, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_OnPickedUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Coven,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemBase_Statics::ClassParams = {
	&AItemBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItemBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemBase()
{
	if (!Z_Registration_Info_UClass_AItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemBase.OuterSingleton, Z_Construct_UClass_AItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemBase.OuterSingleton;
}
template<> COVEN_API UClass* StaticClass<AItemBase>()
{
	return AItemBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBase);
AItemBase::~AItemBase() {}
// End Class AItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_ItemBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1782976229U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemBase, AItemBase::StaticClass, TEXT("AItemBase"), &Z_Registration_Info_UClass_AItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemBase), 2906652374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_ItemBase_h_3184293521(TEXT("/Script/Coven"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_ItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_ItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_ItemBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_ItemBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
