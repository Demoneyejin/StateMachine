// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "C_InputBranch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_InputBranch() {}
// Cross Module References
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UC_InputBranch_NoRegister();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UC_InputBranch();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_BranchBase();
	UPackage* Z_Construct_UPackage__Script_StateMachinePlugin();
// End Cross Module References
	void UC_InputBranch::StaticRegisterNativesUC_InputBranch()
	{
	}
	UClass* Z_Construct_UClass_UC_InputBranch_NoRegister()
	{
		return UC_InputBranch::StaticClass();
	}
	UClass* Z_Construct_UClass_UC_InputBranch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USM_BranchBase,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachinePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "C_InputBranch.h" },
				{ "ModuleRelativePath", "C_InputBranch.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableDirections_MetaData[] = {
				{ "Bitmask", "" },
				{ "BitmaskEnum", "ECInputDirections" },
				{ "Category", "C_InputBranch" },
				{ "ModuleRelativePath", "C_InputBranch.h" },
				{ "ToolTip", "Required control-stick directions - at least one these must match the current input direction." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_AcceptableDirections = { UE4CodeGen_Private::EPropertyClass::Int, "AcceptableDirections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UC_InputBranch, AcceptableDirections), METADATA_PARAMS(NewProp_AcceptableDirections_MetaData, ARRAY_COUNT(NewProp_AcceptableDirections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForbiddenButtons_MetaData[] = {
				{ "Bitmask", "" },
				{ "BitmaskEnum", "ECInputButtons" },
				{ "Category", "C_InputBranch" },
				{ "ModuleRelativePath", "C_InputBranch.h" },
				{ "ToolTip", "These buttons must all be Up." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForbiddenButtons = { UE4CodeGen_Private::EPropertyClass::Int, "ForbiddenButtons", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UC_InputBranch, ForbiddenButtons), METADATA_PARAMS(NewProp_ForbiddenButtons_MetaData, ARRAY_COUNT(NewProp_ForbiddenButtons_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredButtons_MetaData[] = {
				{ "Bitmask", "" },
				{ "BitmaskEnum", "ECInputButtons" },
				{ "Category", "C_InputBranch" },
				{ "ModuleRelativePath", "C_InputBranch.h" },
				{ "ToolTip", "These buttons must be Just Pressed or Held Down. If any are checked, at least one must be just pressed" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredButtons = { UE4CodeGen_Private::EPropertyClass::Int, "RequiredButtons", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UC_InputBranch, RequiredButtons), METADATA_PARAMS(NewProp_RequiredButtons_MetaData, ARRAY_COUNT(NewProp_RequiredButtons_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptableDirections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForbiddenButtons,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredButtons,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UC_InputBranch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UC_InputBranch::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UC_InputBranch, 1933351854);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_InputBranch(Z_Construct_UClass_UC_InputBranch, &UC_InputBranch::StaticClass, TEXT("/Script/StateMachinePlugin"), TEXT("UC_InputBranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_InputBranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
