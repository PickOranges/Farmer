// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/CropSeedsUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCropSeedsUserWidget() {}
// Cross Module References
	FARMER_API UClass* Z_Construct_UClass_UCropSeedsUserWidget();
	FARMER_API UClass* Z_Construct_UClass_UCropSeedsUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void UCropSeedsUserWidget::StaticRegisterNativesUCropSeedsUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCropSeedsUserWidget);
	UClass* Z_Construct_UClass_UCropSeedsUserWidget_NoRegister()
	{
		return UCropSeedsUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCropSeedsUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCropSeedsUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCropSeedsUserWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCropSeedsUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CropSeedsUserWidget.h" },
		{ "ModuleRelativePath", "Public/CropSeedsUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCropSeedsUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCropSeedsUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCropSeedsUserWidget_Statics::ClassParams = {
		&UCropSeedsUserWidget::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCropSeedsUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCropSeedsUserWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCropSeedsUserWidget()
	{
		if (!Z_Registration_Info_UClass_UCropSeedsUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCropSeedsUserWidget.OuterSingleton, Z_Construct_UClass_UCropSeedsUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCropSeedsUserWidget.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UCropSeedsUserWidget>()
	{
		return UCropSeedsUserWidget::StaticClass();
	}
	UCropSeedsUserWidget::UCropSeedsUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCropSeedsUserWidget);
	UCropSeedsUserWidget::~UCropSeedsUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCropSeedsUserWidget, UCropSeedsUserWidget::StaticClass, TEXT("UCropSeedsUserWidget"), &Z_Registration_Info_UClass_UCropSeedsUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCropSeedsUserWidget), 773796279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_3548073412(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
