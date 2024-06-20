// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Farmer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Farmer()
	{
		if (!Z_Registration_Info_UPackage__Script_Farmer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Farmer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x318E560A,
				0x2D11FA54,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Farmer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Farmer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Farmer(Z_Construct_UPackage__Script_Farmer, TEXT("/Script/Farmer"), Z_Registration_Info_UPackage__Script_Farmer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x318E560A, 0x2D11FA54));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
