// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTMADANG_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FIGHTMADANG_WeaponBase_generated_h

#define FightMadang_Source_FightMadang_WeaponBase_h_15_RPC_WRAPPERS
#define FightMadang_Source_FightMadang_WeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FightMadang_Source_FightMadang_WeaponBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend FIGHTMADANG_API class UClass* Z_Construct_UClass_AWeaponBase(); \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FightMadang"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FightMadang_Source_FightMadang_WeaponBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend FIGHTMADANG_API class UClass* Z_Construct_UClass_AWeaponBase(); \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FightMadang"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FightMadang_Source_FightMadang_WeaponBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define FightMadang_Source_FightMadang_WeaponBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase)


#define FightMadang_Source_FightMadang_WeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeaponBase, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__WeaponCollision() { return STRUCT_OFFSET(AWeaponBase, WeaponCollision); } \
	FORCEINLINE static uint32 __PPO__AttackAnim() { return STRUCT_OFFSET(AWeaponBase, AttackAnim); }


#define FightMadang_Source_FightMadang_WeaponBase_h_12_PROLOG
#define FightMadang_Source_FightMadang_WeaponBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightMadang_Source_FightMadang_WeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FightMadang_Source_FightMadang_WeaponBase_h_15_RPC_WRAPPERS \
	FightMadang_Source_FightMadang_WeaponBase_h_15_INCLASS \
	FightMadang_Source_FightMadang_WeaponBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightMadang_Source_FightMadang_WeaponBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightMadang_Source_FightMadang_WeaponBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FightMadang_Source_FightMadang_WeaponBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FightMadang_Source_FightMadang_WeaponBase_h_15_INCLASS_NO_PURE_DECLS \
	FightMadang_Source_FightMadang_WeaponBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightMadang_Source_FightMadang_WeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
