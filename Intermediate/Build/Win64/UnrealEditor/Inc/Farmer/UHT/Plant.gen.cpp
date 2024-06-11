// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/Plant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_APlant();
	FARMER_API UClass* Z_Construct_UClass_APlant_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void APlant::StaticRegisterNativesAPlant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlant);
	UClass* Z_Construct_UClass_APlant_NoRegister()
	{
		return APlant::StaticClass();
	}
	struct Z_Construct_UClass_APlant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlantMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text3D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Text3D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlant_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlant_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Plant.h" },
		{ "ModuleRelativePath", "Public/Plant.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlant_Statics::NewProp_PlantMesh_MetaData[] = {
		{ "Category", "Plant" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Plant.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlant_Statics::NewProp_PlantMesh = { "PlantMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlant, PlantMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlant_Statics::NewProp_PlantMesh_MetaData), Z_Construct_UClass_APlant_Statics::NewProp_PlantMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlant_Statics::NewProp_Text3D_MetaData[] = {
		{ "Category", "Plant" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Plant.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlant_Statics::NewProp_Text3D = { "Text3D", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlant, Text3D), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlant_Statics::NewProp_Text3D_MetaData), Z_Construct_UClass_APlant_Statics::NewProp_Text3D_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlant_Statics::NewProp_tag_MetaData[] = {
		{ "Category", "Plant" },
		{ "ModuleRelativePath", "Public/Plant.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlant_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlant, tag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlant_Statics::NewProp_tag_MetaData), Z_Construct_UClass_APlant_Statics::NewProp_tag_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlant_Statics::NewProp_PlantMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlant_Statics::NewProp_Text3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlant_Statics::NewProp_tag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlant_Statics::ClassParams = {
		&APlant::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlant_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlant_Statics::Class_MetaDataParams), Z_Construct_UClass_APlant_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlant_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlant()
	{
		if (!Z_Registration_Info_UClass_APlant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlant.OuterSingleton, Z_Construct_UClass_APlant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlant.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<APlant>()
	{
		return APlant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlant);
	APlant::~APlant() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Plant_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Plant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlant, APlant::StaticClass, TEXT("APlant"), &Z_Registration_Info_UClass_APlant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlant), 2143609092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Plant_h_342226078(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Plant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Plant_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
