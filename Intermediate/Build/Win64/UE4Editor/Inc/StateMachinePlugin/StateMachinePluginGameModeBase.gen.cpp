// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "StateMachinePluginGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateMachinePluginGameModeBase() {}
// Cross Module References
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_AStateMachinePluginGameModeBase_NoRegister();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_AStateMachinePluginGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StateMachinePlugin();
// End Cross Module References
	void AStateMachinePluginGameModeBase::StaticRegisterNativesAStateMachinePluginGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AStateMachinePluginGameModeBase_NoRegister()
	{
		return AStateMachinePluginGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AStateMachinePluginGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachinePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "StateMachinePluginGameModeBase.h" },
				{ "ModuleRelativePath", "StateMachinePluginGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AStateMachinePluginGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AStateMachinePluginGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(AStateMachinePluginGameModeBase, 3919497638);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStateMachinePluginGameModeBase(Z_Construct_UClass_AStateMachinePluginGameModeBase, &AStateMachinePluginGameModeBase::StaticClass, TEXT("/Script/StateMachinePlugin"), TEXT("AStateMachinePluginGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStateMachinePluginGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
