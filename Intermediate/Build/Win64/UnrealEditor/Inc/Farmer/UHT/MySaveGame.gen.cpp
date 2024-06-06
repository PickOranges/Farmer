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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	FARMER_API UClass* Z_Construct_UClass_UMySaveGame();
	FARMER_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	FARMER_API UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData();
	FARMER_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSaveData();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshSaveData;
class UScriptStruct* FMeshSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSaveData, (UObject*)Z_Construct_UPackage__Script_Farmer(), TEXT("MeshSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_MeshSaveData.OuterSingleton;
}
template<> FARMER_API UScriptStruct* StaticStruct<FMeshSaveData>()
{
	return FMeshSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSaveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSaveData, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshName_MetaData), Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshLocation = { "MeshLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSaveData, MeshLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshLocation_MetaData), Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshRotation = { "MeshRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSaveData, MeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshRotation_MetaData), Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewProp_MeshRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
		nullptr,
		&NewStructOps,
		"MeshSaveData",
		Z_Construct_UScriptStruct_FMeshSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::PropPointers),
		sizeof(FMeshSaveData),
		alignof(FMeshSaveData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshSaveData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSaveData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshSaveData.InnerSingleton, Z_Construct_UScriptStruct_FMeshSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSaveData;
class UScriptStruct* FActorSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSaveData, (UObject*)Z_Construct_UPackage__Script_Farmer(), TEXT("ActorSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSaveData.OuterSingleton;
}
template<> FARMER_API UScriptStruct* StaticStruct<FActorSaveData>()
{
	return FActorSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerRemaining;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSaveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorSaveData, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName_MetaData), Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorSaveData, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorLocation_MetaData), Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorSaveData, ActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorRotation_MetaData), Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorRotation_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_AttachedMeshes_Inner = { "AttachedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshSaveData, METADATA_PARAMS(0, nullptr) }; // 4035389219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_AttachedMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_AttachedMeshes = { "AttachedMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorSaveData, AttachedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_AttachedMeshes_MetaData), Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_AttachedMeshes_MetaData) }; // 4035389219
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_TimerRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_TimerRemaining = { "TimerRemaining", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorSaveData, TimerRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_TimerRemaining_MetaData), Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_TimerRemaining_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_AttachedMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_AttachedMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSaveData_Statics::NewProp_TimerRemaining,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
		nullptr,
		&NewStructOps,
		"ActorSaveData",
		Z_Construct_UScriptStruct_FActorSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::PropPointers),
		sizeof(FActorSaveData),
		alignof(FActorSaveData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorSaveData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSaveData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActorSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton, Z_Construct_UScriptStruct_FActorSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSaveData.InnerSingleton;
	}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedActors;
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
		{ "IncludePath", "MySaveGame.h" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_Inner = { "EarnedCrops", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops = { "EarnedCrops", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySaveGame, EarnedCrops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_MetaData), Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySaveGame, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation_MetaData), Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerRotation_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerRotation = { "PlayerRotation", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySaveGame, PlayerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerRotation_MetaData), Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerRotation_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_Inner = { "SavedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorSaveData, METADATA_PARAMS(0, nullptr) }; // 2964133309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors = { "SavedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySaveGame, SavedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_MetaData), Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_MetaData) }; // 2964133309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SavedActors,
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ScriptStructInfo[] = {
		{ FMeshSaveData::StaticStruct, Z_Construct_UScriptStruct_FMeshSaveData_Statics::NewStructOps, TEXT("MeshSaveData"), &Z_Registration_Info_UScriptStruct_MeshSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshSaveData), 4035389219U) },
		{ FActorSaveData::StaticStruct, Z_Construct_UScriptStruct_FActorSaveData_Statics::NewStructOps, TEXT("ActorSaveData"), &Z_Registration_Info_UScriptStruct_ActorSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSaveData), 2964133309U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySaveGame, UMySaveGame::StaticClass, TEXT("UMySaveGame"), &Z_Registration_Info_UClass_UMySaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySaveGame), 719782031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_1755558399(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
