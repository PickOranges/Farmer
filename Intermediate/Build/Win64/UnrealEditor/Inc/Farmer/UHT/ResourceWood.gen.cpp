// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/ResourceWood.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceWood() {}
// Cross Module References
	FARMER_API UClass* Z_Construct_UClass_AResourceBase();
	FARMER_API UClass* Z_Construct_UClass_AResourceWood();
	FARMER_API UClass* Z_Construct_UClass_AResourceWood_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void AResourceWood::StaticRegisterNativesAResourceWood()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResourceWood);
	UClass* Z_Construct_UClass_AResourceWood_NoRegister()
	{
		return AResourceWood::StaticClass();
	}
	struct Z_Construct_UClass_AResourceWood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResourceWood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AResourceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceWood_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceWood_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResourceWood.h" },
		{ "ModuleRelativePath", "Public/ResourceWood.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResourceWood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResourceWood>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResourceWood_Statics::ClassParams = {
		&AResourceWood::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceWood_Statics::Class_MetaDataParams), Z_Construct_UClass_AResourceWood_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AResourceWood()
	{
		if (!Z_Registration_Info_UClass_AResourceWood.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResourceWood.OuterSingleton, Z_Construct_UClass_AResourceWood_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResourceWood.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<AResourceWood>()
	{
		return AResourceWood::StaticClass();
	}
	AResourceWood::AResourceWood() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResourceWood);
	AResourceWood::~AResourceWood() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceWood_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceWood_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResourceWood, AResourceWood::StaticClass, TEXT("AResourceWood"), &Z_Registration_Info_UClass_AResourceWood, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResourceWood), 4278225172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceWood_h_4131721725(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceWood_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceWood_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
