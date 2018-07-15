// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTMADANG_PublicCharacter_generated_h
#error "PublicCharacter.generated.h already included, missing '#pragma once' in PublicCharacter.h"
#endif
#define FIGHTMADANG_PublicCharacter_generated_h

#define FightMadang_Source_FightMadang_PublicCharacter_h_15_RPC_WRAPPERS
#define FightMadang_Source_FightMadang_PublicCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FightMadang_Source_FightMadang_PublicCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPublicCharacter(); \
	friend FIGHTMADANG_API class UClass* Z_Construct_UClass_APublicCharacter(); \
public: \
	DECLARE_CLASS(APublicCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FightMadang"), NO_API) \
	DECLARE_SERIALIZER(APublicCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FightMadang_Source_FightMadang_PublicCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPublicCharacter(); \
	friend FIGHTMADANG_API class UClass* Z_Construct_UClass_APublicCharacter(); \
public: \
	DECLARE_CLASS(APublicCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FightMadang"), NO_API) \
	DECLARE_SERIALIZER(APublicCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FightMadang_Source_FightMadang_PublicCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APublicCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APublicCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APublicCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APublicCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APublicCharacter(APublicCharacter&&); \
	NO_API APublicCharacter(const APublicCharacter&); \
public:


#define FightMadang_Source_FightMadang_PublicCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APublicCharacter(APublicCharacter&&); \
	NO_API APublicCharacter(const APublicCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APublicCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APublicCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APublicCharacter)


#define FightMadang_Source_FightMadang_PublicCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponAttachPoint() { return STRUCT_OFFSET(APublicCharacter, WeaponAttachPoint); } \
	FORCEINLINE static uint32 __PPO__DefaultInventoryClasses() { return STRUCT_OFFSET(APublicCharacter, DefaultInventoryClasses); } \
	FORCEINLINE static uint32 __PPO__BeHitAnim() { return STRUCT_OFFSET(APublicCharacter, BeHitAnim); } \
	FORCEINLINE static uint32 __PPO__DeathAnim() { return STRUCT_OFFSET(APublicCharacter, DeathAnim); }


#define FightMadang_Source_FightMadang_PublicCharacter_h_12_PROLOG
#define FightMadang_Source_FightMadang_PublicCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightMadang_Source_FightMadang_PublicCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FightMadang_Source_FightMadang_PublicCharacter_h_15_RPC_WRAPPERS \
	FightMadang_Source_FightMadang_PublicCharacter_h_15_INCLASS \
	FightMadang_Source_FightMadang_PublicCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightMadang_Source_FightMadang_PublicCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightMadang_Source_FightMadang_PublicCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FightMadang_Source_FightMadang_PublicCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FightMadang_Source_FightMadang_PublicCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FightMadang_Source_FightMadang_PublicCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightMadang_Source_FightMadang_PublicCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
