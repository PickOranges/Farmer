// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IItemCppInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNameTextPair;
#ifdef FARMER_IItemCppInterface_generated_h
#error "IItemCppInterface.generated.h already included, missing '#pragma once' in IItemCppInterface.h"
#endif
#define FARMER_IItemCppInterface_generated_h

#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNameTextPair_Statics; \
	FARMER_API static class UScriptStruct* StaticStruct();


template<> FARMER_API UScriptStruct* StaticStruct<struct FNameTextPair>();

#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_SPARSE_DATA
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interaction_Implementation() {}; \
	virtual FNameTextPair ViewRaycast_Implementation() { return FNameTextPair(); }; \
 \
	DECLARE_FUNCTION(execInteraction); \
	DECLARE_FUNCTION(execViewRaycast);


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_CALLBACK_WRAPPERS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemCppInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemCppInterface(UItemCppInterface&&); \
	NO_API UItemCppInterface(const UItemCppInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemCppInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemCppInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemCppInterface) \
	NO_API virtual ~UItemCppInterface();


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUItemCppInterface(); \
	friend struct Z_Construct_UClass_UItemCppInterface_Statics; \
public: \
	DECLARE_CLASS(UItemCppInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Farmer"), NO_API) \
	DECLARE_SERIALIZER(UItemCppInterface)


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IItemCppInterface() {} \
public: \
	typedef UItemCppInterface UClassType; \
	typedef IItemCppInterface ThisClass; \
	static void Execute_Interaction(UObject* O); \
	static FNameTextPair Execute_ViewRaycast(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_28_PROLOG
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_SPARSE_DATA \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_CALLBACK_WRAPPERS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMER_API UClass* StaticClass<class UItemCppInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_IItemCppInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
