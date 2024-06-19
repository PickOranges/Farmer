// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/ResourceFruit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceFruit() {}
// Cross Module References
	FARMER_API UClass* Z_Construct_UClass_AResourceBase();
	FARMER_API UClass* Z_Construct_UClass_AResourceFruit();
	FARMER_API UClass* Z_Construct_UClass_AResourceFruit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void AResourceFruit::StaticRegisterNativesAResourceFruit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResourceFruit);
	UClass* Z_Construct_UClass_AResourceFruit_NoRegister()
	{
		return AResourceFruit::StaticClass();
	}
	struct Z_Construct_UClass_AResourceFruit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResourceFruit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AResourceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceFruit_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceFruit_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResourceFruit.h" },
		{ "ModuleRelativePath", "Public/ResourceFruit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResourceFruit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResourceFruit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResourceFruit_Statics::ClassParams = {
		&AResourceFruit::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceFruit_Statics::Class_MetaDataParams), Z_Construct_UClass_AResourceFruit_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AResourceFruit()
	{
		if (!Z_Registration_Info_UClass_AResourceFruit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResourceFruit.OuterSingleton, Z_Construct_UClass_AResourceFruit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResourceFruit.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<AResourceFruit>()
	{
		return AResourceFruit::StaticClass();
	}
	AResourceFruit::AResourceFruit() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResourceFruit);
	AResourceFruit::~AResourceFruit() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceFruit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceFruit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResourceFruit, AResourceFruit::StaticClass, TEXT("AResourceFruit"), &Z_Registration_Info_UClass_AResourceFruit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResourceFruit), 2164814321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceFruit_h_1718343149(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceFruit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceFruit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
