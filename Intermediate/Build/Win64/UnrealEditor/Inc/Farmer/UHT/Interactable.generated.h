// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FARMER_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define FARMER_Interactable_generated_h

#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_SPARSE_DATA
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnActorOverlapEnd_Implementation(AActor* OverlappedActor, AActor* OtherActor); \
	virtual void OnActorOverlapBegin_Implementation(AActor* OverlappedActor, AActor* OtherActor); \
	virtual void Interact_Implementation(); \
 \
	DECLARE_FUNCTION(execOnActorOverlapEnd); \
	DECLARE_FUNCTION(execOnActorOverlapBegin); \
	DECLARE_FUNCTION(execOnPlayerOverlapEnd); \
	DECLARE_FUNCTION(execOnPlayerOverlapBegin); \
	DECLARE_FUNCTION(execInteract);


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_CALLBACK_WRAPPERS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farmer"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_11_PROLOG
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_SPARSE_DATA \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_CALLBACK_WRAPPERS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMER_API UClass* StaticClass<class AInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
