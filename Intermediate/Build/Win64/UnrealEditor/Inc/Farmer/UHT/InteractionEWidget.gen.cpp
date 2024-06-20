// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/InteractionEWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionEWidget() {}
// Cross Module References
	FARMER_API UClass* Z_Construct_UClass_UInteractionEWidget();
	FARMER_API UClass* Z_Construct_UClass_UInteractionEWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionEWidget::execOnOverlapEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionEWidget::execOnOverlapBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin();
		P_NATIVE_END;
	}
	void UInteractionEWidget::StaticRegisterNativesUInteractionEWidget()
	{
		UClass* Class = UInteractionEWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &UInteractionEWidget::execOnOverlapBegin },
			{ "OnOverlapEnd", &UInteractionEWidget::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionEWidget_OnOverlapBegin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEWidget_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/InteractionEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionEWidget_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionEWidget, nullptr, "OnOverlapBegin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEWidget_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionEWidget_OnOverlapBegin_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInteractionEWidget_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionEWidget_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionEWidget_OnOverlapEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEWidget_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/InteractionEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionEWidget_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionEWidget, nullptr, "OnOverlapEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEWidget_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionEWidget_OnOverlapEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInteractionEWidget_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionEWidget_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionEWidget);
	UClass* Z_Construct_UClass_UInteractionEWidget_NoRegister()
	{
		return UInteractionEWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionEWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionEWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionEWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionEWidget_OnOverlapBegin, "OnOverlapBegin" }, // 3327393651
		{ &Z_Construct_UFunction_UInteractionEWidget_OnOverlapEnd, "OnOverlapEnd" }, // 1053603236
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InteractionEWidget.h" },
		{ "ModuleRelativePath", "Public/InteractionEWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionImage = { "InteractionImage", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionEWidget, InteractionImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionImage_MetaData), Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionText = { "InteractionText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionEWidget, InteractionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionText_MetaData), Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionEWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEWidget_Statics::NewProp_InteractionText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionEWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionEWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionEWidget_Statics::ClassParams = {
		&UInteractionEWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionEWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionEWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInteractionEWidget()
	{
		if (!Z_Registration_Info_UClass_UInteractionEWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionEWidget.OuterSingleton, Z_Construct_UClass_UInteractionEWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionEWidget.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UInteractionEWidget>()
	{
		return UInteractionEWidget::StaticClass();
	}
	UInteractionEWidget::UInteractionEWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionEWidget);
	UInteractionEWidget::~UInteractionEWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_InteractionEWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_InteractionEWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionEWidget, UInteractionEWidget::StaticClass, TEXT("UInteractionEWidget"), &Z_Registration_Info_UClass_UInteractionEWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionEWidget), 1753154266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_InteractionEWidget_h_922760830(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_InteractionEWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_InteractionEWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
