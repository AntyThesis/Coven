// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Coven/QuestManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManager() {}

// Begin Cross Module References
COVEN_API UClass* Z_Construct_UClass_AQuestManager();
COVEN_API UClass* Z_Construct_UClass_AQuestManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Coven();
// End Cross Module References

// Begin Class AQuestManager
void AQuestManager::StaticRegisterNativesAQuestManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuestManager);
UClass* Z_Construct_UClass_AQuestManager_NoRegister()
{
	return AQuestManager::StaticClass();
}
struct Z_Construct_UClass_AQuestManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "QuestManager.h" },
		{ "ModuleRelativePath", "QuestManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQuestManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Coven,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuestManager_Statics::ClassParams = {
	&AQuestManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuestManager()
{
	if (!Z_Registration_Info_UClass_AQuestManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuestManager.OuterSingleton, Z_Construct_UClass_AQuestManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuestManager.OuterSingleton;
}
template<> COVEN_API UClass* StaticClass<AQuestManager>()
{
	return AQuestManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestManager);
AQuestManager::~AQuestManager() {}
// End Class AQuestManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_QuestManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuestManager, AQuestManager::StaticClass, TEXT("AQuestManager"), &Z_Registration_Info_UClass_AQuestManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuestManager), 62350498U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_QuestManager_h_2675074272(TEXT("/Script/Coven"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_QuestManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_QuestManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
