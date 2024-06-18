// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/ResourceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceBase() {}
// Cross Module References
	FARMER_API UClass* Z_Construct_UClass_AInteractable();
	FARMER_API UClass* Z_Construct_UClass_AResourceBase();
	FARMER_API UClass* Z_Construct_UClass_AResourceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void AResourceBase::StaticRegisterNativesAResourceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResourceBase);
	UClass* Z_Construct_UClass_AResourceBase_NoRegister()
	{
		return AResourceBase::StaticClass();
	}
	struct Z_Construct_UClass_AResourceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResourceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResourceBase.h" },
		{ "ModuleRelativePath", "Public/ResourceBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResourceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResourceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResourceBase_Statics::ClassParams = {
		&AResourceBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AResourceBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AResourceBase()
	{
		if (!Z_Registration_Info_UClass_AResourceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResourceBase.OuterSingleton, Z_Construct_UClass_AResourceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResourceBase.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<AResourceBase>()
	{
		return AResourceBase::StaticClass();
	}
	AResourceBase::AResourceBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResourceBase);
	AResourceBase::~AResourceBase() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResourceBase, AResourceBase::StaticClass, TEXT("AResourceBase"), &Z_Registration_Info_UClass_AResourceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResourceBase), 2755766504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_1918648941(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
