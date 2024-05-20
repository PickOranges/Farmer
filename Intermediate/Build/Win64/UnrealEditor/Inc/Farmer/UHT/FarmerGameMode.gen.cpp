// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/FarmerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmerGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FARMER_API UClass* Z_Construct_UClass_AFarmerGameMode();
	FARMER_API UClass* Z_Construct_UClass_AFarmerGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void AFarmerGameMode::StaticRegisterNativesAFarmerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFarmerGameMode);
	UClass* Z_Construct_UClass_AFarmerGameMode_NoRegister()
	{
		return AFarmerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFarmerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFarmerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FarmerGameMode.h" },
		{ "ModuleRelativePath", "FarmerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFarmerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmerGameMode_Statics::ClassParams = {
		&AFarmerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFarmerGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFarmerGameMode()
	{
		if (!Z_Registration_Info_UClass_AFarmerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmerGameMode.OuterSingleton, Z_Construct_UClass_AFarmerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFarmerGameMode.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<AFarmerGameMode>()
	{
		return AFarmerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmerGameMode);
	AFarmerGameMode::~AFarmerGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFarmerGameMode, AFarmerGameMode::StaticClass, TEXT("AFarmerGameMode"), &Z_Registration_Info_UClass_AFarmerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmerGameMode), 69949992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerGameMode_h_2113131286(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
