// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FightMadangAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFightMadangAIController() {}
// Cross Module References
	FIGHTMADANG_API UClass* Z_Construct_UClass_AFightMadangAIController_NoRegister();
	FIGHTMADANG_API UClass* Z_Construct_UClass_AFightMadangAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_FightMadang();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	void AFightMadangAIController::StaticRegisterNativesAFightMadangAIController()
	{
	}
	UClass* Z_Construct_UClass_AFightMadangAIController_NoRegister()
	{
		return AFightMadangAIController::StaticClass();
	}
	UClass* Z_Construct_UClass_AFightMadangAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAIController,
				(UObject* (*)())Z_Construct_UPackage__Script_FightMadang,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FightMadangAIController.h" },
				{ "ModuleRelativePath", "FightMadangAIController.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FightMadangAIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviorComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000082008, 1, nullptr, STRUCT_OFFSET(AFightMadangAIController, BehaviorComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(NewProp_BehaviorComp_MetaData, ARRAY_COUNT(NewProp_BehaviorComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FightMadangAIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp = { UE4CodeGen_Private::EPropertyClass::Object, "BlackboardComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000082008, 1, nullptr, STRUCT_OFFSET(AFightMadangAIController, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(NewProp_BlackboardComp_MetaData, ARRAY_COUNT(NewProp_BlackboardComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviorComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlackboardComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFightMadangAIController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFightMadangAIController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFightMadangAIController, 2808455730);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFightMadangAIController(Z_Construct_UClass_AFightMadangAIController, &AFightMadangAIController::StaticClass, TEXT("/Script/FightMadang"), TEXT("AFightMadangAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFightMadangAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
