// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/FarmerCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmerCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_AFarmerCharacter();
	FARMER_API UClass* Z_Construct_UClass_AFarmerCharacter_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_ASoil_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UCropSeedsUserWidget_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UInterfaceActivate_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UInterfacePlantSeed_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	DEFINE_FUNCTION(AFarmerCharacter::execTriggerRemovePlant)
	{
		P_GET_OBJECT(ASoil,Z_Param_currentSoil);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerRemovePlant(Z_Param_currentSoil);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFarmerCharacter::execPlayChoppingAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayChoppingAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFarmerCharacter::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFarmerCharacter::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFarmerCharacter::execAutoSave)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoSave(Z_Param_Out_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFarmerCharacter::execLoadGameIfExist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGameIfExist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFarmerCharacter::execCreateSaveGameInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSaveGameInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFarmerCharacter::execUpdateHealthyValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealthyValue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFarmerCharacter::execOnBeginOverlapCB)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapCB(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AFarmerCharacter_UpdateHealthyValue = FName(TEXT("UpdateHealthyValue"));
	void AFarmerCharacter::UpdateHealthyValue()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFarmerCharacter_UpdateHealthyValue),NULL);
	}
	void AFarmerCharacter::StaticRegisterNativesAFarmerCharacter()
	{
		UClass* Class = AFarmerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AutoSave", &AFarmerCharacter::execAutoSave },
			{ "CreateSaveGameInstance", &AFarmerCharacter::execCreateSaveGameInstance },
			{ "LoadGame", &AFarmerCharacter::execLoadGame },
			{ "LoadGameIfExist", &AFarmerCharacter::execLoadGameIfExist },
			{ "OnBeginOverlapCB", &AFarmerCharacter::execOnBeginOverlapCB },
			{ "PlayChoppingAnim", &AFarmerCharacter::execPlayChoppingAnim },
			{ "SaveGame", &AFarmerCharacter::execSaveGame },
			{ "TriggerRemovePlant", &AFarmerCharacter::execTriggerRemovePlant },
			{ "UpdateHealthyValue", &AFarmerCharacter::execUpdateHealthyValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics
	{
		struct FarmerCharacter_eventAutoSave_Parms
		{
			int32 index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmerCharacter_eventAutoSave_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFarmerCharacter, nullptr, "AutoSave", nullptr, nullptr, Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::FarmerCharacter_eventAutoSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::FarmerCharacter_eventAutoSave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFarmerCharacter_AutoSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmerCharacter_AutoSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFarmerCharacter_CreateSaveGameInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_CreateSaveGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmerCharacter_CreateSaveGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFarmerCharacter, nullptr, "CreateSaveGameInstance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_CreateSaveGameInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmerCharacter_CreateSaveGameInstance_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFarmerCharacter_CreateSaveGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmerCharacter_CreateSaveGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFarmerCharacter_LoadGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmerCharacter_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFarmerCharacter, nullptr, "LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmerCharacter_LoadGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFarmerCharacter_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmerCharacter_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFarmerCharacter_LoadGameIfExist_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_LoadGameIfExist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmerCharacter_LoadGameIfExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFarmerCharacter, nullptr, "LoadGameIfExist", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_LoadGameIfExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmerCharacter_LoadGameIfExist_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFarmerCharacter_LoadGameIfExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmerCharacter_LoadGameIfExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics
	{
		struct FarmerCharacter_eventOnBeginOverlapCB_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmerCharacter_eventOnBeginOverlapCB_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmerCharacter_eventOnBeginOverlapCB_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmerCharacter_eventOnBeginOverlapCB_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmerCharacter_eventOnBeginOverlapCB_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FarmerCharacter_eventOnBeginOverlapCB_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FarmerCharacter_eventOnBeginOverlapCB_Parms), &Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmerCharacter_eventOnBeginOverlapCB_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFarmerCharacter, nullptr, "OnBeginOverlapCB", nullptr, nullptr, Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::FarmerCharacter_eventOnBeginOverlapCB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::FarmerCharacter_eventOnBeginOverlapCB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFarmerCharacter_PlayChoppingAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_PlayChoppingAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmerCharacter_PlayChoppingAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFarmerCharacter, nullptr, "PlayChoppingAnim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_PlayChoppingAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmerCharacter_PlayChoppingAnim_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFarmerCharacter_PlayChoppingAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmerCharacter_PlayChoppingAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFarmerCharacter_SaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmerCharacter_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFarmerCharacter, nullptr, "SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmerCharacter_SaveGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFarmerCharacter_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmerCharacter_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics
	{
		struct FarmerCharacter_eventTriggerRemovePlant_Parms
		{
			ASoil* currentSoil;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_currentSoil;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::NewProp_currentSoil = { "currentSoil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmerCharacter_eventTriggerRemovePlant_Parms, currentSoil), Z_Construct_UClass_ASoil_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::NewProp_currentSoil,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFarmerCharacter, nullptr, "TriggerRemovePlant", nullptr, nullptr, Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::FarmerCharacter_eventTriggerRemovePlant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::FarmerCharacter_eventTriggerRemovePlant_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFarmerCharacter_UpdateHealthyValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFarmerCharacter_UpdateHealthyValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmerCharacter_UpdateHealthyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFarmerCharacter, nullptr, "UpdateHealthyValue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmerCharacter_UpdateHealthyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmerCharacter_UpdateHealthyValue_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFarmerCharacter_UpdateHealthyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmerCharacter_UpdateHealthyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFarmerCharacter);
	UClass* Z_Construct_UClass_AFarmerCharacter_NoRegister()
	{
		return AFarmerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFarmerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Custom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_Custom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_EAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_EAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_QAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_QAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_WheelUp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_WheelUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IA_WheelDown_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_WheelDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedsInventoryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SeedsInventoryClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedsInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SeedsInventory;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SeedsAmount_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeedsAmount_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SeedsAmount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CropsEarned_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropsEarned_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CropsEarned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundingBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MySaveGameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MySaveGameInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoppingTreeMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoppingTreeMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFarmerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFarmerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFarmerCharacter_AutoSave, "AutoSave" }, // 1791211083
		{ &Z_Construct_UFunction_AFarmerCharacter_CreateSaveGameInstance, "CreateSaveGameInstance" }, // 1182813865
		{ &Z_Construct_UFunction_AFarmerCharacter_LoadGame, "LoadGame" }, // 3131354145
		{ &Z_Construct_UFunction_AFarmerCharacter_LoadGameIfExist, "LoadGameIfExist" }, // 453795596
		{ &Z_Construct_UFunction_AFarmerCharacter_OnBeginOverlapCB, "OnBeginOverlapCB" }, // 2517457471
		{ &Z_Construct_UFunction_AFarmerCharacter_PlayChoppingAnim, "PlayChoppingAnim" }, // 3257359485
		{ &Z_Construct_UFunction_AFarmerCharacter_SaveGame, "SaveGame" }, // 399187742
		{ &Z_Construct_UFunction_AFarmerCharacter_TriggerRemovePlant, "TriggerRemovePlant" }, // 2246806244
		{ &Z_Construct_UFunction_AFarmerCharacter_UpdateHealthyValue, "UpdateHealthyValue" }, // 264033271
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DELEGATE(MyFeedDelegate);  // Feed the Fox\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FarmerCharacter.h" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DELEGATE(MyFeedDelegate);   Feed the Fox" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IMC_Custom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IMC_Custom = { "IMC_Custom", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, IMC_Custom), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IMC_Custom_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IMC_Custom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_EAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom Action E\n" },
#endif
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Action E" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_EAction = { "IA_EAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, IA_EAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_EAction_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_EAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_QAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom Action Q\n" },
#endif
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Action Q" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_QAction = { "IA_QAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, IA_QAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_QAction_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_QAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelUp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom Action Wheel Axis\n" },
#endif
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Action Wheel Axis" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelUp = { "IA_WheelUp", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, IA_WheelUp), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelUp_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelDown = { "IA_WheelDown", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, IA_WheelDown), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelDown_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_Seeds_MetaData[] = {
		{ "Category", "FarmerCharacter" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, Seeds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_Seeds_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_Seeds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventoryClass_MetaData[] = {
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventoryClass = { "SeedsInventoryClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, SeedsInventoryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventoryClass_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventoryClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventory_MetaData[] = {
		{ "Category", "FarmerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventory = { "SeedsInventory", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, SeedsInventory), Z_Construct_UClass_UCropSeedsUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventory_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventory_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsAmount_Inner = { "SeedsAmount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsAmount_MetaData[] = {
		{ "Category", "FarmerCharacter" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsAmount = { "SeedsAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, SeedsAmount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsAmount_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsAmount_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CropsEarned_Inner = { "CropsEarned", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CropsEarned_MetaData[] = {
		{ "Category", "FarmerCharacter" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CropsEarned = { "CropsEarned", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, CropsEarned), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CropsEarned_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CropsEarned_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "Category", "FarmerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, BoundingBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_BoundingBox_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_BoundingBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SaveGameInstance_MetaData[] = {
		{ "Category", "FarmerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto Game Save Test\n" },
#endif
		{ "ModuleRelativePath", "FarmerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto Game Save Test" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SaveGameInstance = { "SaveGameInstance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, SaveGameInstance), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SaveGameInstance_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SaveGameInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MySaveGameInstance_MetaData[] = {
		{ "Category", "FarmerCharacter" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MySaveGameInstance = { "MySaveGameInstance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, MySaveGameInstance), Z_Construct_UClass_UMySaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MySaveGameInstance_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MySaveGameInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_ChoppingTreeMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FarmerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_ChoppingTreeMontage = { "ChoppingTreeMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmerCharacter, ChoppingTreeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_ChoppingTreeMontage_MetaData), Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_ChoppingTreeMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFarmerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IMC_Custom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_EAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_QAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_IA_WheelDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_Seeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventoryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsAmount_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SeedsAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CropsEarned_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_CropsEarned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_BoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_SaveGameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_MySaveGameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmerCharacter_Statics::NewProp_ChoppingTreeMontage,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFarmerCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceActivate_NoRegister, (int32)VTABLE_OFFSET(AFarmerCharacter, IInterfaceActivate), false },  // 511138240
			{ Z_Construct_UClass_UInterfacePlantSeed_NoRegister, (int32)VTABLE_OFFSET(AFarmerCharacter, IInterfacePlantSeed), false },  // 73441456
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFarmerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmerCharacter_Statics::ClassParams = {
		&AFarmerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFarmerCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFarmerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFarmerCharacter()
	{
		if (!Z_Registration_Info_UClass_AFarmerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmerCharacter.OuterSingleton, Z_Construct_UClass_AFarmerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFarmerCharacter.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<AFarmerCharacter>()
	{
		return AFarmerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmerCharacter);
	AFarmerCharacter::~AFarmerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFarmerCharacter, AFarmerCharacter::StaticClass, TEXT("AFarmerCharacter"), &Z_Registration_Info_UClass_AFarmerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmerCharacter), 3627447101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_399842788(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
