// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/FakeItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFakeItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UFakeItem();
	FARMER_API UClass* Z_Construct_UClass_UFakeItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void UFakeItem::StaticRegisterNativesUFakeItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFakeItem);
	UClass* Z_Construct_UClass_UFakeItem_NoRegister()
	{
		return UFakeItem::StaticClass();
	}
	struct Z_Construct_UClass_UFakeItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFakeItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFakeItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFakeItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FakeItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FakeItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFakeItem_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/FakeItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFakeItem_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFakeItem, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFakeItem_Statics::NewProp_World_MetaData), Z_Construct_UClass_UFakeItem_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFakeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFakeItem_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFakeItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFakeItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFakeItem_Statics::ClassParams = {
		&UFakeItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFakeItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFakeItem_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFakeItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFakeItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFakeItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFakeItem()
	{
		if (!Z_Registration_Info_UClass_UFakeItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFakeItem.OuterSingleton, Z_Construct_UClass_UFakeItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFakeItem.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UFakeItem>()
	{
		return UFakeItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFakeItem);
	UFakeItem::~UFakeItem() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FakeItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FakeItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFakeItem, UFakeItem::StaticClass, TEXT("UFakeItem"), &Z_Registration_Info_UClass_UFakeItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFakeItem), 3696370251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FakeItem_h_2654385954(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FakeItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_FakeItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
