// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/Interactable.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FARMER_API UClass* Z_Construct_UClass_AInteractable();
	FARMER_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	DEFINE_FUNCTION(AInteractable::execOnPlayerOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execOnPlayerOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execOnInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract();
		P_NATIVE_END;
	}
	void AInteractable::StaticRegisterNativesAInteractable()
	{
		UClass* Class = AInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &AInteractable::execOnInteract },
			{ "OnPlayerOverlapBegin", &AInteractable::execOnPlayerOverlapBegin },
			{ "OnPlayerOverlapEnd", &AInteractable::execOnPlayerOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractable_OnInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "OnInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_OnInteract_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AInteractable_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics
	{
		struct Interactable_eventOnPlayerOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnPlayerOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnPlayerOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnPlayerOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnPlayerOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Interactable_eventOnPlayerOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Interactable_eventOnPlayerOverlapBegin_Parms), &Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnPlayerOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "OnPlayerOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::Interactable_eventOnPlayerOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::Interactable_eventOnPlayerOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics
	{
		struct Interactable_eventOnPlayerOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnPlayerOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnPlayerOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnPlayerOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnPlayerOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "OnPlayerOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::Interactable_eventOnPlayerOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::Interactable_eventOnPlayerOverlapEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractable);
	UClass* Z_Construct_UClass_AInteractable_NoRegister()
	{
		return AInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteractable_MetaData[];
#endif
		static void NewProp_bIsInteractable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractable_OnInteract, "OnInteract" }, // 316262944
		{ &Z_Construct_UFunction_AInteractable_OnPlayerOverlapBegin, "OnPlayerOverlapBegin" }, // 179600690
		{ &Z_Construct_UFunction_AInteractable_OnPlayerOverlapEnd, "OnPlayerOverlapEnd" }, // 1977591479
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable.h" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_bIsInteractable_MetaData[] = {
		{ "Category", "Interactable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n//virtual void Tick(float DeltaTime) override;\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame\nvirtual void Tick(float DeltaTime) override;" },
#endif
	};
#endif
	void Z_Construct_UClass_AInteractable_Statics::NewProp_bIsInteractable_SetBit(void* Obj)
	{
		((AInteractable*)Obj)->bIsInteractable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_bIsInteractable = { "bIsInteractable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractable), &Z_Construct_UClass_AInteractable_Statics::NewProp_bIsInteractable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_bIsInteractable_MetaData), Z_Construct_UClass_AInteractable_Statics::NewProp_bIsInteractable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractable, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_CollisionBox_MetaData), Z_Construct_UClass_AInteractable_Statics::NewProp_CollisionBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_InteractionWidget_MetaData[] = {
		{ "Category", "Interactable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractable, InteractionWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_InteractionWidget_MetaData), Z_Construct_UClass_AInteractable_Statics::NewProp_InteractionWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_bIsInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_CollisionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_InteractionWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Statics::ClassParams = {
		&AInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AInteractable()
	{
		if (!Z_Registration_Info_UClass_AInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractable.OuterSingleton, Z_Construct_UClass_AInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractable.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<AInteractable>()
	{
		return AInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable);
	AInteractable::~AInteractable() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractable, AInteractable::StaticClass, TEXT("AInteractable"), &Z_Registration_Info_UClass_AInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractable), 2645238289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_973183080(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
