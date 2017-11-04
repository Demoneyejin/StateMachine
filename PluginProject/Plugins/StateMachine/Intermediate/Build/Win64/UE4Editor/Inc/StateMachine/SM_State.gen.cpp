// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SM_State.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSM_State() {}
// Cross Module References
	STATEMACHINE_API UEnum* Z_Construct_UEnum_StateMachine_EStateMachineCompletionType();
	UPackage* Z_Construct_UPackage__Script_StateMachine();
	STATEMACHINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateMachineResult();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_State_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_Branch_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_Branch();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_State();
	STATEMACHINE_API UFunction* Z_Construct_UFunction_USM_State_RunState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EStateMachineCompletionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StateMachine_EStateMachineCompletionType, Z_Construct_UPackage__Script_StateMachine(), TEXT("EStateMachineCompletionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStateMachineCompletionType(EStateMachineCompletionType_StaticEnum, TEXT("/Script/StateMachine"), TEXT("EStateMachineCompletionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StateMachine_EStateMachineCompletionType_CRC() { return 776590501U; }
	UEnum* Z_Construct_UEnum_StateMachine_EStateMachineCompletionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStateMachineCompletionType"), 0, Get_Z_Construct_UEnum_StateMachine_EStateMachineCompletionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStateMachineCompletionType::NotAccepted", (int64)EStateMachineCompletionType::NotAccepted },
				{ "EStateMachineCompletionType::Accepted", (int64)EStateMachineCompletionType::Accepted },
				{ "EStateMachineCompletionType::Rejected", (int64)EStateMachineCompletionType::Rejected },
				{ "EStateMachineCompletionType::OutOfSteps", (int64)EStateMachineCompletionType::OutOfSteps },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accepted.ToolTip", "Success - this state is an Accepted state" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "NotAccepted.ToolTip", "Implicit failure - this state is not marked as accepted" },
				{ "OutOfSteps.Hidden", "" },
				{ "OutOfSteps.ToolTip", "Our Sim ran out of steps while machine was still running.." },
				{ "Rejected.ToolTip", "Explicit Failure - this state is specifically marked as a failure/not-accept." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StateMachine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStateMachineCompletionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EStateMachineCompletionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStateMachineResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATEMACHINE_API uint32 Get_Z_Construct_UScriptStruct_FStateMachineResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineResult, Z_Construct_UPackage__Script_StateMachine(), TEXT("StateMachineResult"), sizeof(FStateMachineResult), Get_Z_Construct_UScriptStruct_FStateMachineResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStateMachineResult(FStateMachineResult::StaticStruct, TEXT("/Script/StateMachine"), TEXT("StateMachineResult"), false, nullptr, nullptr);
static struct FScriptStruct_StateMachine_StaticRegisterNativesFStateMachineResult
{
	FScriptStruct_StateMachine_StaticRegisterNativesFStateMachineResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StateMachineResult")),new UScriptStruct::TCppStructOps<FStateMachineResult>);
	}
} ScriptStruct_StateMachine_StaticRegisterNativesFStateMachineResult;
	UScriptStruct* Z_Construct_UScriptStruct_FStateMachineResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStateMachineResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateMachineResult"), sizeof(FStateMachineResult), Get_Z_Construct_UScriptStruct_FStateMachineResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateMachineResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[] = {
				{ "ModuleRelativePath", "Public/SM_State.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DataIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStateMachineResult, DataIndex), METADATA_PARAMS(NewProp_DataIndex_MetaData, ARRAY_COUNT(NewProp_DataIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalState_MetaData[] = {
				{ "ModuleRelativePath", "Public/SM_State.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinalState = { UE4CodeGen_Private::EPropertyClass::Object, "FinalState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStateMachineResult, FinalState), Z_Construct_UClass_USM_State_NoRegister, METADATA_PARAMS(NewProp_FinalState_MetaData, ARRAY_COUNT(NewProp_FinalState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionType_MetaData[] = {
				{ "ModuleRelativePath", "Public/SM_State.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompletionType = { UE4CodeGen_Private::EPropertyClass::Enum, "CompletionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStateMachineResult, CompletionType), Z_Construct_UEnum_StateMachine_EStateMachineCompletionType, METADATA_PARAMS(NewProp_CompletionType_MetaData, ARRAY_COUNT(NewProp_CompletionType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FinalState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompletionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompletionType_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StateMachineResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FStateMachineResult),
				alignof(FStateMachineResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateMachineResult_CRC() { return 245502041U; }
	void USM_InputAtom::StaticRegisterNativesUSM_InputAtom()
	{
	}
	UClass* Z_Construct_UClass_USM_InputAtom_NoRegister()
	{
		return USM_InputAtom::StaticClass();
	}
	UClass* Z_Construct_UClass_USM_InputAtom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SM_State.h" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
				{ "Category", "SM_InputAtom" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "Display value for this input atom, mainly for debugging purposes." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Name, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USM_InputAtom, Description), METADATA_PARAMS(NewProp_Description_MetaData, ARRAY_COUNT(NewProp_Description_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USM_InputAtom>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USM_InputAtom::StaticClass,
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
	IMPLEMENT_CLASS(USM_InputAtom, 1393670884);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_InputAtom(Z_Construct_UClass_USM_InputAtom, &USM_InputAtom::StaticClass, TEXT("/Script/StateMachine"), TEXT("USM_InputAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_InputAtom);
	void USM_Branch::StaticRegisterNativesUSM_Branch()
	{
	}
	UClass* Z_Construct_UClass_USM_Branch_NoRegister()
	{
		return USM_Branch::StaticClass();
	}
	UClass* Z_Construct_UClass_USM_Branch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SM_State.h" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableInputs_MetaData[] = {
				{ "Category", "SM_Branch" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "Acceptable inputs. The current input atom must be on this list." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcceptableInputs = { UE4CodeGen_Private::EPropertyClass::Array, "AcceptableInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(USM_Branch, AcceptableInputs), METADATA_PARAMS(NewProp_AcceptableInputs_MetaData, ARRAY_COUNT(NewProp_AcceptableInputs_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcceptableInputs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AcceptableInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseInputTest_MetaData[] = {
				{ "Category", "SM_Branch" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "If true, the meaning of acceptable Inputs is reversed." },
			};
#endif
			auto NewProp_bReverseInputTest_SetBit = [](void* Obj){ ((USM_Branch*)Obj)->bReverseInputTest = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseInputTest = { UE4CodeGen_Private::EPropertyClass::Bool, "bReverseInputTest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USM_Branch), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReverseInputTest_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReverseInputTest_MetaData, ARRAY_COUNT(NewProp_bReverseInputTest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestintationState_MetaData[] = {
				{ "Category", "SM_Branch" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "State where we will go next if this branch is taken.  if null, the branch will be ignored." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestintationState = { UE4CodeGen_Private::EPropertyClass::Object, "DestintationState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(USM_Branch, DestintationState), Z_Construct_UClass_USM_State_NoRegister, METADATA_PARAMS(NewProp_DestintationState_MetaData, ARRAY_COUNT(NewProp_DestintationState_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptableInputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptableInputs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReverseInputTest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestintationState,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USM_Branch>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USM_Branch::StaticClass,
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
	IMPLEMENT_CLASS(USM_Branch, 4163885009);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_Branch(Z_Construct_UClass_USM_Branch, &USM_Branch::StaticClass, TEXT("/Script/StateMachine"), TEXT("USM_Branch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_Branch);
	void USM_State::StaticRegisterNativesUSM_State()
	{
		UClass* Class = USM_State::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunState", (Native)&USM_State::execRunState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USM_State_RunState()
	{
		struct SM_State_eventRunState_Parms
		{
			const UObject* RefObject;
			TArray<USM_InputAtom*> DataSource;
			int32 DataIndex;
			int32 RemainingSteps;
			FStateMachineResult ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SM_State_eventRunState_Parms, ReturnValue), Z_Construct_UScriptStruct_FStateMachineResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainingSteps = { UE4CodeGen_Private::EPropertyClass::Int, "RemainingSteps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SM_State_eventRunState_Parms, RemainingSteps), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataIndex = { UE4CodeGen_Private::EPropertyClass::Int, "DataIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SM_State_eventRunState_Parms, DataIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataSource = { UE4CodeGen_Private::EPropertyClass::Array, "DataSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SM_State_eventRunState_Parms, DataSource), METADATA_PARAMS(NewProp_DataSource_MetaData, ARRAY_COUNT(NewProp_DataSource_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataSource_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DataSource", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefObject = { UE4CodeGen_Private::EPropertyClass::Object, "RefObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SM_State_eventRunState_Parms, RefObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_RefObject_MetaData, ARRAY_COUNT(NewProp_RefObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RemainingSteps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataSource,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataSource_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RefObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "State Machine" },
				{ "CPP_Default_DataIndex", "0" },
				{ "CPP_Default_RemainingSteps", "-1" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "Attempt to run the state with input from the given DataSource object.\n     /       Will start reading input at DataIndex.\n     /       Will decrement RemainingSteps and automatically fail after it hits 0." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USM_State, "RunState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(SM_State_eventRunState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USM_State_NoRegister()
	{
		return USM_State::StaticClass();
	}
	UClass* Z_Construct_UClass_USM_State()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USM_State_RunState, "RunState" }, // 1345146594
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SM_State.h" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedBranches_MetaData[] = {
				{ "Category", "SM_State" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "A branch all states related to this state share. These run after Instanced Branches" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SharedBranches = { UE4CodeGen_Private::EPropertyClass::Array, "SharedBranches", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(USM_State, SharedBranches), METADATA_PARAMS(NewProp_SharedBranches_MetaData, ARRAY_COUNT(NewProp_SharedBranches_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SharedBranches_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SharedBranches", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USM_Branch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedBranches_MetaData[] = {
				{ "Category", "SM_State" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "Branches to other states. These are in priority order, so the first successful branch\nwill be taken." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancedBranches = { UE4CodeGen_Private::EPropertyClass::Array, "InstancedBranches", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020088000000009, 1, nullptr, STRUCT_OFFSET(USM_State, InstancedBranches), METADATA_PARAMS(NewProp_InstancedBranches_MetaData, ARRAY_COUNT(NewProp_InstancedBranches_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedBranches_Inner_MetaData[] = {
				{ "Category", "SM_State" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "Branches to other states. These are in priority order, so the first successful branch\nwill be taken." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedBranches_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InstancedBranches", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_USM_Branch_NoRegister, METADATA_PARAMS(NewProp_InstancedBranches_Inner_MetaData, ARRAY_COUNT(NewProp_InstancedBranches_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopByDefault_MetaData[] = {
				{ "Category", "SM_State" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "if this is set, this state will loop on itself whenever an unhandled input atom is detected." },
			};
#endif
			auto NewProp_bLoopByDefault_SetBit = [](void* Obj){ ((USM_State*)Obj)->bLoopByDefault = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopByDefault = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoopByDefault", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USM_State), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoopByDefault_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoopByDefault_MetaData, ARRAY_COUNT(NewProp_bLoopByDefault_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTerminateImmediately_MetaData[] = {
				{ "Category", "SM_State" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "A State machine run that enters this state will terminate immediately, regardless of whether\nor not there is more input data." },
			};
#endif
			auto NewProp_bTerminateImmediately_SetBit = [](void* Obj){ ((USM_State*)Obj)->bTerminateImmediately = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTerminateImmediately = { UE4CodeGen_Private::EPropertyClass::Bool, "bTerminateImmediately", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USM_State), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTerminateImmediately_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTerminateImmediately_MetaData, ARRAY_COUNT(NewProp_bTerminateImmediately_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionType_MetaData[] = {
				{ "Category", "SM_State" },
				{ "ModuleRelativePath", "Public/SM_State.h" },
				{ "ToolTip", "if input runs out on this state (Or terminateImmediately is true), this is how the result will be interpreted." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompletionType = { UE4CodeGen_Private::EPropertyClass::Enum, "CompletionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(USM_State, CompletionType), Z_Construct_UEnum_StateMachine_EStateMachineCompletionType, METADATA_PARAMS(NewProp_CompletionType_MetaData, ARRAY_COUNT(NewProp_CompletionType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SharedBranches,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SharedBranches_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancedBranches,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstancedBranches_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoopByDefault,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTerminateImmediately,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompletionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompletionType_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USM_State>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USM_State::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(USM_State, 1722815559);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_State(Z_Construct_UClass_USM_State, &USM_State::StaticClass, TEXT("/Script/StateMachine"), TEXT("USM_State"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_State);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
