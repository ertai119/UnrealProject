// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameInstance/FMDGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMDGameInstance() {}
// Cross Module References
	FIGHTMADANG_API UClass* Z_Construct_UClass_UFMDGameInstance_NoRegister();
	FIGHTMADANG_API UClass* Z_Construct_UClass_UFMDGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformGameInstance();
	UPackage* Z_Construct_UPackage__Script_FightMadang();
// End Cross Module References
	void UFMDGameInstance::StaticRegisterNativesUFMDGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UFMDGameInstance_NoRegister()
	{
		return UFMDGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMDGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPlatformGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_FightMadang,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameInstance/FMDGameInstance.h" },
				{ "ModuleRelativePath", "GameInstance/FMDGameInstance.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFMDGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFMDGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMDGameInstance, 2510360049);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMDGameInstance(Z_Construct_UClass_UFMDGameInstance, &UFMDGameInstance::StaticClass, TEXT("/Script/FightMadang"), TEXT("UFMDGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMDGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
