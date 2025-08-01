// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Coven/RitualTea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRitualTea() {}

// Begin Cross Module References
COVEN_API UClass* Z_Construct_UClass_AItemBase();
COVEN_API UClass* Z_Construct_UClass_ARitualTea();
COVEN_API UClass* Z_Construct_UClass_ARitualTea_NoRegister();
UPackage* Z_Construct_UPackage__Script_Coven();
// End Cross Module References

// Begin Class ARitualTea
void ARitualTea::StaticRegisterNativesARitualTea()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARitualTea);
UClass* Z_Construct_UClass_ARitualTea_NoRegister()
{
	return ARitualTea::StaticClass();
}
struct Z_Construct_UClass_ARitualTea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RitualTea.h" },
		{ "ModuleRelativePath", "RitualTea.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARitualTea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARitualTea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Coven,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARitualTea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARitualTea_Statics::ClassParams = {
	&ARitualTea::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARitualTea_Statics::Class_MetaDataParams), Z_Construct_UClass_ARitualTea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARitualTea()
{
	if (!Z_Registration_Info_UClass_ARitualTea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARitualTea.OuterSingleton, Z_Construct_UClass_ARitualTea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARitualTea.OuterSingleton;
}
template<> COVEN_API UClass* StaticClass<ARitualTea>()
{
	return ARitualTea::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARitualTea);
ARitualTea::~ARitualTea() {}
// End Class ARitualTea

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_RitualTea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARitualTea, ARitualTea::StaticClass, TEXT("ARitualTea"), &Z_Registration_Info_UClass_ARitualTea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARitualTea), 937811492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_RitualTea_h_3086764705(TEXT("/Script/Coven"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_RitualTea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Coven_Source_Coven_RitualTea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
