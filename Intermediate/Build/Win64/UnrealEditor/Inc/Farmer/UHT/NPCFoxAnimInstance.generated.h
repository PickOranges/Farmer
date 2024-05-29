// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPCFoxAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStatesRandom : uint8;
#ifdef FARMER_NPCFoxAnimInstance_generated_h
#error "NPCFoxAnimInstance.generated.h already included, missing '#pragma once' in NPCFoxAnimInstance.h"
#endif
#define FARMER_NPCFoxAnimInstance_generated_h

#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_SPARSE_DATA
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentState);


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_ACCESSORS
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCFoxAnimInstance(); \
	friend struct Z_Construct_UClass_UNPCFoxAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UNPCFoxAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Farmer"), NO_API) \
	DECLARE_SERIALIZER(UNPCFoxAnimInstance)


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNPCFoxAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNPCFoxAnimInstance(UNPCFoxAnimInstance&&); \
	NO_API UNPCFoxAnimInstance(const UNPCFoxAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCFoxAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCFoxAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNPCFoxAnimInstance) \
	NO_API virtual ~UNPCFoxAnimInstance();


#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_24_PROLOG
#define FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_SPARSE_DATA \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_ACCESSORS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARMER_API UClass* StaticClass<class UNPCFoxAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cheng_source_repos_UE5_Farmer_Source_Farmer_Public_NPCFoxAnimInstance_h


#define FOREACH_ENUM_ESTATESRANDOM(op) \
	op(EStatesRandom::Sleep1) \
	op(EStatesRandom::Sleep2) \
	op(EStatesRandom::Stand1) \
	op(EStatesRandom::Stand2) \
	op(EStatesRandom::Idle1) \
	op(EStatesRandom::Idle2) 

enum class EStatesRandom : uint8;
template<> struct TIsUEnumClass<EStatesRandom> { enum { Value = true }; };
template<> FARMER_API UEnum* StaticEnum<EStatesRandom>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
