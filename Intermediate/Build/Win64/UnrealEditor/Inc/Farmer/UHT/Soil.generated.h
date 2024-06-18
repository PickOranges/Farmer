// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Soil.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef FARMER_Soil_generated_h
#error "Soil.generated.h already included, missing '#pragma once' in Soil.h"
#endif
#define FARMER_Soil_generated_h

#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_SPARSE_DATA
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRemovePlant); \
	DECLARE_FUNCTION(execChangeMesh); \
	DECLARE_FUNCTION(execGrowCrop);


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoil(); \
	friend struct Z_Construct_UClass_ASoil_Statics; \
public: \
	DECLARE_CLASS(ASoil, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farmer"), NO_API) \
	DECLARE_SERIALIZER(ASoil) \
	virtual UObject* _getUObject() const override { return const_cast<ASoil*>(this); }


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASoil(ASoil&&); \
	NO_API ASoil(const ASoil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASoil) \
	NO_API virtual ~ASoil();


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_22_PROLOG
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_SPARSE_DATA \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMER_API UClass* StaticClass<class ASoil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Soil_h


#define FOREACH_ENUM_EPLANTS(op) \
	op(EPlants::Potato) \
	op(EPlants::Eggplant) \
	op(EPlants::Carrot) 

enum class EPlants : uint8;
template<> struct TIsUEnumClass<EPlants> { enum { Value = true }; };
template<> FARMER_API UEnum* StaticEnum<EPlants>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
