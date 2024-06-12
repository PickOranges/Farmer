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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_ASoil();
	FARMER_API UClass* Z_Construct_UClass_ASoil_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UInterfaceActivate_NoRegister();
	FARMER_API UClass* Z_Construct_UClass_UInterfacePlantSeed_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	DEFINE_FUNCTION(ASoil::execChangeMesh)
	{
		P_GET_TARRAY_REF(UStaticMesh*,Z_Param_Out_Meshes);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMesh(Z_Param_Out_Meshes,Z_Param_Scale,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASoil::execGrowCrop)
	{
		P_GET_TARRAY_REF(UStaticMesh*,Z_Param_Out_Meshes);
		P_GET_STRUCT(FVector,Z_Param_Scale);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrowCrop(Z_Param_Out_Meshes,Z_Param_Scale,Z_Param_Location);
		P_NATIVE_END;
	}
	void ASoil::StaticRegisterNativesASoil()
	{
		UClass* Class = ASoil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMesh", &ASoil::execChangeMesh },
			{ "GrowCrop", &ASoil::execGrowCrop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASoil_ChangeMesh_Statics
	{
		struct Soil_eventChangeMesh_Parms
		{
			TArray<UStaticMesh*> Meshes;
			FVector Scale;
			FVector Location;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASoil_ChangeMesh_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASoil_ChangeMesh_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Soil_eventChangeMesh_Parms, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASoil_ChangeMesh_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Soil_eventChangeMesh_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASoil_ChangeMesh_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Soil_eventChangeMesh_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoil_ChangeMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoil_ChangeMesh_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoil_ChangeMesh_Statics::NewProp_Meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoil_ChangeMesh_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoil_ChangeMesh_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASoil_ChangeMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Soil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoil_ChangeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoil, nullptr, "ChangeMesh", nullptr, nullptr, Z_Construct_UFunction_ASoil_ChangeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoil_ChangeMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASoil_ChangeMesh_Statics::Soil_eventChangeMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoil_ChangeMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASoil_ChangeMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoil_ChangeMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASoil_ChangeMesh_Statics::Soil_eventChangeMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASoil_ChangeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASoil_ChangeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASoil_GrowCrop_Statics
	{
		struct Soil_eventGrowCrop_Parms
		{
			TArray<UStaticMesh*> Meshes;
			FVector Scale;
			FVector Location;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASoil_GrowCrop_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASoil_GrowCrop_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Soil_eventGrowCrop_Parms, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASoil_GrowCrop_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Soil_eventGrowCrop_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASoil_GrowCrop_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Soil_eventGrowCrop_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoil_GrowCrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoil_GrowCrop_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoil_GrowCrop_Statics::NewProp_Meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoil_GrowCrop_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoil_GrowCrop_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASoil_GrowCrop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Soil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoil_GrowCrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoil, nullptr, "GrowCrop", nullptr, nullptr, Z_Construct_UFunction_ASoil_GrowCrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoil_GrowCrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASoil_GrowCrop_Statics::Soil_eventGrowCrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoil_GrowCrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASoil_GrowCrop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoil_GrowCrop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASoil_GrowCrop_Statics::Soil_eventGrowCrop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASoil_GrowCrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASoil_GrowCrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoil);
	UClass* Z_Construct_UClass_ASoil_NoRegister()
	{
		return ASoil::StaticClass();
	}
	struct Z_Construct_UClass_ASoil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ASoil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASoil_ChangeMesh, "ChangeMesh" }, // 1891223476
		{ &Z_Construct_UFunction_ASoil_GrowCrop, "GrowCrop" }, // 591632250
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoil_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		Z_Construct_UClass_ASoil_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ASoil, ASoil::StaticClass, TEXT("ASoil"), &Z_Registration_Info_UClass_ASoil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoil), 4083371241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_4097609140(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
