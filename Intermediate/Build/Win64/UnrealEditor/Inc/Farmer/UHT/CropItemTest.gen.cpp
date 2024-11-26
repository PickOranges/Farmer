// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/CropItemTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCropItemTest() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_ACropBase();
	FARMER_API UClass* Z_Construct_UClass_ACropItemTest();
	FARMER_API UClass* Z_Construct_UClass_ACropItemTest_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_AFarmerCharacter_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	DEFINE_FUNCTION(ACropItemTest::execOnRemovePlant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemovePlant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACropItemTest::execChangeMesh)
	{
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMesh(Z_Param_Scale,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACropItemTest::execGrowCrop)
	{
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrowCrop(Z_Param_Scale,Z_Param_Location);
		P_NATIVE_END;
	}
	struct CropItemTest_eventOnUse_Parms
	{
		AFarmerCharacter* Character;
	};
	static FName NAME_ACropItemTest_OnUse = FName(TEXT("OnUse"));
	void ACropItemTest::OnUse(AFarmerCharacter* Character)
	{
		CropItemTest_eventOnUse_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_ACropItemTest_OnUse),&Parms);
	}
	void ACropItemTest::StaticRegisterNativesACropItemTest()
	{
		UClass* Class = ACropItemTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMesh", &ACropItemTest::execChangeMesh },
			{ "GrowCrop", &ACropItemTest::execGrowCrop },
			{ "OnRemovePlant", &ACropItemTest::execOnRemovePlant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics
	{
		struct CropItemTest_eventChangeMesh_Parms
		{
			FVector Scale;
			FVector Location;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CropItemTest_eventChangeMesh_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CropItemTest_eventChangeMesh_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACropItemTest, nullptr, "ChangeMesh", nullptr, nullptr, Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::CropItemTest_eventChangeMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::CropItemTest_eventChangeMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACropItemTest_ChangeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropItemTest_ChangeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics
	{
		struct CropItemTest_eventGrowCrop_Parms
		{
			FVector Scale;
			FVector Location;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CropItemTest_eventGrowCrop_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CropItemTest_eventGrowCrop_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Location", "0.000000,0.000000,12.000000" },
		{ "CPP_Default_Scale", "0.700000,0.700000,0.700000" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACropItemTest, nullptr, "GrowCrop", nullptr, nullptr, Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::CropItemTest_eventGrowCrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::CropItemTest_eventGrowCrop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACropItemTest_GrowCrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropItemTest_GrowCrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACropItemTest_OnRemovePlant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACropItemTest_OnRemovePlant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropItemTest_OnRemovePlant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACropItemTest, nullptr, "OnRemovePlant", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_OnRemovePlant_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropItemTest_OnRemovePlant_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACropItemTest_OnRemovePlant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropItemTest_OnRemovePlant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACropItemTest_OnUse_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACropItemTest_OnUse_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CropItemTest_eventOnUse_Parms, Character), Z_Construct_UClass_AFarmerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACropItemTest_OnUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACropItemTest_OnUse_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACropItemTest_OnUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropItemTest_OnUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACropItemTest, nullptr, "OnUse", nullptr, nullptr, Z_Construct_UFunction_ACropItemTest_OnUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_OnUse_Statics::PropPointers), sizeof(CropItemTest_eventOnUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_OnUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropItemTest_OnUse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropItemTest_OnUse_Statics::PropPointers) < 2048);
	static_assert(sizeof(CropItemTest_eventOnUse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACropItemTest_OnUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropItemTest_OnUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACropItemTest);
	UClass* Z_Construct_UClass_ACropItemTest_NoRegister()
	{
		return ACropItemTest::StaticClass();
	}
	struct Z_Construct_UClass_ACropItemTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseActionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UseActionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoilMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoilMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlantMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrowStage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GrowStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlanted_MetaData[];
#endif
		static void NewProp_bIsPlanted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlanted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACropItemTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACropBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACropItemTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACropItemTest_ChangeMesh, "ChangeMesh" }, // 613077519
		{ &Z_Construct_UFunction_ACropItemTest_GrowCrop, "GrowCrop" }, // 1937721391
		{ &Z_Construct_UFunction_ACropItemTest_OnRemovePlant, "OnRemovePlant" }, // 2588241738
		{ &Z_Construct_UFunction_ACropItemTest_OnUse, "OnUse" }, // 1586587695
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CropItemTest.h" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_World_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_World_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_UseActionText_MetaData[] = {
		{ "Category", "ACropItemTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//virtual class UWorld* GetWorld() const { return World; }\n" },
#endif
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual class UWorld* GetWorld() const { return World; }" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_UseActionText = { "UseActionText", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, UseActionText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_UseActionText_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_UseActionText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "ACropItemTest" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, PickupMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_PickupMesh_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_PickupMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "ACropItemTest" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_Thumbnail_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_Thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ACropItemTest" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_ItemName_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_ItemName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_Desc_MetaData[] = {
		{ "Category", "ACropItemTest" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, Desc), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_Desc_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_Desc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_OwningInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_OwningInventory = { "OwningInventory", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, OwningInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_OwningInventory_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_OwningInventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_SoilMesh_MetaData[] = {
		{ "Category", "CropItemTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_SoilMesh = { "SoilMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, SoilMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_SoilMesh_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_SoilMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_PlantMesh_MetaData[] = {
		{ "Category", "CropItemTest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_PlantMesh = { "PlantMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, PlantMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_PlantMesh_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_PlantMesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_MeshList_Inner = { "MeshList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_MeshList_MetaData[] = {
		{ "Category", "CropItemTest" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_MeshList = { "MeshList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, MeshList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_MeshList_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_MeshList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_GrowStage_MetaData[] = {
		{ "Category", "ACropItemTest" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_GrowStage = { "GrowStage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropItemTest, GrowStage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_GrowStage_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_GrowStage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropItemTest_Statics::NewProp_bIsPlanted_MetaData[] = {
		{ "Category", "ACropItemTest" },
		{ "ModuleRelativePath", "Public/CropItemTest.h" },
	};
#endif
	void Z_Construct_UClass_ACropItemTest_Statics::NewProp_bIsPlanted_SetBit(void* Obj)
	{
		((ACropItemTest*)Obj)->bIsPlanted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACropItemTest_Statics::NewProp_bIsPlanted = { "bIsPlanted", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACropItemTest), &Z_Construct_UClass_ACropItemTest_Statics::NewProp_bIsPlanted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::NewProp_bIsPlanted_MetaData), Z_Construct_UClass_ACropItemTest_Statics::NewProp_bIsPlanted_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACropItemTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_UseActionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_PickupMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_Desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_OwningInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_SoilMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_PlantMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_MeshList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_MeshList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_GrowStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropItemTest_Statics::NewProp_bIsPlanted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACropItemTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACropItemTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACropItemTest_Statics::ClassParams = {
		&ACropItemTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACropItemTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::Class_MetaDataParams), Z_Construct_UClass_ACropItemTest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACropItemTest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACropItemTest()
	{
		if (!Z_Registration_Info_UClass_ACropItemTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACropItemTest.OuterSingleton, Z_Construct_UClass_ACropItemTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACropItemTest.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<ACropItemTest>()
	{
		return ACropItemTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACropItemTest);
	ACropItemTest::~ACropItemTest() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACropItemTest, ACropItemTest::StaticClass, TEXT("ACropItemTest"), &Z_Registration_Info_UClass_ACropItemTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACropItemTest), 2454831518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_3952665268(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_CropItemTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
