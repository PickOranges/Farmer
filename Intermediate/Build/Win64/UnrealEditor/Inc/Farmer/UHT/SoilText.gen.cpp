// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/SoilText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoilText() {}
// Cross Module References
	FARMER_API UClass* Z_Construct_UClass_USoilText();
	FARMER_API UClass* Z_Construct_UClass_USoilText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void USoilText::StaticRegisterNativesUSoilText()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoilText);
	UClass* Z_Construct_UClass_USoilText_NoRegister()
	{
		return USoilText::StaticClass();
	}
	struct Z_Construct_UClass_USoilText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seedAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_seedAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoilText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoilText_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoilText_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SoilText.h" },
		{ "ModuleRelativePath", "SoilText.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoilText_Statics::NewProp_seedAmount_MetaData[] = {
		{ "Category", "SoilText" },
		{ "ModuleRelativePath", "SoilText.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoilText_Statics::NewProp_seedAmount = { "seedAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoilText, seedAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoilText_Statics::NewProp_seedAmount_MetaData), Z_Construct_UClass_USoilText_Statics::NewProp_seedAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoilText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoilText_Statics::NewProp_seedAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoilText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoilText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoilText_Statics::ClassParams = {
		&USoilText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoilText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoilText_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoilText_Statics::Class_MetaDataParams), Z_Construct_UClass_USoilText_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoilText_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USoilText()
	{
		if (!Z_Registration_Info_UClass_USoilText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoilText.OuterSingleton, Z_Construct_UClass_USoilText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoilText.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<USoilText>()
	{
		return USoilText::StaticClass();
	}
	USoilText::USoilText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoilText);
	USoilText::~USoilText() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_SoilText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_SoilText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoilText, USoilText::StaticClass, TEXT("USoilText"), &Z_Registration_Info_UClass_USoilText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoilText), 3418819515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_SoilText_h_4238428225(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_SoilText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_SoilText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
