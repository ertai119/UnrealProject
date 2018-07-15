// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PublicCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicCharacter() {}
// Cross Module References
	FIGHTMADANG_API UClass* Z_Construct_UClass_APublicCharacter_NoRegister();
	FIGHTMADANG_API UClass* Z_Construct_UClass_APublicCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FightMadang();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FIGHTMADANG_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FIGHTMADANG_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void APublicCharacter::StaticRegisterNativesAPublicCharacter()
	{
	}
	UClass* Z_Construct_UClass_APublicCharacter_NoRegister()
	{
		return APublicCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_APublicCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_FightMadang,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "PublicCharacter.h" },
				{ "ModuleRelativePath", "PublicCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAnim_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "PublicCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAnim = { UE4CodeGen_Private::EPropertyClass::Object, "DeathAnim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(APublicCharacter, DeathAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_DeathAnim_MetaData, ARRAY_COUNT(NewProp_DeathAnim_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeHitAnim_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "PublicCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeHitAnim = { UE4CodeGen_Private::EPropertyClass::Object, "BeHitAnim", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(APublicCharacter, BeHitAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_BeHitAnim_MetaData, ARRAY_COUNT(NewProp_BeHitAnim_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInventoryClasses_MetaData[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "PublicCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultInventoryClasses = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultInventoryClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(APublicCharacter, DefaultInventoryClasses), METADATA_PARAMS(NewProp_DefaultInventoryClasses_MetaData, ARRAY_COUNT(NewProp_DefaultInventoryClasses_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultInventoryClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultInventoryClasses", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachPoint_MetaData[] = {
				{ "Category", "Inventory" },
				{ "ModuleRelativePath", "PublicCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponAttachPoint = { UE4CodeGen_Private::EPropertyClass::Name, "WeaponAttachPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(APublicCharacter, WeaponAttachPoint), METADATA_PARAMS(NewProp_WeaponAttachPoint_MetaData, ARRAY_COUNT(NewProp_WeaponAttachPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "PublicCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(APublicCharacter, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "PublicCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APublicCharacter, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeathAnim,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BeHitAnim,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultInventoryClasses,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultInventoryClasses_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WeaponAttachPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APublicCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APublicCharacter::StaticClass,
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
	IMPLEMENT_CLASS(APublicCharacter, 1152185510);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APublicCharacter(Z_Construct_UClass_APublicCharacter, &APublicCharacter::StaticClass, TEXT("/Script/FightMadang"), TEXT("APublicCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APublicCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
