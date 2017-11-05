// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATEMACHINEPLUGIN_C_InputBranch_generated_h
#error "C_InputBranch.generated.h already included, missing '#pragma once' in C_InputBranch.h"
#endif
#define STATEMACHINEPLUGIN_C_InputBranch_generated_h

#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_RPC_WRAPPERS
#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_InputBranch(); \
	friend STATEMACHINEPLUGIN_API class UClass* Z_Construct_UClass_UC_InputBranch(); \
public: \
	DECLARE_CLASS(UC_InputBranch, USM_BranchBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StateMachinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UC_InputBranch) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUC_InputBranch(); \
	friend STATEMACHINEPLUGIN_API class UClass* Z_Construct_UClass_UC_InputBranch(); \
public: \
	DECLARE_CLASS(UC_InputBranch, USM_BranchBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StateMachinePlugin"), NO_API) \
	DECLARE_SERIALIZER(UC_InputBranch) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_InputBranch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_InputBranch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_InputBranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_InputBranch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_InputBranch(UC_InputBranch&&); \
	NO_API UC_InputBranch(const UC_InputBranch&); \
public:


#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_InputBranch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_InputBranch(UC_InputBranch&&); \
	NO_API UC_InputBranch(const UC_InputBranch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_InputBranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_InputBranch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_InputBranch)


#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RequiredButtons() { return STRUCT_OFFSET(UC_InputBranch, RequiredButtons); } \
	FORCEINLINE static uint32 __PPO__ForbiddenButtons() { return STRUCT_OFFSET(UC_InputBranch, ForbiddenButtons); } \
	FORCEINLINE static uint32 __PPO__AcceptableDirections() { return STRUCT_OFFSET(UC_InputBranch, AcceptableDirections); }


#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_13_PROLOG
#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_PRIVATE_PROPERTY_OFFSET \
	StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_RPC_WRAPPERS \
	StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_INCLASS \
	StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_PRIVATE_PROPERTY_OFFSET \
	StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_INCLASS_NO_PURE_DECLS \
	StateMachine_Source_StateMachinePlugin_C_InputBranch_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StateMachine_Source_StateMachinePlugin_C_InputBranch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
