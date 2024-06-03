// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/MySaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	FARMER_API UClass* Z_Construct_UClass_UMySaveGame();
	FARMER_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void UMySaveGame::StaticRegisterNativesUMySaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySaveGame);
	UClass* Z_Construct_UClass_UMySaveGame_NoRegister()
	{
		return UMySaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMySaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EarnedCrops_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarnedCrops_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EarnedCrops;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MySaveGame.h" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_Inner = { "EarnedCrops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops = { "EarnedCrops", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySaveGame, EarnedCrops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_MetaData), Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySaveGame_Statics::ClassParams = {
		&UMySaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMySaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UMySaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMySaveGame()
	{
		if (!Z_Registration_Info_UClass_UMySaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySaveGame.OuterSingleton, Z_Construct_UClass_UMySaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySaveGame.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UMySaveGame>()
	{
		return UMySaveGame::StaticClass();
	}
	UMySaveGame::UMySaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySaveGame);
	UMySaveGame::~UMySaveGame() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySaveGame, UMySaveGame::StaticClass, TEXT("UMySaveGame"), &Z_Registration_Info_UClass_UMySaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySaveGame), 3441037150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_2003387437(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
