// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/ResourceTree.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceTree() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	FARMER_API UClass* Z_Construct_UClass_AResourceNew();
	FARMER_API UClass* Z_Construct_UClass_AResourceTree();
	FARMER_API UClass* Z_Construct_UClass_AResourceTree_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	DEFINE_FUNCTION(AResourceTree::execTakeDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResourceTree::execDisableToolDamge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableToolDamge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResourceTree::execEnableToolDamge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableToolDamge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AResourceTree::execOnTreeFallComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTreeFallComplete();
		P_NATIVE_END;
	}
	void AResourceTree::StaticRegisterNativesAResourceTree()
	{
		UClass* Class = AResourceTree::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableToolDamge", &AResourceTree::execDisableToolDamge },
			{ "EnableToolDamge", &AResourceTree::execEnableToolDamge },
			{ "OnTreeFallComplete", &AResourceTree::execOnTreeFallComplete },
			{ "TakeDamage", &AResourceTree::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AResourceTree_DisableToolDamge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResourceTree_DisableToolDamge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResourceTree_DisableToolDamge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResourceTree, nullptr, "DisableToolDamge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceTree_DisableToolDamge_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResourceTree_DisableToolDamge_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AResourceTree_DisableToolDamge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResourceTree_DisableToolDamge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResourceTree_EnableToolDamge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResourceTree_EnableToolDamge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResourceTree_EnableToolDamge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResourceTree, nullptr, "EnableToolDamge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceTree_EnableToolDamge_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResourceTree_EnableToolDamge_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AResourceTree_EnableToolDamge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResourceTree_EnableToolDamge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResourceTree_OnTreeFallComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResourceTree_OnTreeFallComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResourceTree_OnTreeFallComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResourceTree, nullptr, "OnTreeFallComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceTree_OnTreeFallComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResourceTree_OnTreeFallComplete_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AResourceTree_OnTreeFallComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResourceTree_OnTreeFallComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AResourceTree_TakeDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AResourceTree_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ResourceTree" },
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResourceTree_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AResourceTree, nullptr, "TakeDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResourceTree_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResourceTree_TakeDamage_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AResourceTree_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResourceTree_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResourceTree);
	UClass* Z_Construct_UClass_AResourceTree_NoRegister()
	{
		return AResourceTree::StaticClass();
	}
	struct Z_Construct_UClass_AResourceTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WoodClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WoodClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeFallTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TreeFallTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDamage_MetaData[];
#endif
		static void NewProp_bCanDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResourceTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AResourceNew,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AResourceTree_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AResourceTree_DisableToolDamge, "DisableToolDamge" }, // 2372598174
		{ &Z_Construct_UFunction_AResourceTree_EnableToolDamge, "EnableToolDamge" }, // 1017106260
		{ &Z_Construct_UFunction_AResourceTree_OnTreeFallComplete, "OnTreeFallComplete" }, // 3543099484
		{ &Z_Construct_UFunction_AResourceTree_TakeDamage, "TakeDamage" }, // 727142431
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceTree_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResourceTree.h" },
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceTree_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "ResourceTree" },
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AResourceTree_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResourceTree, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::NewProp_Force_MetaData), Z_Construct_UClass_AResourceTree_Statics::NewProp_Force_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceTree_Statics::NewProp_WoodClass_MetaData[] = {
		{ "Category", "ResourceTree/Wood" },
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AResourceTree_Statics::NewProp_WoodClass = { "WoodClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResourceTree, WoodClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::NewProp_WoodClass_MetaData), Z_Construct_UClass_AResourceTree_Statics::NewProp_WoodClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceTree_Statics::NewProp_TreeFallTimerHandle_MetaData[] = {
		{ "Category", "ResourceTree/Wood" },
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AResourceTree_Statics::NewProp_TreeFallTimerHandle = { "TreeFallTimerHandle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResourceTree, TreeFallTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::NewProp_TreeFallTimerHandle_MetaData), Z_Construct_UClass_AResourceTree_Statics::NewProp_TreeFallTimerHandle_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceTree_Statics::NewProp_bCanDamage_MetaData[] = {
		{ "Category", "ResourceTree" },
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
	void Z_Construct_UClass_AResourceTree_Statics::NewProp_bCanDamage_SetBit(void* Obj)
	{
		((AResourceTree*)Obj)->bCanDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AResourceTree_Statics::NewProp_bCanDamage = { "bCanDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AResourceTree), &Z_Construct_UClass_AResourceTree_Statics::NewProp_bCanDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::NewProp_bCanDamage_MetaData), Z_Construct_UClass_AResourceTree_Statics::NewProp_bCanDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceTree_Statics::NewProp_health_MetaData[] = {
		{ "Category", "ResourceTree" },
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResourceTree_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResourceTree, health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::NewProp_health_MetaData), Z_Construct_UClass_AResourceTree_Statics::NewProp_health_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResourceTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceTree_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceTree_Statics::NewProp_WoodClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceTree_Statics::NewProp_TreeFallTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceTree_Statics::NewProp_bCanDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceTree_Statics::NewProp_health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResourceTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResourceTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResourceTree_Statics::ClassParams = {
		&AResourceTree::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AResourceTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::Class_MetaDataParams), Z_Construct_UClass_AResourceTree_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AResourceTree()
	{
		if (!Z_Registration_Info_UClass_AResourceTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResourceTree.OuterSingleton, Z_Construct_UClass_AResourceTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResourceTree.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<AResourceTree>()
	{
		return AResourceTree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResourceTree);
	AResourceTree::~AResourceTree() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResourceTree, AResourceTree::StaticClass, TEXT("AResourceTree"), &Z_Registration_Info_UClass_AResourceTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResourceTree), 3185963286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_1168247520(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
