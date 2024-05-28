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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	FARMER_API UClass* Z_Construct_UClass_ASAICharacter();
	FARMER_API UClass* Z_Construct_UClass_ASAICharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	DEFINE_FUNCTION(ASAICharacter::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void ASAICharacter::StaticRegisterNativesASAICharacter()
	{
		UClass* Class = ASAICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Tick", &ASAICharacter::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAICharacter_Tick_Statics
	{
		struct SAICharacter_eventTick_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAICharacter_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAICharacter_eventTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAICharacter_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAICharacter_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAICharacter_Tick_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n" },
#endif
		{ "ModuleRelativePath", "Public/SAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAICharacter_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAICharacter, nullptr, "Tick", nullptr, nullptr, Z_Construct_UFunction_ASAICharacter_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_Tick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASAICharacter_Tick_Statics::SAICharacter_eventTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASAICharacter_Tick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASAICharacter_Tick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASAICharacter_Tick_Statics::SAICharacter_eventTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASAICharacter_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASAICharacter_Tick_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistToPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistToPlayer;
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
		{ &Z_Construct_UFunction_ASAICharacter_Tick, "Tick" }, // 4261432351
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICharacter_Statics::NewProp_DistToPlayer_MetaData[] = {
		{ "Category", "NPC_Fox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//// Called to bind functionality to input\n//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;\n" },
#endif
		{ "ModuleRelativePath", "Public/SAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Called to bind functionality to input\nvirtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAICharacter_Statics::NewProp_DistToPlayer = { "DistToPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASAICharacter, DistToPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAICharacter_Statics::NewProp_DistToPlayer_MetaData), Z_Construct_UClass_ASAICharacter_Statics::NewProp_DistToPlayer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAICharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICharacter_Statics::NewProp_DistToPlayer,
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
		{ Z_Construct_UClass_ASAICharacter, ASAICharacter::StaticClass, TEXT("ASAICharacter"), &Z_Registration_Info_UClass_ASAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAICharacter), 2543659903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAICharacter_h_2872059624(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_SAICharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
