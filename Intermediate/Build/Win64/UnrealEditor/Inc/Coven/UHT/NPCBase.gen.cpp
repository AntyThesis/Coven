// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Coven/NPCBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCBase() {}

// Begin Cross Module References
COVEN_API UClass* Z_Construct_UClass_ACovenCharacter_NoRegister();
COVEN_API UClass* Z_Construct_UClass_ANPCBase();
COVEN_API UClass* Z_Construct_UClass_ANPCBase_NoRegister();
COVEN_API UClass* Z_Construct_UClass_APlayerCoven_NoRegister();
COVEN_API UFunction* Z_Construct_UDelegateFunction_Coven_OnApprovalGain__DelegateSignature();
COVEN_API UFunction* Z_Construct_UDelegateFunction_Coven_OnApprovalLoss__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Coven();
// End Cross Module References

// Begin Delegate FOnApprovalGain
struct Z_Construct_UDelegateFunction_Coven_OnApprovalGain__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NPCBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Coven_OnApprovalGain__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Coven, nullptr, "OnApprovalGain__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Coven_OnApprovalGain__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Coven_OnApprovalGain__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Coven_OnApprovalGain__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Coven_OnApprovalGain__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnApprovalGain_DelegateWrapper(const FMulticastScriptDelegate& OnApprovalGain)
{
	OnApprovalGain.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnApprovalGain

// Begin Delegate FOnApprovalLoss
struct Z_Construct_UDelegateFunction_Coven_OnApprovalLoss__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for approval gain event\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for approval gain event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Coven_OnApprovalLoss__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Coven, nullptr, "OnApprovalLoss__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Coven_OnApprovalLoss__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Coven_OnApprovalLoss__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Coven_OnApprovalLoss__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Coven_OnApprovalLoss__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnApprovalLoss_DelegateWrapper(const FMulticastScriptDelegate& OnApprovalLoss)
{
	OnApprovalLoss.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnApprovalLoss

// Begin Class ANPCBase Function GainApproval
struct Z_Construct_UFunction_ANPCBase_GainApproval_Statics
{
	struct NPCBase_eventGainApproval_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to handle interaction with the NPC\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to handle interaction with the NPC" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANPCBase_GainApproval_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCBase_eventGainApproval_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCBase_GainApproval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCBase_GainApproval_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_GainApproval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCBase_GainApproval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCBase, nullptr, "GainApproval", nullptr, nullptr, Z_Construct_UFunction_ANPCBase_GainApproval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_GainApproval_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCBase_GainApproval_Statics::NPCBase_eventGainApproval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_GainApproval_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCBase_GainApproval_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCBase_GainApproval_Statics::NPCBase_eventGainApproval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCBase_GainApproval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCBase_GainApproval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCBase::execGainApproval)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GainApproval(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ANPCBase Function GainApproval

// Begin Class ANPCBase Function Interact
struct NPCBase_eventInteract_Parms
{
	ACovenCharacter* InteractingCharacter;
};
static const FName NAME_ANPCBase_Interact = FName(TEXT("Interact"));
void ANPCBase::Interact(ACovenCharacter* InteractingCharacter)
{
	UFunction* Func = FindFunctionChecked(NAME_ANPCBase_Interact);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NPCBase_eventInteract_Parms Parms;
		Parms.InteractingCharacter=InteractingCharacter;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Interact_Implementation(InteractingCharacter);
	}
}
struct Z_Construct_UFunction_ANPCBase_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to leave the coven\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to leave the coven" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCBase_Interact_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCBase_eventInteract_Parms, InteractingCharacter), Z_Construct_UClass_ACovenCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCBase_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCBase_Interact_Statics::NewProp_InteractingCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCBase_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCBase, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_ANPCBase_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_Interact_Statics::PropPointers), sizeof(NPCBase_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCBase_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(NPCBase_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCBase_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCBase_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCBase::execInteract)
{
	P_GET_OBJECT(ACovenCharacter,Z_Param_InteractingCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_InteractingCharacter);
	P_NATIVE_END;
}
// End Class ANPCBase Function Interact

// Begin Class ANPCBase Function JoinCoven
struct Z_Construct_UFunction_ANPCBase_JoinCoven_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Actions" },
		{ "ModuleRelativePath", "NPCBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCBase_JoinCoven_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCBase, nullptr, "JoinCoven", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_JoinCoven_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCBase_JoinCoven_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPCBase_JoinCoven()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCBase_JoinCoven_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCBase::execJoinCoven)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinCoven();
	P_NATIVE_END;
}
// End Class ANPCBase Function JoinCoven

// Begin Class ANPCBase Function LeaveCoven
struct Z_Construct_UFunction_ANPCBase_LeaveCoven_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to join the coven\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to join the coven" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCBase_LeaveCoven_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCBase, nullptr, "LeaveCoven", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_LeaveCoven_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCBase_LeaveCoven_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANPCBase_LeaveCoven()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCBase_LeaveCoven_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCBase::execLeaveCoven)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeaveCoven();
	P_NATIVE_END;
}
// End Class ANPCBase Function LeaveCoven

// Begin Class ANPCBase Function LoseApproval
struct Z_Construct_UFunction_ANPCBase_LoseApproval_Statics
{
	struct NPCBase_eventLoseApproval_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to increase the NPC's approval rating\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to increase the NPC's approval rating" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCBase_eventLoseApproval_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCBase, nullptr, "LoseApproval", nullptr, nullptr, Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::NPCBase_eventLoseApproval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::NPCBase_eventLoseApproval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANPCBase_LoseApproval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCBase_LoseApproval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANPCBase::execLoseApproval)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoseApproval(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ANPCBase Function LoseApproval

// Begin Class ANPCBase
void ANPCBase::StaticRegisterNativesANPCBase()
{
	UClass* Class = ANPCBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GainApproval", &ANPCBase::execGainApproval },
		{ "Interact", &ANPCBase::execInteract },
		{ "JoinCoven", &ANPCBase::execJoinCoven },
		{ "LeaveCoven", &ANPCBase::execLeaveCoven },
		{ "LoseApproval", &ANPCBase::execLoseApproval },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCBase);
UClass* Z_Construct_UClass_ANPCBase_NoRegister()
{
	return ANPCBase::StaticClass();
}
struct Z_Construct_UClass_ANPCBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward declaration of ACovenCharacter class\n" },
#endif
		{ "IncludePath", "NPCBase.h" },
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declaration of ACovenCharacter class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnApprovalGain_MetaData[] = {
		{ "Category", "NPC Events" },
		{ "ModuleRelativePath", "NPCBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnApprovalLoss_MetaData[] = {
		{ "Category", "NPC Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered when approval is gained\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when approval is gained" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCoven_MetaData[] = {
		{ "Category", "NPC Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event triggered when approval is lost\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered when approval is lost" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerApproval_MetaData[] = {
		{ "Category", "NPC Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointer to the player coven instance\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the player coven instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxApproval_MetaData[] = {
		{ "Category", "NPC Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Approval rating of the NPC towards the player\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Approval rating of the NPC towards the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWitch_MetaData[] = {
		{ "Category", "NPC Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum approval rating\n" },
#endif
		{ "ModuleRelativePath", "NPCBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum approval rating" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnApprovalGain;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnApprovalLoss;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCoven;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerApproval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxApproval;
	static void NewProp_bIsWitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCBase_GainApproval, "GainApproval" }, // 3672194317
		{ &Z_Construct_UFunction_ANPCBase_Interact, "Interact" }, // 3817174013
		{ &Z_Construct_UFunction_ANPCBase_JoinCoven, "JoinCoven" }, // 3504957866
		{ &Z_Construct_UFunction_ANPCBase_LeaveCoven, "LeaveCoven" }, // 4186555467
		{ &Z_Construct_UFunction_ANPCBase_LoseApproval, "LoseApproval" }, // 2265032092
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANPCBase_Statics::NewProp_OnApprovalGain = { "OnApprovalGain", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCBase, OnApprovalGain), Z_Construct_UDelegateFunction_Coven_OnApprovalGain__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnApprovalGain_MetaData), NewProp_OnApprovalGain_MetaData) }; // 1325728588
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANPCBase_Statics::NewProp_OnApprovalLoss = { "OnApprovalLoss", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCBase, OnApprovalLoss), Z_Construct_UDelegateFunction_Coven_OnApprovalLoss__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnApprovalLoss_MetaData), NewProp_OnApprovalLoss_MetaData) }; // 2628113141
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCBase_Statics::NewProp_PlayerCoven = { "PlayerCoven", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCBase, PlayerCoven), Z_Construct_UClass_APlayerCoven_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCoven_MetaData), NewProp_PlayerCoven_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCBase_Statics::NewProp_PlayerApproval = { "PlayerApproval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCBase, PlayerApproval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerApproval_MetaData), NewProp_PlayerApproval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCBase_Statics::NewProp_MaxApproval = { "MaxApproval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCBase, MaxApproval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxApproval_MetaData), NewProp_MaxApproval_MetaData) };
void Z_Construct_UClass_ANPCBase_Statics::NewProp_bIsWitch_SetBit(void* Obj)
{
	((ANPCBase*)Obj)->bIsWitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANPCBase_Statics::NewProp_bIsWitch = { "bIsWitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANPCBase), &Z_Construct_UClass_ANPCBase_Statics::NewProp_bIsWitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWitch_MetaData), NewProp_bIsWitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCBase_Statics::NewProp_OnApprovalGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCBase_Statics::NewProp_OnApprovalLoss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCBase_Statics::NewProp_PlayerCoven,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCBase_Statics::NewProp_PlayerApproval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCBase_Statics::NewProp_MaxApproval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCBase_Statics::NewProp_bIsWitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANPCBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Coven,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCBase_Statics::ClassParams = {
	&ANPCBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANPCBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCBase()
{
	if (!Z_Registration_Info_UClass_ANPCBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCBase.OuterSingleton, Z_Construct_UClass_ANPCBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCBase.OuterSingleton;
}
template<> COVEN_API UClass* StaticClass<ANPCBase>()
{
	return ANPCBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCBase);
ANPCBase::~ANPCBase() {}
// End Class ANPCBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCBase, ANPCBase::StaticClass, TEXT("ANPCBase"), &Z_Registration_Info_UClass_ANPCBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCBase), 3003748851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_1668329444(TEXT("/Script/Coven"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_NPCBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
