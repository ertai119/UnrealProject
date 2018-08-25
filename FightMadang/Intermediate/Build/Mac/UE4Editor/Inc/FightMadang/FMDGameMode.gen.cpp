// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameMode/FMDGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMDGameMode() {}
// Cross Module References
	FIGHTMADANG_API UClass* Z_Construct_UClass_AFMDGameMode_NoRegister();
	FIGHTMADANG_API UClass* Z_Construct_UClass_AFMDGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_FightMadang();
// End Cross Module References
	void AFMDGameMode::StaticRegisterNativesAFMDGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFMDGameMode_NoRegister()
	{
		return AFMDGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFMDGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameMode,
				(UObject* (*)())Z_Construct_UPackage__Script_FightMadang,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GameMode/FMDGameMode.h" },
				{ "ModuleRelativePath", "GameMode/FMDGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFMDGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFMDGameMode::StaticClass,
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
	IMPLEMENT_CLASS(AFMDGameMode, 97765396);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFMDGameMode(Z_Construct_UClass_AFMDGameMode, &AFMDGameMode::StaticClass, TEXT("/Script/FightMadang"), TEXT("AFMDGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFMDGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
