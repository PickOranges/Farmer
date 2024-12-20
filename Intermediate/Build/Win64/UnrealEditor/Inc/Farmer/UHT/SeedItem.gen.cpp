// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/SeedItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeedItem() {}
// Cross Module References
	FARMER_API UClass* Z_Construct_UClass_UFakeItem();
	FARMER_API UClass* Z_Construct_UClass_USeedItem();
	FARMER_API UClass* Z_Construct_UClass_USeedItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void USeedItem::StaticRegisterNativesUSeedItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USeedItem);
	UClass* Z_Construct_UClass_USeedItem_NoRegister()
	{
		return USeedItem::StaticClass();
	}
	struct Z_Construct_UClass_USeedItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USeedItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFakeItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USeedItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USeedItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SeedItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SeedItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USeedItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USeedItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USeedItem_Statics::ClassParams = {
		&USeedItem::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USeedItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USeedItem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USeedItem()
	{
		if (!Z_Registration_Info_UClass_USeedItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USeedItem.OuterSingleton, Z_Construct_UClass_USeedItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USeedItem.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<USeedItem>()
	{
		return USeedItem::StaticClass();
	}
	USeedItem::USeedItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USeedItem);
	USeedItem::~USeedItem() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SeedItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SeedItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USeedItem, USeedItem::StaticClass, TEXT("USeedItem"), &Z_Registration_Info_UClass_USeedItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USeedItem), 2534756246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SeedItem_h_4096115842(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SeedItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SeedItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
