// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/IItemCppInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIItemCppInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	FARMER_API UClass* Z_Construct_UClass_UItemCppInterface();
	FARMER_API UClass* Z_Construct_UClass_UItemCppInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void UItemCppInterface::StaticRegisterNativesUItemCppInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemCppInterface);
	UClass* Z_Construct_UClass_UItemCppInterface_NoRegister()
	{
		return UItemCppInterface::StaticClass();
	}
	struct Z_Construct_UClass_UItemCppInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemCppInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCppInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemCppInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "IItemCppInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemCppInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemCppInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemCppInterface_Statics::ClassParams = {
		&UItemCppInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCppInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemCppInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UItemCppInterface()
	{
		if (!Z_Registration_Info_UClass_UItemCppInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemCppInterface.OuterSingleton, Z_Construct_UClass_UItemCppInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemCppInterface.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UItemCppInterface>()
	{
		return UItemCppInterface::StaticClass();
	}
	UItemCppInterface::UItemCppInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemCppInterface);
	UItemCppInterface::~UItemCppInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemCppInterface, UItemCppInterface::StaticClass, TEXT("UItemCppInterface"), &Z_Registration_Info_UClass_UItemCppInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemCppInterface), 162212395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_1410532068(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
