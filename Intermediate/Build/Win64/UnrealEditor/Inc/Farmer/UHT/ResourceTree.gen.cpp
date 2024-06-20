// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/ResourceTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceTree() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_AResourceBase();
	FARMER_API UClass* Z_Construct_UClass_AResourceTree();
	FARMER_API UClass* Z_Construct_UClass_AResourceTree_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void AResourceTree::StaticRegisterNativesAResourceTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResourceTree);
	UClass* Z_Construct_UClass_AResourceTree_NoRegister()
	{
		return AResourceTree::StaticClass();
	}
	struct Z_Construct_UClass_AResourceTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResourceTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AResourceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::DependentSingletons) < 16);
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ResourceTree\")\n//UStaticMesh* WoodMesh;\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ResourceTree\")\nUStaticMesh* WoodMesh;" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AResourceTree_Statics::NewProp_WoodClass = { "WoodClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResourceTree, WoodClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceTree_Statics::NewProp_WoodClass_MetaData), Z_Construct_UClass_AResourceTree_Statics::NewProp_WoodClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResourceTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceTree_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceTree_Statics::NewProp_WoodClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResourceTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResourceTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResourceTree_Statics::ClassParams = {
		&AResourceTree::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AResourceTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AResourceTree, AResourceTree::StaticClass, TEXT("AResourceTree"), &Z_Registration_Info_UClass_AResourceTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResourceTree), 3517616001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_668073461(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
