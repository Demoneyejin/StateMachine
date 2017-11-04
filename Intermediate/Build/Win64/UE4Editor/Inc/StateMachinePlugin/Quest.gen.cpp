// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Quest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}
// Cross Module References
	STATEMACHINEPLUGIN_API UEnum* Z_Construct_UEnum_StateMachinePlugin_EQuestCompletion();
	UPackage* Z_Construct_UPackage__Script_StateMachinePlugin();
	STATEMACHINEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FQuestInProgress();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom_NoRegister();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UQuest();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_State_NoRegister();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UQuestWithResult_NoRegister();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UQuestWithResult();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UQuestStatus_NoRegister();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UQuestStatus();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STATEMACHINEPLUGIN_API UFunction* Z_Construct_UFunction_UQuestStatus_BeginQuest();
	STATEMACHINEPLUGIN_API UFunction* Z_Construct_UFunction_UQuestStatus_UpdateQuests();
// End Cross Module References
	static UEnum* EQuestCompletion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StateMachinePlugin_EQuestCompletion, Z_Construct_UPackage__Script_StateMachinePlugin(), TEXT("EQuestCompletion"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestCompletion(EQuestCompletion_StaticEnum, TEXT("/Script/StateMachinePlugin"), TEXT("EQuestCompletion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StateMachinePlugin_EQuestCompletion_CRC() { return 4049144966U; }
	UEnum* Z_Construct_UEnum_StateMachinePlugin_EQuestCompletion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachinePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestCompletion"), 0, Get_Z_Construct_UEnum_StateMachinePlugin_EQuestCompletion_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestCompletion::EQC_NotStarted", (int64)EQuestCompletion::EQC_NotStarted },
				{ "EQuestCompletion::EQC_Started", (int64)EQuestCompletion::EQC_Started },
				{ "EQuestCompletion::EQC_Succeeded", (int64)EQuestCompletion::EQC_Succeeded },
				{ "EQuestCompletion::EQC_Failed", (int64)EQuestCompletion::EQC_Failed },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Quest.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StateMachinePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EQuestCompletion",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EQuestCompletion",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FQuestInProgress::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATEMACHINEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestInProgress, Z_Construct_UPackage__Script_StateMachinePlugin(), TEXT("QuestInProgress"), sizeof(FQuestInProgress), Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestInProgress(FQuestInProgress::StaticStruct, TEXT("/Script/StateMachinePlugin"), TEXT("QuestInProgress"), false, nullptr, nullptr);
static struct FScriptStruct_StateMachinePlugin_StaticRegisterNativesFQuestInProgress
{
	FScriptStruct_StateMachinePlugin_StaticRegisterNativesFQuestInProgress()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestInProgress")),new UScriptStruct::TCppStructOps<FQuestInProgress>);
	}
} ScriptStruct_StateMachinePlugin_StaticRegisterNativesFQuestInProgress;
	UScriptStruct* Z_Construct_UScriptStruct_FQuestInProgress()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachinePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestInProgress"), sizeof(FQuestInProgress), Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Quest.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestInProgress>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestActivities_MetaData[] = {
				{ "Category", "QuestInProgress" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "All input for this quest. Filtered by the quest's blacklist/whitelist." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestActivities = { UE4CodeGen_Private::EPropertyClass::Array, "QuestActivities", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(FQuestInProgress, QuestActivities), METADATA_PARAMS(NewProp_QuestActivities_MetaData, ARRAY_COUNT(NewProp_QuestActivities_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestActivities_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "QuestActivities", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestProgress_MetaData[] = {
				{ "Category", "QuestInProgress" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "Current quest progress." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuestProgress = { UE4CodeGen_Private::EPropertyClass::Enum, "QuestProgress", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FQuestInProgress, QuestProgress), Z_Construct_UEnum_StateMachinePlugin_EQuestCompletion, METADATA_PARAMS(NewProp_QuestProgress_MetaData, ARRAY_COUNT(NewProp_QuestProgress_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuestProgress_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
				{ "Category", "QuestInProgress" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "NativeConst", "" },
				{ "ToolTip", "Quest data asset." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest = { UE4CodeGen_Private::EPropertyClass::Object, "Quest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FQuestInProgress, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(NewProp_Quest_MetaData, ARRAY_COUNT(NewProp_Quest_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestActivities,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestActivities_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestProgress,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestProgress_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Quest,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachinePlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"QuestInProgress",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FQuestInProgress),
				alignof(FQuestInProgress),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestInProgress_CRC() { return 4107549720U; }
	void UQuest::StaticRegisterNativesUQuest()
	{
	}
	UClass* Z_Construct_UClass_UQuest_NoRegister()
	{
		return UQuest::StaticClass();
	}
	UClass* Z_Construct_UClass_UQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachinePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Quest.h" },
				{ "ModuleRelativePath", "Quest.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputList_MetaData[] = {
				{ "Category", "Quest" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "the blacklist/whitelist used to filter input atoms this quest recognizes." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputList = { UE4CodeGen_Private::EPropertyClass::Array, "InputList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UQuest, InputList), METADATA_PARAMS(NewProp_InputList_MetaData, ARRAY_COUNT(NewProp_InputList_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InputList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInputBlacklist_MetaData[] = {
				{ "Category", "Quest" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "If true, the input list is a blacklist otherwise it's a whitelist." },
			};
#endif
			auto NewProp_bInputBlacklist_SetBit = [](void* Obj){ ((UQuest*)Obj)->bInputBlacklist = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInputBlacklist = { UE4CodeGen_Private::EPropertyClass::Bool, "bInputBlacklist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UQuest), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInputBlacklist_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInputBlacklist_MetaData, ARRAY_COUNT(NewProp_bInputBlacklist_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestStateMachine_MetaData[] = {
				{ "Category", "Quest" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "If this machine acceptes our uest Activities log, the quest is successful?" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestStateMachine = { UE4CodeGen_Private::EPropertyClass::Object, "QuestStateMachine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UQuest, QuestStateMachine), Z_Construct_UClass_USM_State_NoRegister, METADATA_PARAMS(NewProp_QuestStateMachine_MetaData, ARRAY_COUNT(NewProp_QuestStateMachine_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[] = {
				{ "Category", "Quest" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "Name of the quest" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_QuestName = { UE4CodeGen_Private::EPropertyClass::Text, "QuestName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UQuest, QuestName), METADATA_PARAMS(NewProp_QuestName_MetaData, ARRAY_COUNT(NewProp_QuestName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInputBlacklist,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestStateMachine,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UQuest>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UQuest::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UQuest, 1071323580);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuest(Z_Construct_UClass_UQuest, &UQuest::StaticClass, TEXT("/Script/StateMachinePlugin"), TEXT("UQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuest);
	void UQuestWithResult::StaticRegisterNativesUQuestWithResult()
	{
	}
	UClass* Z_Construct_UClass_UQuestWithResult_NoRegister()
	{
		return UQuestWithResult::StaticClass();
	}
	UClass* Z_Construct_UClass_UQuestWithResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UQuest,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachinePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Quest.h" },
				{ "ModuleRelativePath", "Quest.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailureInputs_MetaData[] = {
				{ "Category", "QuestWithResult" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "Input atom to add if the quest Succeeds" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FailureInputs = { UE4CodeGen_Private::EPropertyClass::Array, "FailureInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UQuestWithResult, FailureInputs), METADATA_PARAMS(NewProp_FailureInputs_MetaData, ARRAY_COUNT(NewProp_FailureInputs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FailureInputs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FailureInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailureQuests_MetaData[] = {
				{ "Category", "QuestWithResult" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "The quest in the list will go from not started to started if the quest fails." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FailureQuests = { UE4CodeGen_Private::EPropertyClass::Array, "FailureQuests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UQuestWithResult, FailureQuests), METADATA_PARAMS(NewProp_FailureQuests_MetaData, ARRAY_COUNT(NewProp_FailureQuests_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FailureQuests_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "FailureQuests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessInputs_MetaData[] = {
				{ "Category", "QuestWithResult" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "Input atom to add if the quest Succeeds" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuccessInputs = { UE4CodeGen_Private::EPropertyClass::Array, "SuccessInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UQuestWithResult, SuccessInputs), METADATA_PARAMS(NewProp_SuccessInputs_MetaData, ARRAY_COUNT(NewProp_SuccessInputs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuccessInputs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SuccessInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessQuests_MetaData[] = {
				{ "Category", "QuestWithResult" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "The Quest in this list will go from not started to started if the quest succeeds" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuccessQuests = { UE4CodeGen_Private::EPropertyClass::Array, "SuccessQuests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UQuestWithResult, SuccessQuests), METADATA_PARAMS(NewProp_SuccessQuests_MetaData, ARRAY_COUNT(NewProp_SuccessQuests_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuccessQuests_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SuccessQuests", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FailureInputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FailureInputs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FailureQuests,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FailureQuests_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuccessInputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuccessInputs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuccessQuests,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuccessQuests_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UQuestWithResult>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UQuestWithResult::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UQuestWithResult, 580666681);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestWithResult(Z_Construct_UClass_UQuestWithResult, &UQuestWithResult::StaticClass, TEXT("/Script/StateMachinePlugin"), TEXT("UQuestWithResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestWithResult);
	void UQuestStatus::StaticRegisterNativesUQuestStatus()
	{
		UClass* Class = UQuestStatus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginQuest", (Native)&UQuestStatus::execBeginQuest },
			{ "UpdateQuests", (Native)&UQuestStatus::execUpdateQuests },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UQuestStatus_BeginQuest()
	{
		struct QuestStatus_eventBeginQuest_Parms
		{
			const UQuest* Quest;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((QuestStatus_eventBeginQuest_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(QuestStatus_eventBeginQuest_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest = { UE4CodeGen_Private::EPropertyClass::Object, "Quest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(QuestStatus_eventBeginQuest_Parms, Quest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(NewProp_Quest_MetaData, ARRAY_COUNT(NewProp_Quest_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Quest,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Quest" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "Adds a new quest in progress entry, or begins the quest provided if it's already on the list and\n       hasn't been started yet." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestStatus, "BeginQuest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(QuestStatus_eventBeginQuest_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UQuestStatus_UpdateQuests()
	{
		struct QuestStatus_eventUpdateQuests_Parms
		{
			USM_InputAtom* QuestActivity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestActivity = { UE4CodeGen_Private::EPropertyClass::Object, "QuestActivity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(QuestStatus_eventUpdateQuests_Parms, QuestActivity), Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestActivity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Quest" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "Add to our quest activity log! THis also automatically checks to see if any unfinished quests are now complete." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestStatus, "UpdateQuests", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(QuestStatus_eventUpdateQuests_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestStatus_NoRegister()
	{
		return UQuestStatus::StaticClass();
	}
	UClass* Z_Construct_UClass_UQuestStatus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachinePlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UQuestStatus_BeginQuest, "BeginQuest" }, // 3072822231
				{ &Z_Construct_UFunction_UQuestStatus_UpdateQuests, "UpdateQuests" }, // 3543951530
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Quest.h" },
				{ "ModuleRelativePath", "Quest.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestList_MetaData[] = {
				{ "Category", "QuestStatus" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "The list of quests in our current game or area." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestList = { UE4CodeGen_Private::EPropertyClass::Array, "QuestList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UQuestStatus, QuestList), METADATA_PARAMS(NewProp_QuestList_MetaData, ARRAY_COUNT(NewProp_QuestList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "QuestList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FQuestInProgress, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestActivities_MetaData[] = {
				{ "Category", "QuestStatus" },
				{ "ModuleRelativePath", "Quest.h" },
				{ "ToolTip", "The master list of all quest-related things we've done." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestActivities = { UE4CodeGen_Private::EPropertyClass::Array, "QuestActivities", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UQuestStatus, QuestActivities), METADATA_PARAMS(NewProp_QuestActivities_MetaData, ARRAY_COUNT(NewProp_QuestActivities_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestActivities_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "QuestActivities", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestActivities,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuestActivities_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UQuestStatus>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UQuestStatus::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UQuestStatus, 3229125117);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestStatus(Z_Construct_UClass_UQuestStatus, &UQuestStatus::StaticClass, TEXT("/Script/StateMachinePlugin"), TEXT("UQuestStatus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestStatus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
