// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/AITask_FinPatrolPos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_FinPatrolPos() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UAITask_FinPatrolPos_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UAITask_FinPatrolPos();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UAITask_FinPatrolPos::StaticRegisterNativesUAITask_FinPatrolPos()
	{
	}
	UClass* Z_Construct_UClass_UAITask_FinPatrolPos_NoRegister()
	{
		return UAITask_FinPatrolPos::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_FinPatrolPos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_FinPatrolPos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_FinPatrolPos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AITask_FinPatrolPos.h" },
		{ "ModuleRelativePath", "AITask_FinPatrolPos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_FinPatrolPos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_FinPatrolPos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAITask_FinPatrolPos_Statics::ClassParams = {
		&UAITask_FinPatrolPos::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAITask_FinPatrolPos_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAITask_FinPatrolPos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAITask_FinPatrolPos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAITask_FinPatrolPos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAITask_FinPatrolPos, 2588843491);
	template<> ARENABATTLE_API UClass* StaticClass<UAITask_FinPatrolPos>()
	{
		return UAITask_FinPatrolPos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAITask_FinPatrolPos(Z_Construct_UClass_UAITask_FinPatrolPos, &UAITask_FinPatrolPos::StaticClass, TEXT("/Script/ArenaBattle"), TEXT("UAITask_FinPatrolPos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_FinPatrolPos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
