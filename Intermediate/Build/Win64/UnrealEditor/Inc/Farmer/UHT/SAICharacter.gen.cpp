// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/SAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAICharacter() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_ASAICharacter();
	FARMER_API UClass* Z_Construct_UClass_ASAICharacter_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UNPCFoxAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	DEFINE_FUNCTION(ASAICharacter::execOnAnimationFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAICharacter::execSelectRandomState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectRandomState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAICharacter::execOnPawnSeen)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSeen(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void ASAICharacter::StaticRegisterNativesASAICharacter()
	{
		UClass* Class = ASAICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAnimationFinished", &ASAICharacter::execOnAnimationFinished },
			{ "OnPawnSeen", &ASAICharacter::execOnPawnSeen },
			{ "SelectRandomState", &ASAICharacter::execSelectRandomState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAICharacter_OnAnimationFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICharacter_OnAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/SAICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICharacter_OnAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICharacter, nullptr, "OnAnimationFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_OnAnimationFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAICharacter_OnAnimationFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASAICharacter_OnAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAICharacter_OnAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics
	{
		struct SAICharacter_eventOnPawnSeen_Parms
		{
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAICharacter_eventOnPawnSeen_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICharacter, nullptr, "OnPawnSeen", nullptr, nullptr, Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::SAICharacter_eventOnPawnSeen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::SAICharacter_eventOnPawnSeen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASAICharacter_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAICharacter_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAICharacter_SelectRandomState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICharacter_SelectRandomState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/SAICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICharacter_SelectRandomState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICharacter, nullptr, "SelectRandomState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_SelectRandomState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAICharacter_SelectRandomState_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASAICharacter_SelectRandomState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAICharacter_SelectRandomState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASAICharacter);
	UClass* Z_Construct_UClass_ASAICharacter_NoRegister()
	{
		return ASAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAICharacter_OnAnimationFinished, "OnAnimationFinished" }, // 4250703923
		{ &Z_Construct_UFunction_ASAICharacter_OnPawnSeen, "OnPawnSeen" }, // 771422935
		{ &Z_Construct_UFunction_ASAICharacter_SelectRandomState, "SelectRandomState" }, // 2413019212
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SAICharacter.h" },
		{ "ModuleRelativePath", "Public/SAICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAICharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASAICharacter, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensingComp_MetaData), Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensingComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::NewProp_AnimInst_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/SAICharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAICharacter_Statics::NewProp_AnimInst = { "AnimInst", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASAICharacter, AnimInst), Z_Construct_UClass_UNPCFoxAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::NewProp_AnimInst_MetaData), Z_Construct_UClass_ASAICharacter_Statics::NewProp_AnimInst_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAICharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICharacter_Statics::NewProp_PawnSensingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICharacter_Statics::NewProp_AnimInst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAICharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASAICharacter_Statics::ClassParams = {
		&ASAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASAICharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASAICharacter()
	{
		if (!Z_Registration_Info_UClass_ASAICharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASAICharacter.OuterSingleton, Z_Construct_UClass_ASAICharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASAICharacter.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<ASAICharacter>()
	{
		return ASAICharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAICharacter);
	ASAICharacter::~ASAICharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAICharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAICharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASAICharacter, ASAICharacter::StaticClass, TEXT("ASAICharacter"), &Z_Registration_Info_UClass_ASAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAICharacter), 2881360934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAICharacter_h_2804491794(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAICharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
