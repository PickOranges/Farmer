// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/SAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_ASAIController();
	FARMER_API UClass* Z_Construct_UClass_ASAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void ASAIController::StaticRegisterNativesASAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASAIController);
	UClass* Z_Construct_UClass_ASAIController_NoRegister()
	{
		return ASAIController::StaticClass();
	}
	struct Z_Construct_UClass_ASAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SAIController.h" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_BehaviorTree_MetaData), Z_Construct_UClass_ASAIController_Statics::NewProp_BehaviorTree_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_BehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASAIController_Statics::ClassParams = {
		&ASAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASAIController()
	{
		if (!Z_Registration_Info_UClass_ASAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASAIController.OuterSingleton, Z_Construct_UClass_ASAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASAIController.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<ASAIController>()
	{
		return ASAIController::StaticClass();
	}
	ASAIController::ASAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIController);
	ASAIController::~ASAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASAIController, ASAIController::StaticClass, TEXT("ASAIController"), &Z_Registration_Info_UClass_ASAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAIController), 989450384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAIController_h_1956656019(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
