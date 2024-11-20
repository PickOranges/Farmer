// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/CropBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCropBase() {}
// Cross Module References
	FARMER_API UClass* Z_Construct_UClass_ACropBase();
	FARMER_API UClass* Z_Construct_UClass_ACropBase_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_AResourceNew();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void ACropBase::StaticRegisterNativesACropBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACropBase);
	UClass* Z_Construct_UClass_ACropBase_NoRegister()
	{
		return ACropBase::StaticClass();
	}
	struct Z_Construct_UClass_ACropBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACropBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AResourceNew,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACropBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CropBase.h" },
		{ "ModuleRelativePath", "CropBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACropBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACropBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACropBase_Statics::ClassParams = {
		&ACropBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACropBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACropBase()
	{
		if (!Z_Registration_Info_UClass_ACropBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACropBase.OuterSingleton, Z_Construct_UClass_ACropBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACropBase.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<ACropBase>()
	{
		return ACropBase::StaticClass();
	}
	ACropBase::ACropBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACropBase);
	ACropBase::~ACropBase() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_CropBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_CropBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACropBase, ACropBase::StaticClass, TEXT("ACropBase"), &Z_Registration_Info_UClass_ACropBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACropBase), 1638891361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_CropBase_h_1042048043(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_CropBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_CropBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
