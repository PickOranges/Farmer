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
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Buttons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buttons;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons_Inner = { "Buttons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CropSeedsUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCropSeedsUserWidget, Buttons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons_MetaData), Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCropSeedsUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCropSeedsUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCropSeedsUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCropSeedsUserWidget_Statics::ClassParams = {
		&UCropSeedsUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCropSeedsUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCropSeedsUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCropSeedsUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCropSeedsUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCropSeedsUserWidget_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_UCropSeedsUserWidget, UCropSeedsUserWidget::StaticClass, TEXT("UCropSeedsUserWidget"), &Z_Registration_Info_UClass_UCropSeedsUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCropSeedsUserWidget), 253614404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_1749682133(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
