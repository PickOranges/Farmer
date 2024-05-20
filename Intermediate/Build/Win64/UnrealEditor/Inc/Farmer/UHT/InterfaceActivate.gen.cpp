// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/InterfaceActivate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceActivate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	FARMER_API UClass* Z_Construct_UClass_UInterfaceActivate();
	FARMER_API UClass* Z_Construct_UClass_UInterfaceActivate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void UInterfaceActivate::StaticRegisterNativesUInterfaceActivate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterfaceActivate);
	UClass* Z_Construct_UClass_UInterfaceActivate_NoRegister()
	{
		return UInterfaceActivate::StaticClass();
	}
	struct Z_Construct_UClass_UInterfaceActivate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfaceActivate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceActivate_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfaceActivate_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfaceActivate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfaceActivate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceActivate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceActivate_Statics::ClassParams = {
		&UInterfaceActivate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceActivate_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterfaceActivate_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterfaceActivate()
	{
		if (!Z_Registration_Info_UClass_UInterfaceActivate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterfaceActivate.OuterSingleton, Z_Construct_UClass_UInterfaceActivate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterfaceActivate.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UInterfaceActivate>()
	{
		return UInterfaceActivate::StaticClass();
	}
	UInterfaceActivate::UInterfaceActivate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceActivate);
	UInterfaceActivate::~UInterfaceActivate() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_InterfaceActivate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_InterfaceActivate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterfaceActivate, UInterfaceActivate::StaticClass, TEXT("UInterfaceActivate"), &Z_Registration_Info_UClass_UInterfaceActivate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterfaceActivate), 511138240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_InterfaceActivate_h_400576486(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_InterfaceActivate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_InterfaceActivate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
