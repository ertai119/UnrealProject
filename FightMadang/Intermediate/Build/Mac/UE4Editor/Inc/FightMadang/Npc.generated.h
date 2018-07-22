// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTMADANG_Npc_generated_h
#error "Npc.generated.h already included, missing '#pragma once' in Npc.h"
#endif
#define FIGHTMADANG_Npc_generated_h

#define FightMadang_Source_FightMadang_Npc_h_18_RPC_WRAPPERS
#define FightMadang_Source_FightMadang_Npc_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FightMadang_Source_FightMadang_Npc_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANpc(); \
	friend FIGHTMADANG_API class UClass* Z_Construct_UClass_ANpc(); \
public: \
	DECLARE_CLASS(ANpc, APublicCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FightMadang"), NO_API) \
	DECLARE_SERIALIZER(ANpc) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FightMadang_Source_FightMadang_Npc_h_18_INCLASS \
private: \
	static void StaticRegisterNativesANpc(); \
	friend FIGHTMADANG_API class UClass* Z_Construct_UClass_ANpc(); \
public: \
	DECLARE_CLASS(ANpc, APublicCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FightMadang"), NO_API) \
	DECLARE_SERIALIZER(ANpc) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FightMadang_Source_FightMadang_Npc_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANpc(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANpc) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANpc); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANpc(ANpc&&); \
	NO_API ANpc(const ANpc&); \
public:


#define FightMadang_Source_FightMadang_Npc_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANpc(ANpc&&); \
	NO_API ANpc(const ANpc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANpc); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANpc)


#define FightMadang_Source_FightMadang_Npc_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeleeAnim() { return STRUCT_OFFSET(ANpc, MeleeAnim); }


#define FightMadang_Source_FightMadang_Npc_h_15_PROLOG
#define FightMadang_Source_FightMadang_Npc_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightMadang_Source_FightMadang_Npc_h_18_PRIVATE_PROPERTY_OFFSET \
	FightMadang_Source_FightMadang_Npc_h_18_RPC_WRAPPERS \
	FightMadang_Source_FightMadang_Npc_h_18_INCLASS \
	FightMadang_Source_FightMadang_Npc_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FightMadang_Source_FightMadang_Npc_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FightMadang_Source_FightMadang_Npc_h_18_PRIVATE_PROPERTY_OFFSET \
	FightMadang_Source_FightMadang_Npc_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FightMadang_Source_FightMadang_Npc_h_18_INCLASS_NO_PURE_DECLS \
	FightMadang_Source_FightMadang_Npc_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FightMadang_Source_FightMadang_Npc_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
