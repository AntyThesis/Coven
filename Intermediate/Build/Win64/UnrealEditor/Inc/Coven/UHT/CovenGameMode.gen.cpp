// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Coven/CovenGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCovenGameMode() {}

// Begin Cross Module References
COVEN_API UClass* Z_Construct_UClass_ACovenGameMode();
COVEN_API UClass* Z_Construct_UClass_ACovenGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Coven();
// End Cross Module References

// Begin Class ACovenGameMode
void ACovenGameMode::StaticRegisterNativesACovenGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACovenGameMode);
UClass* Z_Construct_UClass_ACovenGameMode_NoRegister()
{
	return ACovenGameMode::StaticClass();
}
struct Z_Construct_UClass_ACovenGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CovenGameMode.h" },
		{ "ModuleRelativePath", "CovenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACovenGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACovenGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Coven,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACovenGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACovenGameMode_Statics::ClassParams = {
	&ACovenGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACovenGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACovenGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACovenGameMode()
{
	if (!Z_Registration_Info_UClass_ACovenGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACovenGameMode.OuterSingleton, Z_Construct_UClass_ACovenGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACovenGameMode.OuterSingleton;
}
template<> COVEN_API UClass* StaticClass<ACovenGameMode>()
{
	return ACovenGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACovenGameMode);
ACovenGameMode::~ACovenGameMode() {}
// End Class ACovenGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACovenGameMode, ACovenGameMode::StaticClass, TEXT("ACovenGameMode"), &Z_Registration_Info_UClass_ACovenGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACovenGameMode), 1666646397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_3156850354(TEXT("/Script/Coven"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_CovenGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
