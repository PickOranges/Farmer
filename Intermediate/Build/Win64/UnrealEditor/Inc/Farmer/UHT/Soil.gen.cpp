// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Soil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoil() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_ASoil();
	FARMER_API UClass* Z_Construct_UClass_ASoil_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UInterfaceActivate_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UInterfacePlantSeed_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void ASoil::StaticRegisterNativesASoil()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoil);
	UClass* Z_Construct_UClass_ASoil_NoRegister()
	{
		return ASoil::StaticClass();
	}
	struct Z_Construct_UClass_ASoil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soilMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_soilMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_plantMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_plantMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_text3D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_text3D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoil_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Soil.h" },
		{ "ModuleRelativePath", "Soil.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoil_Statics::NewProp_soilMesh_MetaData[] = {
		{ "Category", "Soil" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Soil.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoil_Statics::NewProp_soilMesh = { "soilMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoil, soilMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoil_Statics::NewProp_soilMesh_MetaData), Z_Construct_UClass_ASoil_Statics::NewProp_soilMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoil_Statics::NewProp_plantMesh_MetaData[] = {
		{ "Category", "Soil" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Soil.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoil_Statics::NewProp_plantMesh = { "plantMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoil, plantMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoil_Statics::NewProp_plantMesh_MetaData), Z_Construct_UClass_ASoil_Statics::NewProp_plantMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoil_Statics::NewProp_text3D_MetaData[] = {
		{ "Category", "Soil" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Soil.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoil_Statics::NewProp_text3D = { "text3D", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoil, text3D), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoil_Statics::NewProp_text3D_MetaData), Z_Construct_UClass_ASoil_Statics::NewProp_text3D_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoil_Statics::NewProp_soilMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoil_Statics::NewProp_plantMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoil_Statics::NewProp_text3D,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASoil_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceActivate_NoRegister, (int32)VTABLE_OFFSET(ASoil, IInterfaceActivate), false },  // 511138240
			{ Z_Construct_UClass_UInterfacePlantSeed_NoRegister, (int32)VTABLE_OFFSET(ASoil, IInterfacePlantSeed), false },  // 73441456
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoil_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoil>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoil_Statics::ClassParams = {
		&ASoil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASoil_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASoil_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoil_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoil_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoil_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASoil()
	{
		if (!Z_Registration_Info_UClass_ASoil.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoil.OuterSingleton, Z_Construct_UClass_ASoil_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASoil.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<ASoil>()
	{
		return ASoil::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoil);
	ASoil::~ASoil() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASoil, ASoil::StaticClass, TEXT("ASoil"), &Z_Registration_Info_UClass_ASoil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoil), 2638592165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_1718260237(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
