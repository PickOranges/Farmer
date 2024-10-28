// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/ResourceNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceNew() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_AInteractable();
	FARMER_API UClass* Z_Construct_UClass_AResourceNew();
	FARMER_API UClass* Z_Construct_UClass_AResourceNew_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void AResourceNew::StaticRegisterNativesAResourceNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResourceNew);
	UClass* Z_Construct_UClass_AResourceNew_NoRegister()
	{
		return AResourceNew::StaticClass();
	}
	struct Z_Construct_UClass_AResourceNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResourceMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResourceNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceNew_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceNew_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResourceNew.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ResourceNew.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceNew_Statics::NewProp_ResourceMesh_MetaData[] = {
		{ "Category", "ResourceNew" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ResourceNew.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResourceNew_Statics::NewProp_ResourceMesh = { "ResourceMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResourceNew, ResourceMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceNew_Statics::NewProp_ResourceMesh_MetaData), Z_Construct_UClass_AResourceNew_Statics::NewProp_ResourceMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResourceNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceNew_Statics::NewProp_ResourceMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResourceNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResourceNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResourceNew_Statics::ClassParams = {
		&AResourceNew::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AResourceNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AResourceNew_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceNew_Statics::Class_MetaDataParams), Z_Construct_UClass_AResourceNew_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceNew_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AResourceNew()
	{
		if (!Z_Registration_Info_UClass_AResourceNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResourceNew.OuterSingleton, Z_Construct_UClass_AResourceNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResourceNew.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<AResourceNew>()
	{
		return AResourceNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResourceNew);
	AResourceNew::~AResourceNew() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResourceNew, AResourceNew::StaticClass, TEXT("AResourceNew"), &Z_Registration_Info_UClass_AResourceNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResourceNew), 1114164239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceNew_h_340036998(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
