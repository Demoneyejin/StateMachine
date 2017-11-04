// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuest;
class USM_InputAtom;
#ifdef STATEMACHINEPLUGIN_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define STATEMACHINEPLUGIN_Quest_generated_h

#define StateMachine_Source_StateMachinePlugin_Quest_h_88_GENERATED_BODY \
	friend STATEMACHINEPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FQuestInProgress(); \
	STATEMACHINEPLUGIN_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__QuestActivities() { return STRUCT_OFFSET(FQuestInProgress, QuestActivities); }


#define StateMachine_Source_StateMachinePlugin_Quest_h_28_RPC_WRAPPERS
#define StateMachine_Source_StateMachinePlugin_Quest_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define StateMachine_Source_StateMachinePlugin_Quest_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend STATEMACHINEPLUGIN_API class UClass* Z_Construct_UClass_UQuest(); \
public: \
	DECLARE_CLASS(UQuest, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StateMachinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UQuest) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StateMachine_Source_StateMachinePlugin_Quest_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend STATEMACHINEPLUGIN_API class UClass* Z_Construct_UClass_UQuest(); \
public: \
	DECLARE_CLASS(UQuest, UDataAsset, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StateMachinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UQuest) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StateMachine_Source_StateMachinePlugin_Quest_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public:


#define StateMachine_Source_StateMachinePlugin_Quest_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuest)


#define StateMachine_Source_StateMachinePlugin_Quest_h_28_PRIVATE_PROPERTY_OFFSET
#define StateMachine_Source_StateMachinePlugin_Quest_h_25_PROLOG
#define StateMachine_Source_StateMachinePlugin_Quest_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateMachine_Source_StateMachinePlugin_Quest_h_28_PRIVATE_PROPERTY_OFFSET \
	StateMachine_Source_StateMachinePlugin_Quest_h_28_RPC_WRAPPERS \
	StateMachine_Source_StateMachinePlugin_Quest_h_28_INCLASS \
	StateMachine_Source_StateMachinePlugin_Quest_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateMachine_Source_StateMachinePlugin_Quest_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateMachine_Source_StateMachinePlugin_Quest_h_28_PRIVATE_PROPERTY_OFFSET \
	StateMachine_Source_StateMachinePlugin_Quest_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	StateMachine_Source_StateMachinePlugin_Quest_h_28_INCLASS_NO_PURE_DECLS \
	StateMachine_Source_StateMachinePlugin_Quest_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateMachine_Source_StateMachinePlugin_Quest_h_57_RPC_WRAPPERS
#define StateMachine_Source_StateMachinePlugin_Quest_h_57_RPC_WRAPPERS_NO_PURE_DECLS
#define StateMachine_Source_StateMachinePlugin_Quest_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestWithResult(); \
	friend STATEMACHINEPLUGIN_API class UClass* Z_Construct_UClass_UQuestWithResult(); \
public: \
	DECLARE_CLASS(UQuestWithResult, UQuest, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StateMachinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UQuestWithResult) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StateMachine_Source_StateMachinePlugin_Quest_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUQuestWithResult(); \
	friend STATEMACHINEPLUGIN_API class UClass* Z_Construct_UClass_UQuestWithResult(); \
public: \
	DECLARE_CLASS(UQuestWithResult, UQuest, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StateMachinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UQuestWithResult) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StateMachine_Source_StateMachinePlugin_Quest_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestWithResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestWithResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestWithResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestWithResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestWithResult(UQuestWithResult&&); \
	NO_API UQuestWithResult(const UQuestWithResult&); \
public:


#define StateMachine_Source_StateMachinePlugin_Quest_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestWithResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestWithResult(UQuestWithResult&&); \
	NO_API UQuestWithResult(const UQuestWithResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestWithResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestWithResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestWithResult)


#define StateMachine_Source_StateMachinePlugin_Quest_h_57_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SuccessQuests() { return STRUCT_OFFSET(UQuestWithResult, SuccessQuests); } \
	FORCEINLINE static uint32 __PPO__SuccessInputs() { return STRUCT_OFFSET(UQuestWithResult, SuccessInputs); } \
	FORCEINLINE static uint32 __PPO__FailureQuests() { return STRUCT_OFFSET(UQuestWithResult, FailureQuests); } \
	FORCEINLINE static uint32 __PPO__FailureInputs() { return STRUCT_OFFSET(UQuestWithResult, FailureInputs); }


#define StateMachine_Source_StateMachinePlugin_Quest_h_54_PROLOG
#define StateMachine_Source_StateMachinePlugin_Quest_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateMachine_Source_StateMachinePlugin_Quest_h_57_PRIVATE_PROPERTY_OFFSET \
	StateMachine_Source_StateMachinePlugin_Quest_h_57_RPC_WRAPPERS \
	StateMachine_Source_StateMachinePlugin_Quest_h_57_INCLASS \
	StateMachine_Source_StateMachinePlugin_Quest_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateMachine_Source_StateMachinePlugin_Quest_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateMachine_Source_StateMachinePlugin_Quest_h_57_PRIVATE_PROPERTY_OFFSET \
	StateMachine_Source_StateMachinePlugin_Quest_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	StateMachine_Source_StateMachinePlugin_Quest_h_57_INCLASS_NO_PURE_DECLS \
	StateMachine_Source_StateMachinePlugin_Quest_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateMachine_Source_StateMachinePlugin_Quest_h_147_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginQuest) \
	{ \
		P_GET_OBJECT(UQuest,Z_Param_Quest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BeginQuest(Z_Param_Quest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateQuests) \
	{ \
		P_GET_OBJECT(USM_InputAtom,Z_Param_QuestActivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateQuests(Z_Param_QuestActivity); \
		P_NATIVE_END; \
	}


#define StateMachine_Source_StateMachinePlugin_Quest_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginQuest) \
	{ \
		P_GET_OBJECT(UQuest,Z_Param_Quest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BeginQuest(Z_Param_Quest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateQuests) \
	{ \
		P_GET_OBJECT(USM_InputAtom,Z_Param_QuestActivity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateQuests(Z_Param_QuestActivity); \
		P_NATIVE_END; \
	}


#define StateMachine_Source_StateMachinePlugin_Quest_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestStatus(); \
	friend STATEMACHINEPLUGIN_API class UClass* Z_Construct_UClass_UQuestStatus(); \
public: \
	DECLARE_CLASS(UQuestStatus, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StateMachinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UQuestStatus) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StateMachine_Source_StateMachinePlugin_Quest_h_147_INCLASS \
private: \
	static void StaticRegisterNativesUQuestStatus(); \
	friend STATEMACHINEPLUGIN_API class UClass* Z_Construct_UClass_UQuestStatus(); \
public: \
	DECLARE_CLASS(UQuestStatus, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StateMachinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UQuestStatus) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StateMachine_Source_StateMachinePlugin_Quest_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestStatus(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestStatus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestStatus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestStatus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestStatus(UQuestStatus&&); \
	NO_API UQuestStatus(const UQuestStatus&); \
public:


#define StateMachine_Source_StateMachinePlugin_Quest_h_147_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestStatus(UQuestStatus&&); \
	NO_API UQuestStatus(const UQuestStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestStatus); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestStatus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestStatus)


#define StateMachine_Source_StateMachinePlugin_Quest_h_147_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__QuestActivities() { return STRUCT_OFFSET(UQuestStatus, QuestActivities); } \
	FORCEINLINE static uint32 __PPO__QuestList() { return STRUCT_OFFSET(UQuestStatus, QuestList); }


#define StateMachine_Source_StateMachinePlugin_Quest_h_144_PROLOG
#define StateMachine_Source_StateMachinePlugin_Quest_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateMachine_Source_StateMachinePlugin_Quest_h_147_PRIVATE_PROPERTY_OFFSET \
	StateMachine_Source_StateMachinePlugin_Quest_h_147_RPC_WRAPPERS \
	StateMachine_Source_StateMachinePlugin_Quest_h_147_INCLASS \
	StateMachine_Source_StateMachinePlugin_Quest_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateMachine_Source_StateMachinePlugin_Quest_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateMachine_Source_StateMachinePlugin_Quest_h_147_PRIVATE_PROPERTY_OFFSET \
	StateMachine_Source_StateMachinePlugin_Quest_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	StateMachine_Source_StateMachinePlugin_Quest_h_147_INCLASS_NO_PURE_DECLS \
	StateMachine_Source_StateMachinePlugin_Quest_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StateMachine_Source_StateMachinePlugin_Quest_h


#define FOREACH_ENUM_EQUESTCOMPLETION(op) \
	op(EQuestCompletion::EQC_NotStarted) \
	op(EQuestCompletion::EQC_Started) \
	op(EQuestCompletion::EQC_Succeeded) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
