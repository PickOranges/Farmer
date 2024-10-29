// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResourceTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMER_ResourceTree_generated_h
#error "ResourceTree.generated.h already included, missing '#pragma once' in ResourceTree.h"
#endif
#define FARMER_ResourceTree_generated_h

#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_SPARSE_DATA
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execDisableToolDamge); \
	DECLARE_FUNCTION(execEnableToolDamge); \
	DECLARE_FUNCTION(execOnTreeFallComplete);


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAResourceTree(); \
	friend struct Z_Construct_UClass_AResourceTree_Statics; \
public: \
	DECLARE_CLASS(AResourceTree, AResourceNew, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farmer"), NO_API) \
	DECLARE_SERIALIZER(AResourceTree)


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AResourceTree(AResourceTree&&); \
	NO_API AResourceTree(const AResourceTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AResourceTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AResourceTree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AResourceTree) \
	NO_API virtual ~AResourceTree();


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_13_PROLOG
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_SPARSE_DATA \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMER_API UClass* StaticClass<class AResourceTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_ResourceTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
