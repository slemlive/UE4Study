// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/GriffonAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGriffonAIController() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AGriffonAIController_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AGriffonAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AGriffonAIController::StaticRegisterNativesAGriffonAIController()
	{
	}
	UClass* Z_Construct_UClass_AGriffonAIController_NoRegister()
	{
		return AGriffonAIController::StaticClass();
	}
	struct Z_Construct_UClass_AGriffonAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BBAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BTAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BTAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGriffonAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGriffonAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GriffonAIController.h" },
		{ "ModuleRelativePath", "GriffonAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BBAsset_MetaData[] = {
		{ "ModuleRelativePath", "GriffonAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BBAsset = { "BBAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGriffonAIController, BBAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BBAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BBAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BTAsset_MetaData[] = {
		{ "ModuleRelativePath", "GriffonAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BTAsset = { "BTAsset", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGriffonAIController, BTAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BTAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BTAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGriffonAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BBAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGriffonAIController_Statics::NewProp_BTAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGriffonAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGriffonAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGriffonAIController_Statics::ClassParams = {
		&AGriffonAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGriffonAIController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGriffonAIController_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGriffonAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGriffonAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGriffonAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGriffonAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGriffonAIController, 3411674606);
	template<> ARENABATTLE_API UClass* StaticClass<AGriffonAIController>()
	{
		return AGriffonAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGriffonAIController(Z_Construct_UClass_AGriffonAIController, &AGriffonAIController::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("AGriffonAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGriffonAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
