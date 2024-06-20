// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/ResourceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_AInteractable();
	FARMER_API UClass* Z_Construct_UClass_AResourceBase();
	FARMER_API UClass* Z_Construct_UClass_AResourceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void AResourceBase::StaticRegisterNativesAResourceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResourceBase);
	UClass* Z_Construct_UClass_AResourceBase_NoRegister()
	{
		return AResourceBase::StaticClass();
	}
	struct Z_Construct_UClass_AResourceBase_Statics
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
	UObject* (*const Z_Construct_UClass_AResourceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResourceBase.h" },
		{ "ModuleRelativePath", "Public/ResourceBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResourceBase_Statics::NewProp_ResourceMesh_MetaData[] = {
		{ "Category", "Resource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ResourceBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResourceBase_Statics::NewProp_ResourceMesh = { "ResourceMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResourceBase, ResourceMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceBase_Statics::NewProp_ResourceMesh_MetaData), Z_Construct_UClass_AResourceBase_Statics::NewProp_ResourceMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResourceBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResourceBase_Statics::NewProp_ResourceMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResourceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResourceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResourceBase_Statics::ClassParams = {
		&AResourceBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AResourceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AResourceBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AResourceBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResourceBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AResourceBase()
	{
		if (!Z_Registration_Info_UClass_AResourceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResourceBase.OuterSingleton, Z_Construct_UClass_AResourceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResourceBase.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<AResourceBase>()
	{
		return AResourceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResourceBase);
	AResourceBase::~AResourceBase() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResourceBase, AResourceBase::StaticClass, TEXT("AResourceBase"), &Z_Registration_Info_UClass_AResourceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResourceBase), 1560420728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_3623770116(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
