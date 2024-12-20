// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASoil;
class UFakeItem;
class UPrimitiveComponent;
struct FHitResult;
struct FInputActionValue;
#ifdef FARMER_FarmerCharacter_generated_h
#error "FarmerCharacter.generated.h already included, missing '#pragma once' in FarmerCharacter.h"
#endif
#define FARMER_FarmerCharacter_generated_h

#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_SPARSE_DATA
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateHealthyValue_Implementation(); \
 \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execTriggerRemovePlant); \
	DECLARE_FUNCTION(execPlayChoppingAnim); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execAutoSave); \
	DECLARE_FUNCTION(execLoadGameIfExist); \
	DECLARE_FUNCTION(execCreateSaveGameInstance); \
	DECLARE_FUNCTION(execUpdateHealthyValue); \
	DECLARE_FUNCTION(execOnBeginOverlapCB); \
	DECLARE_FUNCTION(execPressQ); \
	DECLARE_FUNCTION(execPressE);


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_CALLBACK_WRAPPERS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmerCharacter(); \
	friend struct Z_Construct_UClass_AFarmerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFarmerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farmer"), NO_API) \
	DECLARE_SERIALIZER(AFarmerCharacter)


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFarmerCharacter(AFarmerCharacter&&); \
	NO_API AFarmerCharacter(const AFarmerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFarmerCharacter) \
	NO_API virtual ~AFarmerCharacter();


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_32_PROLOG
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_SPARSE_DATA \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_CALLBACK_WRAPPERS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMER_API UClass* StaticClass<class AFarmerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_FarmerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
