// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/ItemRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UItemRegistry();
	FARMER_API UClass* Z_Construct_UClass_UItemRegistry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	DEFINE_FUNCTION(UItemRegistry::execRegisterItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterItems();
		P_NATIVE_END;
	}
	void UItemRegistry::StaticRegisterNativesUItemRegistry()
	{
		UClass* Class = UItemRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterItems", &UItemRegistry::execRegisterItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemRegistry_RegisterItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemRegistry_RegisterItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemRegistry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemRegistry_RegisterItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemRegistry, nullptr, "RegisterItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemRegistry_RegisterItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemRegistry_RegisterItems_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItemRegistry_RegisterItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemRegistry_RegisterItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemRegistry);
	UClass* Z_Construct_UClass_UItemRegistry_NoRegister()
	{
		return UItemRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UItemRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Items_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemRegistry_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemRegistry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemRegistry_RegisterItems, "RegisterItems" }, // 717426131
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemRegistry_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemRegistry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemRegistry.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemRegistry_Statics::NewProp_Items_ValueProp = { "Items", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemRegistry_Statics::NewProp_Items_Key_KeyProp = { "Items_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemRegistry_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "ItemRegistry" },
		{ "ModuleRelativePath", "Public/ItemRegistry.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UItemRegistry_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemRegistry, Items), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemRegistry_Statics::NewProp_Items_MetaData), Z_Construct_UClass_UItemRegistry_Statics::NewProp_Items_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemRegistry_Statics::NewProp_Items_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemRegistry_Statics::NewProp_Items_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemRegistry_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemRegistry_Statics::ClassParams = {
		&UItemRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemRegistry_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemRegistry_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemRegistry_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemRegistry()
	{
		if (!Z_Registration_Info_UClass_UItemRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemRegistry.OuterSingleton, Z_Construct_UClass_UItemRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemRegistry.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UItemRegistry>()
	{
		return UItemRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemRegistry);
	UItemRegistry::~UItemRegistry() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ItemRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ItemRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemRegistry, UItemRegistry::StaticClass, TEXT("UItemRegistry"), &Z_Registration_Info_UClass_UItemRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemRegistry), 2162568489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ItemRegistry_h_1368701200(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ItemRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ItemRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
