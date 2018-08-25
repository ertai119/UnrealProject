// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HUD/FMDMainHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMDMainHUD() {}
// Cross Module References
	FIGHTMADANG_API UClass* Z_Construct_UClass_AFMDMainHUD_NoRegister();
	FIGHTMADANG_API UClass* Z_Construct_UClass_AFMDMainHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FightMadang();
// End Cross Module References
	void AFMDMainHUD::StaticRegisterNativesAFMDMainHUD()
	{
	}
	UClass* Z_Construct_UClass_AFMDMainHUD_NoRegister()
	{
		return AFMDMainHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AFMDMainHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_FightMadang,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "HUD/FMDMainHUD.h" },
				{ "ModuleRelativePath", "HUD/FMDMainHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFMDMainHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFMDMainHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFMDMainHUD, 649043147);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFMDMainHUD(Z_Construct_UClass_AFMDMainHUD, &AFMDMainHUD::StaticClass, TEXT("/Script/FightMadang"), TEXT("AFMDMainHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFMDMainHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
