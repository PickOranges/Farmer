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
	DEFINE_FUNCTION(ACropBase::execPlantSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlantSeed_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACropBase_PlantSeed = FName(TEXT("PlantSeed"));
	void ACropBase::PlantSeed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACropBase_PlantSeed),NULL);
	}
	void ACropBase::StaticRegisterNativesACropBase()
	{
		UClass* Class = ACropBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlantSeed", &ACropBase::execPlantSeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACropBase_PlantSeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACropBase_PlantSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CropBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropBase_PlantSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACropBase, nullptr, "PlantSeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropBase_PlantSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropBase_PlantSeed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACropBase_PlantSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropBase_PlantSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACropBase);
	UClass* Z_Construct_UClass_ACropBase_NoRegister()
	{
		return ACropBase::StaticClass();
	}
	struct Z_Construct_UClass_ACropBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ACropBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACropBase_PlantSeed, "PlantSeed" }, // 741903296
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACropBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CropBase.h" },
		{ "IsBlueprintBase", "true" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ACropBase, ACropBase::StaticClass, TEXT("ACropBase"), &Z_Registration_Info_UClass_ACropBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACropBase), 924166551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_CropBase_h_62330746(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_CropBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_CropBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
