// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/FoxAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoxAnimNotify() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	FARMER_API UClass* Z_Construct_UClass_UFoxAnimNotify();
	FARMER_API UClass* Z_Construct_UClass_UFoxAnimNotify_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void UFoxAnimNotify::StaticRegisterNativesUFoxAnimNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoxAnimNotify);
	UClass* Z_Construct_UClass_UFoxAnimNotify_NoRegister()
	{
		return UFoxAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UFoxAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoxAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoxAnimNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoxAnimNotify_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "FoxAnimNotify.h" },
		{ "ModuleRelativePath", "Public/FoxAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoxAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoxAnimNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoxAnimNotify_Statics::ClassParams = {
		&UFoxAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFoxAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UFoxAnimNotify_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFoxAnimNotify()
	{
		if (!Z_Registration_Info_UClass_UFoxAnimNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoxAnimNotify.OuterSingleton, Z_Construct_UClass_UFoxAnimNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoxAnimNotify.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UFoxAnimNotify>()
	{
		return UFoxAnimNotify::StaticClass();
	}
	UFoxAnimNotify::UFoxAnimNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoxAnimNotify);
	UFoxAnimNotify::~UFoxAnimNotify() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FoxAnimNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FoxAnimNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoxAnimNotify, UFoxAnimNotify::StaticClass, TEXT("UFoxAnimNotify"), &Z_Registration_Info_UClass_UFoxAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoxAnimNotify), 2918972454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FoxAnimNotify_h_3029895909(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FoxAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FoxAnimNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
