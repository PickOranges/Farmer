// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/CropItemTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCropItemTest() {}
// Cross Module References
	FARMER_API UClass* Z_Construct_UClass_ACropBase();
	FARMER_API UClass* Z_Construct_UClass_ACropItemTest();
	FARMER_API UClass* Z_Construct_UClass_ACropItemTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void ACropItemTest::StaticRegisterNativesACropItemTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACropItemTest);
	UClass* Z_Construct_UClass_ACropItemTest_NoRegister()
	{
		return ACropItemTest::StaticClass();
	}
	struct Z_Construct_UClass_ACropItemTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACropItemTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACropBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CropItemTest.h" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACropItemTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACropItemTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACropItemTest_Statics::ClassParams = {
		&ACropItemTest::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::Class_MetaDataParams), Z_Construct_UClass_ACropItemTest_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACropItemTest()
	{
		if (!Z_Registration_Info_UClass_ACropItemTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACropItemTest.OuterSingleton, Z_Construct_UClass_ACropItemTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACropItemTest.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<ACropItemTest>()
	{
		return ACropItemTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACropItemTest);
	ACropItemTest::~ACropItemTest() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACropItemTest, ACropItemTest::StaticClass, TEXT("ACropItemTest"), &Z_Registration_Info_UClass_ACropItemTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACropItemTest), 1798633575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_2162593097(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
