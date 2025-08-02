// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Coven/PlayerCoven.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCoven() {}

// Begin Cross Module References
COVEN_API UClass* Z_Construct_UClass_ACovenCharacter_NoRegister();
COVEN_API UClass* Z_Construct_UClass_ANPCBase_NoRegister();
COVEN_API UClass* Z_Construct_UClass_APlayerCoven();
COVEN_API UClass* Z_Construct_UClass_APlayerCoven_NoRegister();
COVEN_API UFunction* Z_Construct_UDelegateFunction_Coven_OnWitchAdded__DelegateSignature();
COVEN_API UFunction* Z_Construct_UDelegateFunction_Coven_OnWitchRemoved__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Coven();
// End Cross Module References

// Begin Delegate FOnWitchAdded
struct Z_Construct_UDelegateFunction_Coven_OnWitchAdded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Coven_OnWitchAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Coven, nullptr, "OnWitchAdded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Coven_OnWitchAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Coven_OnWitchAdded__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Coven_OnWitchAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Coven_OnWitchAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWitchAdded_DelegateWrapper(const FMulticastScriptDelegate& OnWitchAdded)
{
	OnWitchAdded.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnWitchAdded

// Begin Delegate FOnWitchRemoved
struct Z_Construct_UDelegateFunction_Coven_OnWitchRemoved__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Coven_OnWitchRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Coven, nullptr, "OnWitchRemoved__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Coven_OnWitchRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Coven_OnWitchRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Coven_OnWitchRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Coven_OnWitchRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWitchRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnWitchRemoved)
{
	OnWitchRemoved.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnWitchRemoved

// Begin Class APlayerCoven Function AddWitch
struct Z_Construct_UFunction_APlayerCoven_AddWitch_Statics
{
	struct PlayerCoven_eventAddWitch_Parms
	{
		ANPCBase* WitchToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Coven functions" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WitchToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::NewProp_WitchToAdd = { "WitchToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCoven_eventAddWitch_Parms, WitchToAdd), Z_Construct_UClass_ANPCBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::NewProp_WitchToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCoven, nullptr, "AddWitch", nullptr, nullptr, Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::PlayerCoven_eventAddWitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::PlayerCoven_eventAddWitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCoven_AddWitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCoven_AddWitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCoven::execAddWitch)
{
	P_GET_OBJECT(ANPCBase,Z_Param_WitchToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWitch(Z_Param_WitchToAdd);
	P_NATIVE_END;
}
// End Class APlayerCoven Function AddWitch

// Begin Class APlayerCoven Function EarnExp
struct Z_Construct_UFunction_APlayerCoven_EarnExp_Statics
{
	struct PlayerCoven_eventEarnExp_Parms
	{
		float ExpToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Coven Level functions" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::NewProp_ExpToAdd = { "ExpToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCoven_eventEarnExp_Parms, ExpToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::NewProp_ExpToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCoven, nullptr, "EarnExp", nullptr, nullptr, Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::PlayerCoven_eventEarnExp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::PlayerCoven_eventEarnExp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCoven_EarnExp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCoven_EarnExp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCoven::execEarnExp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ExpToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EarnExp(Z_Param_ExpToAdd);
	P_NATIVE_END;
}
// End Class APlayerCoven Function EarnExp

// Begin Class APlayerCoven Function IncreaseLevel
struct Z_Construct_UFunction_APlayerCoven_IncreaseLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Coven Level functions" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCoven_IncreaseLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCoven, nullptr, "IncreaseLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_IncreaseLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCoven_IncreaseLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerCoven_IncreaseLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCoven_IncreaseLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCoven::execIncreaseLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseLevel();
	P_NATIVE_END;
}
// End Class APlayerCoven Function IncreaseLevel

// Begin Class APlayerCoven Function RemoveWitch
struct Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics
{
	struct PlayerCoven_eventRemoveWitch_Parms
	{
		ANPCBase* WitchToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Coven functions" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WitchToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::NewProp_WitchToRemove = { "WitchToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCoven_eventRemoveWitch_Parms, WitchToRemove), Z_Construct_UClass_ANPCBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::NewProp_WitchToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCoven, nullptr, "RemoveWitch", nullptr, nullptr, Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::PlayerCoven_eventRemoveWitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::PlayerCoven_eventRemoveWitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCoven_RemoveWitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCoven_RemoveWitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCoven::execRemoveWitch)
{
	P_GET_OBJECT(ANPCBase,Z_Param_WitchToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWitch(Z_Param_WitchToRemove);
	P_NATIVE_END;
}
// End Class APlayerCoven Function RemoveWitch

// Begin Class APlayerCoven
void APlayerCoven::StaticRegisterNativesAPlayerCoven()
{
	UClass* Class = APlayerCoven::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWitch", &APlayerCoven::execAddWitch },
		{ "EarnExp", &APlayerCoven::execEarnExp },
		{ "IncreaseLevel", &APlayerCoven::execIncreaseLevel },
		{ "RemoveWitch", &APlayerCoven::execRemoveWitch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCoven);
UClass* Z_Construct_UClass_APlayerCoven_NoRegister()
{
	return APlayerCoven::StaticClass();
}
struct Z_Construct_UClass_APlayerCoven_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward declaration of NPC class\n" },
#endif
		{ "IncludePath", "PlayerCoven.h" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declaration of NPC class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWitchAdded_MetaData[] = {
		{ "Category", "Coven Events" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWitchRemoved_MetaData[] = {
		{ "Category", "Coven Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for when a witch is added to the coven\n" },
#endif
		{ "ModuleRelativePath", "PlayerCoven.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for when a witch is added to the coven" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CovenLevel_MetaData[] = {
		{ "Category", "Coven Level Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declaration of variables related to the coven level and experience\n" },
#endif
		{ "ModuleRelativePath", "PlayerCoven.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaration of variables related to the coven level and experience" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpThreshold_MetaData[] = {
		{ "Category", "Coven Level Stats" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpNeeded_MetaData[] = {
		{ "Category", "Coven Level Stats" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExp_MetaData[] = {
		{ "Category", "Coven Level Stats" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfWitches_MetaData[] = {
		{ "Category", "Witch Stats" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CovenWitches_MetaData[] = {
		{ "Category", "Witch Stats" },
		{ "ModuleRelativePath", "PlayerCoven.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWitchAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWitchRemoved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CovenLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpNeeded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentExp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfWitches;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CovenWitches_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CovenWitches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCoven_AddWitch, "AddWitch" }, // 2125603251
		{ &Z_Construct_UFunction_APlayerCoven_EarnExp, "EarnExp" }, // 2355738327
		{ &Z_Construct_UFunction_APlayerCoven_IncreaseLevel, "IncreaseLevel" }, // 1699142304
		{ &Z_Construct_UFunction_APlayerCoven_RemoveWitch, "RemoveWitch" }, // 1243392841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCoven>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCoven, PlayerCharacter), Z_Construct_UClass_ACovenCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_OnWitchAdded = { "OnWitchAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCoven, OnWitchAdded), Z_Construct_UDelegateFunction_Coven_OnWitchAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWitchAdded_MetaData), NewProp_OnWitchAdded_MetaData) }; // 3975816043
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_OnWitchRemoved = { "OnWitchRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCoven, OnWitchRemoved), Z_Construct_UDelegateFunction_Coven_OnWitchRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWitchRemoved_MetaData), NewProp_OnWitchRemoved_MetaData) }; // 85896948
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_CovenLevel = { "CovenLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCoven, CovenLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CovenLevel_MetaData), NewProp_CovenLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_ExpThreshold = { "ExpThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCoven, ExpThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpThreshold_MetaData), NewProp_ExpThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_ExpNeeded = { "ExpNeeded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCoven, ExpNeeded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpNeeded_MetaData), NewProp_ExpNeeded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_CurrentExp = { "CurrentExp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCoven, CurrentExp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentExp_MetaData), NewProp_CurrentExp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_NumberOfWitches = { "NumberOfWitches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCoven, NumberOfWitches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfWitches_MetaData), NewProp_NumberOfWitches_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_CovenWitches_Inner = { "CovenWitches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANPCBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCoven_Statics::NewProp_CovenWitches = { "CovenWitches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCoven, CovenWitches), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CovenWitches_MetaData), NewProp_CovenWitches_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCoven_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_OnWitchAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_OnWitchRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_CovenLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_ExpThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_ExpNeeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_CurrentExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_NumberOfWitches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_CovenWitches_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCoven_Statics::NewProp_CovenWitches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCoven_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCoven_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Coven,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCoven_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCoven_Statics::ClassParams = {
	&APlayerCoven::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCoven_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCoven_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCoven_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCoven_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCoven()
{
	if (!Z_Registration_Info_UClass_APlayerCoven.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCoven.OuterSingleton, Z_Construct_UClass_APlayerCoven_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCoven.OuterSingleton;
}
template<> COVEN_API UClass* StaticClass<APlayerCoven>()
{
	return APlayerCoven::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCoven);
APlayerCoven::~APlayerCoven() {}
// End Class APlayerCoven

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCoven, APlayerCoven::StaticClass, TEXT("APlayerCoven"), &Z_Registration_Info_UClass_APlayerCoven, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCoven), 3046139349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_3137507966(TEXT("/Script/Coven"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_PlayerCoven_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
