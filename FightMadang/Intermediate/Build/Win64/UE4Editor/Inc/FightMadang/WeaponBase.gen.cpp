// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WeaponBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}
// Cross Module References
	FIGHTMADANG_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	FIGHTMADANG_API UClass* Z_Construct_UClass_AWeaponBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FightMadang();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AWeaponBase::StaticRegisterNativesAWeaponBase()
	{
	}
	UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
	{
		return AWeaponBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeaponBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FightMadang,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "WeaponBase.h" },
				{ "ModuleRelativePath", "WeaponBase.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "WeaponBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnim = { UE4CodeGen_Private::EPropertyClass::Object, "AttackAnim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AWeaponBase, AttackAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_AttackAnim_MetaData, ARRAY_COUNT(NewProp_AttackAnim_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponCollision_MetaData[] = {
				{ "Category", "Collision" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WeaponBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponCollision = { UE4CodeGen_Private::EPropertyClass::Object, "WeaponCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AWeaponBase, WeaponCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_WeaponCollision_MetaData, ARRAY_COUNT(NewProp_WeaponCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
				{ "Category", "Weapon" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WeaponBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh = { UE4CodeGen_Private::EPropertyClass::Object, "WeaponMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AWeaponBase, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_WeaponMesh_MetaData, ARRAY_COUNT(NewProp_WeaponMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttackAnim,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWeaponBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWeaponBase::StaticClass,
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
	IMPLEMENT_CLASS(AWeaponBase, 2472998530);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponBase(Z_Construct_UClass_AWeaponBase, &AWeaponBase::StaticClass, TEXT("/Script/FightMadang"), TEXT("AWeaponBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
