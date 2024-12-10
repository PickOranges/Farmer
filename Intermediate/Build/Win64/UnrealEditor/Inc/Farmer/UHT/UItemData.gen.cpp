// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/UItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUItemData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UUItemData();
	FARMER_API UClass* Z_Construct_UClass_UUItemData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void UUItemData::StaticRegisterNativesUUItemData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUItemData);
	UClass* Z_Construct_UClass_UUItemData_NoRegister()
	{
		return UUItemData::StaticClass();
	}
	struct Z_Construct_UClass_UUItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseActionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UseActionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PickupMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[];
#endif
		static void NewProp_bIsStackable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUItemData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UItemData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UItemData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUItemData_Statics::NewProp_UseActionText_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/UItemData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUItemData_Statics::NewProp_UseActionText = { "UseActionText", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUItemData, UseActionText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::NewProp_UseActionText_MetaData), Z_Construct_UClass_UUItemData_Statics::NewProp_UseActionText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUItemData_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class UStaticMesh* PickupMesh;  // TODO: replace with TSoftObjectPtr\n" },
#endif
		{ "ModuleRelativePath", "Public/UItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UStaticMesh* PickupMesh;   TODO: replace with TSoftObjectPtr" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUItemData_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUItemData, PickupMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::NewProp_PickupMesh_MetaData), Z_Construct_UClass_UUItemData_Statics::NewProp_PickupMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUItemData_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class UTexture2D* Thumbnail;   // TODO: replace with TSoftObjectPtr\n" },
#endif
		{ "ModuleRelativePath", "Public/UItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UTexture2D* Thumbnail;    TODO: replace with TSoftObjectPtr" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUItemData_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUItemData, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::NewProp_Thumbnail_MetaData), Z_Construct_UClass_UUItemData_Statics::NewProp_Thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUItemData_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/UItemData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::NewProp_ItemName_MetaData), Z_Construct_UClass_UUItemData_Statics::NewProp_ItemName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUItemData_Statics::NewProp_Desc_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/UItemData.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUItemData_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUItemData, Desc), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::NewProp_Desc_MetaData), Z_Construct_UClass_UUItemData_Statics::NewProp_Desc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUItemData_Statics::NewProp_bIsStackable_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/UItemData.h" },
	};
#endif
	void Z_Construct_UClass_UUItemData_Statics::NewProp_bIsStackable_SetBit(void* Obj)
	{
		((UUItemData*)Obj)->bIsStackable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUItemData_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUItemData), &Z_Construct_UClass_UUItemData_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::NewProp_bIsStackable_MetaData), Z_Construct_UClass_UUItemData_Statics::NewProp_bIsStackable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUItemData_Statics::NewProp_UseActionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUItemData_Statics::NewProp_PickupMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUItemData_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUItemData_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUItemData_Statics::NewProp_Desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUItemData_Statics::NewProp_bIsStackable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUItemData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUItemData_Statics::ClassParams = {
		&UUItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUItemData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUItemData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUItemData()
	{
		if (!Z_Registration_Info_UClass_UUItemData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUItemData.OuterSingleton, Z_Construct_UClass_UUItemData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUItemData.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UUItemData>()
	{
		return UUItemData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUItemData);
	UUItemData::~UUItemData() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_UItemData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_UItemData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUItemData, UUItemData::StaticClass, TEXT("UUItemData"), &Z_Registration_Info_UClass_UUItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUItemData), 377060177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_UItemData_h_1876077284(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_UItemData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_UItemData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
