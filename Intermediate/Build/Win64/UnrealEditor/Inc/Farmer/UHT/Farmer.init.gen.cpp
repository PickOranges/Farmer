// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmer_init() {}
	FARMER_API UFunction* Z_Construct_UDelegateFunction_Farmer_OnInventoryUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Farmer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Farmer()
	{
		if (!Z_Registration_Info_UPackage__Script_Farmer.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Farmer_OnInventoryUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Farmer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8BA6297A,
				0x20B0F2B1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Farmer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Farmer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Farmer(Z_Construct_UPackage__Script_Farmer, TEXT("/Script/Farmer"), Z_Registration_Info_UPackage__Script_Farmer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8BA6297A, 0x20B0F2B1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
