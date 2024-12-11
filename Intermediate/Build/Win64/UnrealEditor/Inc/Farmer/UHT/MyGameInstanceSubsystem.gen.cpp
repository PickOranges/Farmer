// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farmer/Public/MyGameInstanceSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstanceSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	FARMER_API UClass* Z_Construct_UClass_UMyGameInstanceSubsystem();
	FARMER_API UClass* Z_Construct_UClass_UMyGameInstanceSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Farmer();
// End Cross Module References
	void UMyGameInstanceSubsystem::StaticRegisterNativesUMyGameInstanceSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstanceSubsystem);
	UClass* Z_Construct_UClass_UMyGameInstanceSubsystem_NoRegister()
	{
		return UMyGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Farmer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/MyGameInstanceSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstanceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::ClassParams = {
		&UMyGameInstanceSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyGameInstanceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UMyGameInstanceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyGameInstanceSubsystem.OuterSingleton;
	}
	template<> FARMER_API UClass* StaticClass<UMyGameInstanceSubsystem>()
	{
		return UMyGameInstanceSubsystem::StaticClass();
	}
	UMyGameInstanceSubsystem::UMyGameInstanceSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstanceSubsystem);
	UMyGameInstanceSubsystem::~UMyGameInstanceSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MyGameInstanceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MyGameInstanceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstanceSubsystem, UMyGameInstanceSubsystem::StaticClass, TEXT("UMyGameInstanceSubsystem"), &Z_Registration_Info_UClass_UMyGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstanceSubsystem), 523919905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MyGameInstanceSubsystem_h_2628235819(TEXT("/Script/Farmer"),
		Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MyGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_MyGameInstanceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
