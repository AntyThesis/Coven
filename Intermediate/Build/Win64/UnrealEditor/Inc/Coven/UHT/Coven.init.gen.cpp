// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoven_init() {}
	COVEN_API UFunction* Z_Construct_UDelegateFunction_Coven_OnItemAdded__DelegateSignature();
	COVEN_API UFunction* Z_Construct_UDelegateFunction_Coven_OnItemRemoved__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Coven;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Coven()
	{
		if (!Z_Registration_Info_UPackage__Script_Coven.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Coven_OnItemAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Coven_OnItemRemoved__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Coven",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x879C51D2,
				0x086AFC7E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Coven.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Coven.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Coven(Z_Construct_UPackage__Script_Coven, TEXT("/Script/Coven"), Z_Registration_Info_UPackage__Script_Coven, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x879C51D2, 0x086AFC7E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
