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
	DEFINE_FUNCTION(UCropSeedsUserWidget::execButtonClickCB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonClickCB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCropSeedsUserWidget::execGetButtonCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetButtonCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCropSeedsUserWidget::execSelectButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_idx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectButton(Z_Param_idx);
		P_NATIVE_END;
	}
	void UCropSeedsUserWidget::StaticRegisterNativesUCropSeedsUserWidget()
	{
		UClass* Class = UCropSeedsUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonClickCB", &UCropSeedsUserWidget::execButtonClickCB },
			{ "GetButtonCount", &UCropSeedsUserWidget::execGetButtonCount },
			{ "SelectButton", &UCropSeedsUserWidget::execSelectButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCropSeedsUserWidget_ButtonClickCB_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCropSeedsUserWidget_ButtonClickCB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CropSeedsUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCropSeedsUserWidget_ButtonClickCB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCropSeedsUserWidget, nullptr, "ButtonClickCB", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCropSeedsUserWidget_ButtonClickCB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCropSeedsUserWidget_ButtonClickCB_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCropSeedsUserWidget_ButtonClickCB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCropSeedsUserWidget_ButtonClickCB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics
	{
		struct CropSeedsUserWidget_eventGetButtonCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CropSeedsUserWidget_eventGetButtonCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CropSeedsUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCropSeedsUserWidget, nullptr, "GetButtonCount", nullptr, nullptr, Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::CropSeedsUserWidget_eventGetButtonCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::CropSeedsUserWidget_eventGetButtonCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics
	{
		struct CropSeedsUserWidget_eventSelectButton_Parms
		{
			int32 idx;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CropSeedsUserWidget_eventSelectButton_Parms, idx), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::NewProp_idx,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CropSeedsUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCropSeedsUserWidget, nullptr, "SelectButton", nullptr, nullptr, Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::CropSeedsUserWidget_eventSelectButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::CropSeedsUserWidget_eventSelectButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCropSeedsUserWidget);
	UClass* Z_Construct_UClass_UCropSeedsUserWidget_NoRegister()
	{
		return UCropSeedsUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCropSeedsUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UCropSeedsUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCropSeedsUserWidget_ButtonClickCB, "ButtonClickCB" }, // 30037306
		{ &Z_Construct_UFunction_UCropSeedsUserWidget_GetButtonCount, "GetButtonCount" }, // 1565260244
		{ &Z_Construct_UFunction_UCropSeedsUserWidget_SelectButton, "SelectButton" }, // 1804931224
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCropSeedsUserWidget_Statics::FuncInfo) < 2048);
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
		{ "Category", "CropSeedsUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CropSeedsUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCropSeedsUserWidget, Buttons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons_MetaData), Z_Construct_UClass_UCropSeedsUserWidget_Statics::NewProp_Buttons_MetaData) };
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
		FuncInfo,
		Z_Construct_UClass_UCropSeedsUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UCropSeedsUserWidget, UCropSeedsUserWidget::StaticClass, TEXT("UCropSeedsUserWidget"), &Z_Registration_Info_UClass_UCropSeedsUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCropSeedsUserWidget), 324953545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_1057834993(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropSeedsUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
