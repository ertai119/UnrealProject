// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Npc.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNpc() {}
// Cross Module References
	FIGHTMADANG_API UClass* Z_Construct_UClass_ANpc_NoRegister();
	FIGHTMADANG_API UClass* Z_Construct_UClass_ANpc();
	FIGHTMADANG_API UClass* Z_Construct_UClass_APublicCharacter();
	UPackage* Z_Construct_UPackage__Script_FightMadang();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ANpc::StaticRegisterNativesANpc()
	{
	}
	UClass* Z_Construct_UClass_ANpc_NoRegister()
	{
		return ANpc::StaticClass();
	}
	UClass* Z_Construct_UClass_ANpc()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APublicCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_FightMadang,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Npc.h" },
				{ "ModuleRelativePath", "Npc.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeAnim_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Npc.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeAnim = { UE4CodeGen_Private::EPropertyClass::Object, "MeleeAnim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ANpc, MeleeAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_MeleeAnim_MetaData, ARRAY_COUNT(NewProp_MeleeAnim_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
				{ "Category", "Collision" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Npc.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionSphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ANpc, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionSphere_MetaData, ARRAY_COUNT(NewProp_CollisionSphere_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeleeAnim,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionSphere,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANpc>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANpc::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANpc, 3151376959);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANpc(Z_Construct_UClass_ANpc, &ANpc::StaticClass, TEXT("/Script/FightMadang"), TEXT("ANpc"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANpc);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
