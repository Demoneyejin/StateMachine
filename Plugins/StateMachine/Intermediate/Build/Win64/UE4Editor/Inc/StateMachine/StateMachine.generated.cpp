// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/StateMachinePrivatePCH.h"
#include "StateMachine.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1StateMachine() {}
	void UDummyObject::StaticRegisterNativesUDummyObject()
	{
	}
	IMPLEMENT_CLASS(UDummyObject, 4268899785);
static class UEnum* EStateMachineCompletionType_StaticEnum()
{
	extern STATEMACHINE_API class UPackage* Z_Construct_UPackage__Script_StateMachine();
	static class UEnum* Singleton = NULL;
	if (!Singleton)
	{
		extern STATEMACHINE_API class UEnum* Z_Construct_UEnum_StateMachine_EStateMachineCompletionType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_StateMachine_EStateMachineCompletionType, Z_Construct_UPackage__Script_StateMachine(), TEXT("EStateMachineCompletionType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStateMachineCompletionType(EStateMachineCompletionType_StaticEnum, TEXT("/Script/StateMachine"), TEXT("EStateMachineCompletionType"), false, nullptr, nullptr);
class UScriptStruct* FStateMachineResult::StaticStruct()
{
	extern STATEMACHINE_API class UPackage* Z_Construct_UPackage__Script_StateMachine();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATEMACHINE_API class UScriptStruct* Z_Construct_UScriptStruct_FStateMachineResult();
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
	void USM_InputAtom::StaticRegisterNativesUSM_InputAtom()
	{
	}
	IMPLEMENT_CLASS(USM_InputAtom, 99113963);
	void USM_Branch::StaticRegisterNativesUSM_Branch()
	{
	}
	IMPLEMENT_CLASS(USM_Branch, 3867919134);
	void USM_State::StaticRegisterNativesUSM_State()
	{
		FNativeFunctionRegistrar::RegisterFunction(USM_State::StaticClass(), "RunState",(Native)&USM_State::execRunState);
	}
	IMPLEMENT_CLASS(USM_State, 3284690260);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ENGINE_API class UClass* Z_Construct_UClass_UDataAsset();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();

	STATEMACHINE_API class UClass* Z_Construct_UClass_UDummyObject_NoRegister();
	STATEMACHINE_API class UClass* Z_Construct_UClass_UDummyObject();
	STATEMACHINE_API class UEnum* Z_Construct_UEnum_StateMachine_EStateMachineCompletionType();
	STATEMACHINE_API class UScriptStruct* Z_Construct_UScriptStruct_FStateMachineResult();
	STATEMACHINE_API class UClass* Z_Construct_UClass_USM_InputAtom_NoRegister();
	STATEMACHINE_API class UClass* Z_Construct_UClass_USM_InputAtom();
	STATEMACHINE_API class UClass* Z_Construct_UClass_USM_Branch_NoRegister();
	STATEMACHINE_API class UClass* Z_Construct_UClass_USM_Branch();
	STATEMACHINE_API class UFunction* Z_Construct_UFunction_USM_State_RunState();
	STATEMACHINE_API class UClass* Z_Construct_UClass_USM_State_NoRegister();
	STATEMACHINE_API class UClass* Z_Construct_UClass_USM_State();
	STATEMACHINE_API class UPackage* Z_Construct_UPackage__Script_StateMachine();
	UClass* Z_Construct_UClass_UDummyObject_NoRegister()
	{
		return UDummyObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UDummyObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_StateMachine();
			OuterClass = UDummyObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DummyObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/DummyObject.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDummyObject(Z_Construct_UClass_UDummyObject, &UDummyObject::StaticClass, TEXT("UDummyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDummyObject);
	UEnum* Z_Construct_UEnum_StateMachine_EStateMachineCompletionType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_StateMachine();
		extern uint32 Get_Z_Construct_UEnum_StateMachine_EStateMachineCompletionType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStateMachineCompletionType"), 0, Get_Z_Construct_UEnum_StateMachine_EStateMachineCompletionType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EStateMachineCompletionType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, uint8>> EnumNames;
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EStateMachineCompletionType::NotAccepted")), 0));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EStateMachineCompletionType::Accepted")), 1));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EStateMachineCompletionType::Rejected")), 2));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EStateMachineCompletionType::OutOfSteps")), 3));
			EnumNames.Add(TPairInitializer<FName, uint8>(FName(TEXT("EStateMachineCompletionType::EStateMachineCompletionType_MAX")), 4));
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EStateMachineCompletionType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("Accepted.ToolTip"), TEXT("Success - this state is an accept state."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NotAccepted.ToolTip"), TEXT("Implicit Faliure - This state is not marked as accepted"));
			MetaData->SetValue(ReturnEnum, TEXT("OutOfSteps.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("OutOfSteps.ToolTip"), TEXT("our simulation ran out of stteps while the machine was still running."));
			MetaData->SetValue(ReturnEnum, TEXT("Rejected.ToolTip"), TEXT("Explicit Failure - this state is specfically marked as failure /not-accepted."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_StateMachine_EStateMachineCompletionType_CRC() { return 1650188858U; }
	UScriptStruct* Z_Construct_UScriptStruct_FStateMachineResult()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachine();
		extern uint32 Get_Z_Construct_UScriptStruct_FStateMachineResult_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateMachineResult"), sizeof(FStateMachineResult), Get_Z_Construct_UScriptStruct_FStateMachineResult_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StateMachineResult"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FStateMachineResult>, EStructFlags(0x00000201));
			UProperty* NewProp_DataIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DataIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DataIndex, FStateMachineResult), 0x0010000000000000);
			UProperty* NewProp_FinalState = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FinalState"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FinalState, FStateMachineResult), 0x0010000000000000, Z_Construct_UClass_USM_State_NoRegister());
			UProperty* NewProp_CompletionType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CompletionType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(CompletionType, FStateMachineResult), 0x0010000000000000, Z_Construct_UEnum_StateMachine_EStateMachineCompletionType());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
			MetaData->SetValue(NewProp_DataIndex, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
			MetaData->SetValue(NewProp_FinalState, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
			MetaData->SetValue(NewProp_CompletionType, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateMachineResult_CRC() { return 3963940875U; }
	UClass* Z_Construct_UClass_USM_InputAtom_NoRegister()
	{
		return USM_InputAtom::StaticClass();
	}
	UClass* Z_Construct_UClass_USM_InputAtom()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_StateMachine();
			OuterClass = USM_InputAtom::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Description = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Description"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Description, USM_InputAtom), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SM_State.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_Description, TEXT("Category"), TEXT("SM_InputAtom"));
				MetaData->SetValue(NewProp_Description, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_Description, TEXT("ToolTip"), TEXT("Display value for this input atom, mainly for debugging purposes."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_InputAtom(Z_Construct_UClass_USM_InputAtom, &USM_InputAtom::StaticClass, TEXT("USM_InputAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_InputAtom);
	UClass* Z_Construct_UClass_USM_Branch_NoRegister()
	{
		return USM_Branch::StaticClass();
	}
	UClass* Z_Construct_UClass_USM_Branch()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_StateMachine();
			OuterClass = USM_Branch::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20101080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AcceptableInputs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AcceptableInputs"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AcceptableInputs, USM_Branch), 0x0020080000000001);
				UProperty* NewProp_AcceptableInputs_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AcceptableInputs, TEXT("AcceptableInputs"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USM_InputAtom_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bReverseInputTest, USM_Branch, uint8);
				UProperty* NewProp_bReverseInputTest = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bReverseInputTest"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bReverseInputTest, USM_Branch), 0x0020080000000001, CPP_BOOL_PROPERTY_BITMASK(bReverseInputTest, USM_Branch), sizeof(uint8), false);
				UProperty* NewProp_DestinationState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DestinationState"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DestinationState, USM_Branch), 0x0020080000000001, Z_Construct_UClass_USM_State_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SM_State.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_AcceptableInputs, TEXT("Category"), TEXT("SM_Branch"));
				MetaData->SetValue(NewProp_AcceptableInputs, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_AcceptableInputs, TEXT("ToolTip"), TEXT("Acceptable inputs. The current input atom must be on this list."));
				MetaData->SetValue(NewProp_bReverseInputTest, TEXT("Category"), TEXT("SM_Branch"));
				MetaData->SetValue(NewProp_bReverseInputTest, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_bReverseInputTest, TEXT("ToolTip"), TEXT("If true, the meaning of AcceptableInputs is reversed."));
				MetaData->SetValue(NewProp_DestinationState, TEXT("Category"), TEXT("SM_Branch"));
				MetaData->SetValue(NewProp_DestinationState, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_DestinationState, TEXT("ToolTip"), TEXT("State where we will go next if this branch is taken. If null, this branch will be ignored."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_Branch(Z_Construct_UClass_USM_Branch, &USM_Branch::StaticClass, TEXT("USM_Branch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_Branch);
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
		UObject* Outer=Z_Construct_UClass_USM_State();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RunState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420400, 65535, sizeof(SM_State_eventRunState_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, SM_State_eventRunState_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FStateMachineResult());
			UProperty* NewProp_RemainingSteps = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RemainingSteps"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RemainingSteps, SM_State_eventRunState_Parms), 0x0010000000000080);
			UProperty* NewProp_DataIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DataIndex, SM_State_eventRunState_Parms), 0x0010000000000080);
			UProperty* NewProp_DataSource = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataSource"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DataSource, SM_State_eventRunState_Parms), 0x0010000008000182);
			UProperty* NewProp_DataSource_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DataSource, TEXT("DataSource"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USM_InputAtom_NoRegister());
			UProperty* NewProp_RefObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RefObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RefObject, SM_State_eventRunState_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("State Machine"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_DataIndex"), TEXT("0"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_RemainingSteps"), TEXT("-1"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Attempt to run the state with input from the given DataSource object.\n          Will start reading input at DataIndex.\n          Will decrement RemainingSteps and automatically fail after it hits 0."));
			MetaData->SetValue(NewProp_DataSource, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_RefObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USM_State_NoRegister()
	{
		return USM_State::StaticClass();
	}
	UClass* Z_Construct_UClass_USM_State()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_StateMachine();
			OuterClass = USM_State::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_USM_State_RunState());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SharedBranches = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SharedBranches"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SharedBranches, USM_State), 0x0020080000000001);
				UProperty* NewProp_SharedBranches_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SharedBranches, TEXT("SharedBranches"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USM_Branch_NoRegister());
				UProperty* NewProp_InstancedBranches = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InstancedBranches"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(InstancedBranches, USM_State), 0x0020088000000009);
				UProperty* NewProp_InstancedBranches_Inner = new(EC_InternalUseOnlyConstructor, NewProp_InstancedBranches, TEXT("InstancedBranches"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0002000000080008, Z_Construct_UClass_USM_Branch_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLoopByDefault, USM_State, uint8);
				UProperty* NewProp_bLoopByDefault = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLoopByDefault"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLoopByDefault, USM_State), 0x0020080000000001, CPP_BOOL_PROPERTY_BITMASK(bLoopByDefault, USM_State), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTerminateImmediately, USM_State, uint8);
				UProperty* NewProp_bTerminateImmediately = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bTerminateImmediately"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTerminateImmediately, USM_State), 0x0020080000000001, CPP_BOOL_PROPERTY_BITMASK(bTerminateImmediately, USM_State), sizeof(uint8), false);
				UProperty* NewProp_CompletionType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CompletionType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(CompletionType, USM_State), 0x0020080000000001, Z_Construct_UEnum_StateMachine_EStateMachineCompletionType());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USM_State_RunState(), "RunState"); // 877724215
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SM_State.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_SharedBranches, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_SharedBranches, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_SharedBranches, TEXT("ToolTip"), TEXT("Branches to other states. these are in priority order, so the first successful branch will be taken. these run after instacned Branches."));
				MetaData->SetValue(NewProp_InstancedBranches, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_InstancedBranches, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InstancedBranches, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_InstancedBranches, TEXT("ToolTip"), TEXT("Branches to other states. These are in priority order, so the first successful branch will be taken."));
				MetaData->SetValue(NewProp_InstancedBranches_Inner, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_InstancedBranches_Inner, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_InstancedBranches_Inner, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_InstancedBranches_Inner, TEXT("ToolTip"), TEXT("Branches to other states. These are in priority order, so the first successful branch will be taken."));
				MetaData->SetValue(NewProp_bLoopByDefault, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_bLoopByDefault, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_bLoopByDefault, TEXT("ToolTip"), TEXT("if this is a set, this state will loop on itself whenever an unhandled input atom is detected."));
				MetaData->SetValue(NewProp_bTerminateImmediately, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_bTerminateImmediately, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_bTerminateImmediately, TEXT("ToolTip"), TEXT("A state machine run that enters this state will terminate immediately. regardless of whether or not there is more input data."));
				MetaData->SetValue(NewProp_CompletionType, TEXT("Category"), TEXT("SM_State"));
				MetaData->SetValue(NewProp_CompletionType, TEXT("ModuleRelativePath"), TEXT("Classes/SM_State.h"));
				MetaData->SetValue(NewProp_CompletionType, TEXT("ToolTip"), TEXT("If input runs out on this state( or TerminateImmediate is true). This is how the result will be interpreted."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_State(Z_Construct_UClass_USM_State, &USM_State::StaticClass, TEXT("USM_State"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_State);
	UPackage* Z_Construct_UPackage__Script_StateMachine()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/StateMachine")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xC1291AF0;
			Guid.B = 0x5BB6B00A;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
