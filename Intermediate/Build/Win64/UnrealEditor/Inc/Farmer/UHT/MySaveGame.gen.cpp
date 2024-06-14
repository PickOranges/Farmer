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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	FARMER_API UClass* Z_Construct_UClass_UMySaveGame();
	FARMER_API UClass* Z_Construct_UClass_UMySaveGame_NoRegister();
	FARMER_API UScriptStruct* Z_Construct_UScriptStruct_FPlant();
	FARMER_API UScriptStruct* Z_Construct_UScriptStruct_FSoilData();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoilData;
class UScriptStruct* FSoilData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoilData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoilData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoilData, (UObject*)Z_Construct_UPackage__Script_Farmer(), TEXT("SoilData"));
	}
	return Z_Registration_Info_UScriptStruct_SoilData.OuterSingleton;
}
template<> FARMER_API UScriptStruct* StaticStruct<FSoilData>()
{
	return FSoilData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoilData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoilTF_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoilTF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoilMeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SoilMeshPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantTF_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlantTF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantMeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlantMeshPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrowStage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GrowStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlant_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text3DContent_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text3DContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text3DTF_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Text3DTF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoilData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoilData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilTF_MetaData[] = {
		{ "Category", "SoilData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soil SCM info\n" },
#endif
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soil SCM info" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilTF = { "SoilTF", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, SoilTF), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilTF_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilTF_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilMeshPath_MetaData[] = {
		{ "Category", "SoilData" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilMeshPath = { "SoilMeshPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, SoilMeshPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilMeshPath_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilMeshPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantTF_MetaData[] = {
		{ "Category", "SoilData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Plant SCM info\n" },
#endif
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plant SCM info" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantTF = { "PlantTF", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, PlantTF), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantTF_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantTF_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantMeshPath_MetaData[] = {
		{ "Category", "SoilData" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantMeshPath = { "PlantMeshPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, PlantMeshPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantMeshPath_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantMeshPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_GrowStage_MetaData[] = {
		{ "Category", "SoilData" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_GrowStage = { "GrowStage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, GrowStage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_GrowStage_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_GrowStage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_CurrentPlant_MetaData[] = {
		{ "Category", "SoilData" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_CurrentPlant = { "CurrentPlant", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, CurrentPlant), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_CurrentPlant_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_CurrentPlant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DContent_MetaData[] = {
		{ "Category", "SoilData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Text3D info\n" },
#endif
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Text3D info" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DContent = { "Text3DContent", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, Text3DContent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DContent_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DContent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DTF_MetaData[] = {
		{ "Category", "SoilData" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DTF = { "Text3DTF", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, Text3DTF), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DTF_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DTF_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_RemainTime_MetaData[] = {
		{ "Category", "SoilData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timer info\n" },
#endif
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timer info" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_RemainTime = { "RemainTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, RemainTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_RemainTime_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_RemainTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_TimeDuration_MetaData[] = {
		{ "Category", "SoilData" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_TimeDuration = { "TimeDuration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoilData, TimeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_TimeDuration_MetaData), Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_TimeDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoilData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilTF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_SoilMeshPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantTF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_PlantMeshPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_GrowStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_CurrentPlant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_Text3DTF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_RemainTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoilData_Statics::NewProp_TimeDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoilData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
		nullptr,
		&NewStructOps,
		"SoilData",
		Z_Construct_UScriptStruct_FSoilData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::PropPointers),
		sizeof(FSoilData),
		alignof(FSoilData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoilData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoilData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSoilData()
	{
		if (!Z_Registration_Info_UScriptStruct_SoilData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoilData.InnerSingleton, Z_Construct_UScriptStruct_FSoilData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoilData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Plant;
class UScriptStruct* FPlant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Plant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Plant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlant, (UObject*)Z_Construct_UPackage__Script_Farmer(), TEXT("Plant"));
	}
	return Z_Registration_Info_UScriptStruct_Plant.OuterSingleton;
}
template<> FARMER_API UScriptStruct* StaticStruct<FPlant>()
{
	return FPlant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantTF_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlantTF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlant_Statics::NewProp_PlantTF_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlant_Statics::NewProp_PlantTF = { "PlantTF", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlant, PlantTF), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlant_Statics::NewProp_PlantTF_MetaData), Z_Construct_UScriptStruct_FPlant_Statics::NewProp_PlantTF_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlant_Statics::NewProp_MeshPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlant_Statics::NewProp_MeshPath = { "MeshPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlant, MeshPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlant_Statics::NewProp_MeshPath_MetaData), Z_Construct_UScriptStruct_FPlant_Statics::NewProp_MeshPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlant_Statics::NewProp_PlantTF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlant_Statics::NewProp_MeshPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
		nullptr,
		&NewStructOps,
		"Plant",
		Z_Construct_UScriptStruct_FPlant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlant_Statics::PropPointers),
		sizeof(FPlant),
		alignof(FPlant),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlant_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlant_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlant()
	{
		if (!Z_Registration_Info_UScriptStruct_Plant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Plant.InnerSingleton, Z_Construct_UScriptStruct_FPlant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Plant.InnerSingleton;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoilAndPlants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoilAndPlants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoilAndPlants;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SoilAndPlants_Inner = { "SoilAndPlants", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoilData, METADATA_PARAMS(0, nullptr) }; // 4018423390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySaveGame_Statics::NewProp_SoilAndPlants_MetaData[] = {
		{ "Category", "SaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = \"SaveGame\")\n//TArray<FPlant> Plants;\n//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = \"SaveGame\")\n//FString TESTPATH;\n" },
#endif
		{ "ModuleRelativePath", "Public/MySaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = \"SaveGame\")\nTArray<FPlant> Plants;\nUPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = \"SaveGame\")\nFString TESTPATH;" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMySaveGame_Statics::NewProp_SoilAndPlants = { "SoilAndPlants", nullptr, (EPropertyFlags)0x0010000001020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMySaveGame, SoilAndPlants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMySaveGame_Statics::NewProp_SoilAndPlants_MetaData), Z_Construct_UClass_UMySaveGame_Statics::NewProp_SoilAndPlants_MetaData) }; // 4018423390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_EarnedCrops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_PlayerRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SoilAndPlants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySaveGame_Statics::NewProp_SoilAndPlants,
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
		{ FSoilData::StaticStruct, Z_Construct_UScriptStruct_FSoilData_Statics::NewStructOps, TEXT("SoilData"), &Z_Registration_Info_UScriptStruct_SoilData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoilData), 4018423390U) },
		{ FPlant::StaticStruct, Z_Construct_UScriptStruct_FPlant_Statics::NewStructOps, TEXT("Plant"), &Z_Registration_Info_UScriptStruct_Plant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlant), 3713834400U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySaveGame, UMySaveGame::StaticClass, TEXT("UMySaveGame"), &Z_Registration_Info_UClass_UMySaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySaveGame), 1416229623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_1072557809(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MySaveGame_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
