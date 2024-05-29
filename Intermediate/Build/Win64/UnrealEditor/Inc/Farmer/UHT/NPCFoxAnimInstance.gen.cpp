// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/NPCFoxAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCFoxAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	FARMER_API UClass* Z_Construct_UClass_UNPCFoxAnimInstance();
	FARMER_API UClass* Z_Construct_UClass_UNPCFoxAnimInstance_NoRegister();
	FARMER_API UEnum* Z_Construct_UEnum_Farmer_EStatesRandom();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatesRandom;
	static UEnum* EStatesRandom_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStatesRandom.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStatesRandom.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Farmer_EStatesRandom, (UObject*)Z_Construct_UPackage__Script_Farmer(), TEXT("EStatesRandom"));
		}
		return Z_Registration_Info_UEnum_EStatesRandom.OuterSingleton;
	}
	template<> FARMER_API UEnum* StaticEnum<EStatesRandom>()
	{
		return EStatesRandom_StaticEnum();
	}
	struct Z_Construct_UEnum_Farmer_EStatesRandom_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Farmer_EStatesRandom_Statics::Enumerators[] = {
		{ "EStatesRandom::Sleep1", (int64)EStatesRandom::Sleep1 },
		{ "EStatesRandom::Sleep2", (int64)EStatesRandom::Sleep2 },
		{ "EStatesRandom::Stand1", (int64)EStatesRandom::Stand1 },
		{ "EStatesRandom::Stand2", (int64)EStatesRandom::Stand2 },
		{ "EStatesRandom::Idle1", (int64)EStatesRandom::Idle1 },
		{ "EStatesRandom::Idle2", (int64)EStatesRandom::Idle2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Farmer_EStatesRandom_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Idle1.Comment", "/**\n * \n */" },
		{ "Idle1.Name", "EStatesRandom::Idle1" },
		{ "Idle2.Comment", "/**\n * \n */" },
		{ "Idle2.Name", "EStatesRandom::Idle2" },
		{ "ModuleRelativePath", "Public/NPCFoxAnimInstance.h" },
		{ "Sleep1.Comment", "/**\n * \n */" },
		{ "Sleep1.Name", "EStatesRandom::Sleep1" },
		{ "Sleep2.Comment", "/**\n * \n */" },
		{ "Sleep2.Name", "EStatesRandom::Sleep2" },
		{ "Stand1.Comment", "/**\n * \n */" },
		{ "Stand1.Name", "EStatesRandom::Stand1" },
		{ "Stand2.Comment", "/**\n * \n */" },
		{ "Stand2.Name", "EStatesRandom::Stand2" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Farmer_EStatesRandom_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Farmer,
		nullptr,
		"EStatesRandom",
		"EStatesRandom",
		Z_Construct_UEnum_Farmer_EStatesRandom_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Farmer_EStatesRandom_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Farmer_EStatesRandom_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Farmer_EStatesRandom_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Farmer_EStatesRandom()
	{
		if (!Z_Registration_Info_UEnum_EStatesRandom.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatesRandom.InnerSingleton, Z_Construct_UEnum_Farmer_EStatesRandom_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStatesRandom.InnerSingleton;
	}
	DEFINE_FUNCTION(UNPCFoxAnimInstance::execSetCurrentState)
	{
		P_GET_ENUM(EStatesRandom,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentState(EStatesRandom(Z_Param_NewState));
		P_NATIVE_END;
	}
	void UNPCFoxAnimInstance::StaticRegisterNativesUNPCFoxAnimInstance()
	{
		UClass* Class = UNPCFoxAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrentState", &UNPCFoxAnimInstance::execSetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics
	{
		struct NPCFoxAnimInstance_eventSetCurrentState_Parms
		{
			EStatesRandom NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCFoxAnimInstance_eventSetCurrentState_Parms, NewState), Z_Construct_UEnum_Farmer_EStatesRandom, METADATA_PARAMS(0, nullptr) }; // 1572862775
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatesEnum" },
		{ "ModuleRelativePath", "Public/NPCFoxAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCFoxAnimInstance, nullptr, "SetCurrentState", nullptr, nullptr, Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::NPCFoxAnimInstance_eventSetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::NPCFoxAnimInstance_eventSetCurrentState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCFoxAnimInstance);
	UClass* Z_Construct_UClass_UNPCFoxAnimInstance_NoRegister()
	{
		return UNPCFoxAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNPCFoxAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCFoxAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFoxAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNPCFoxAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCFoxAnimInstance_SetCurrentState, "SetCurrentState" }, // 1296244129
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFoxAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCFoxAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "NPCFoxAnimInstance.h" },
		{ "ModuleRelativePath", "Public/NPCFoxAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNPCFoxAnimInstance_Statics::NewProp_CurrState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCFoxAnimInstance_Statics::NewProp_CurrState_MetaData[] = {
		{ "Category", "StatesEnum" },
		{ "ModuleRelativePath", "Public/NPCFoxAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNPCFoxAnimInstance_Statics::NewProp_CurrState = { "CurrState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCFoxAnimInstance, CurrState), Z_Construct_UEnum_Farmer_EStatesRandom, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFoxAnimInstance_Statics::NewProp_CurrState_MetaData), Z_Construct_UClass_UNPCFoxAnimInstance_Statics::NewProp_CurrState_MetaData) }; // 1572862775
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCFoxAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCFoxAnimInstance_Statics::NewProp_CurrState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCFoxAnimInstance_Statics::NewProp_CurrState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCFoxAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCFoxAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCFoxAnimInstance_Statics::ClassParams = {
		&UNPCFoxAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNPCFoxAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFoxAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFoxAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCFoxAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCFoxAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNPCFoxAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UNPCFoxAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCFoxAnimInstance.OuterSingleton, Z_Construct_UClass_UNPCFoxAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCFoxAnimInstance.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UNPCFoxAnimInstance>()
	{
		return UNPCFoxAnimInstance::StaticClass();
	}
	UNPCFoxAnimInstance::UNPCFoxAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCFoxAnimInstance);
	UNPCFoxAnimInstance::~UNPCFoxAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_Statics::EnumInfo[] = {
		{ EStatesRandom_StaticEnum, TEXT("EStatesRandom"), &Z_Registration_Info_UEnum_EStatesRandom, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1572862775U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCFoxAnimInstance, UNPCFoxAnimInstance::StaticClass, TEXT("UNPCFoxAnimInstance"), &Z_Registration_Info_UClass_UNPCFoxAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCFoxAnimInstance), 3915919314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_529378442(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
