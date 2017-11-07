// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Controller_Atoms.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeController_Atoms() {}
// Cross Module References
	STATEMACHINEPLUGIN_API UEnum* Z_Construct_UEnum_StateMachinePlugin_ECInputButtons();
	UPackage* Z_Construct_UPackage__Script_StateMachinePlugin();
	STATEMACHINEPLUGIN_API UEnum* Z_Construct_UEnum_StateMachinePlugin_ECButtonState();
	STATEMACHINEPLUGIN_API UEnum* Z_Construct_UEnum_StateMachinePlugin_ECInputDirections();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UCDirectionalInputAtom_NoRegister();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UCDirectionalInputAtom();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UCButtonInputAtom_NoRegister();
	STATEMACHINEPLUGIN_API UClass* Z_Construct_UClass_UCButtonInputAtom();
// End Cross Module References
	static UEnum* ECInputButtons_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StateMachinePlugin_ECInputButtons, Z_Construct_UPackage__Script_StateMachinePlugin(), TEXT("ECInputButtons"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECInputButtons(ECInputButtons_StaticEnum, TEXT("/Script/StateMachinePlugin"), TEXT("ECInputButtons"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StateMachinePlugin_ECInputButtons_CRC() { return 1172629870U; }
	UEnum* Z_Construct_UEnum_StateMachinePlugin_ECInputButtons()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachinePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECInputButtons"), 0, Get_Z_Construct_UEnum_StateMachinePlugin_ECInputButtons_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECInputButtons::LeftFace", (int64)ECInputButtons::LeftFace },
				{ "ECInputButtons::BottomFace", (int64)ECInputButtons::BottomFace },
				{ "ECInputButtons::Count", (int64)ECInputButtons::Count },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Controller_Atoms.h" },
				{ "ToolTip", "Button Input, which actual button is doing these states above." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StateMachinePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECInputButtons",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECInputButtons",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECButtonState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StateMachinePlugin_ECButtonState, Z_Construct_UPackage__Script_StateMachinePlugin(), TEXT("ECButtonState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECButtonState(ECButtonState_StaticEnum, TEXT("/Script/StateMachinePlugin"), TEXT("ECButtonState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StateMachinePlugin_ECButtonState_CRC() { return 3543275630U; }
	UEnum* Z_Construct_UEnum_StateMachinePlugin_ECButtonState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachinePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECButtonState"), 0, Get_Z_Construct_UEnum_StateMachinePlugin_ECButtonState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECButtonState::Up", (int64)ECButtonState::Up },
				{ "ECButtonState::JustPressed", (int64)ECButtonState::JustPressed },
				{ "ECButtonState::HeldDown", (int64)ECButtonState::HeldDown },
				{ "ECButtonState::Count", (int64)ECButtonState::Count },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Count.Hidden", "" },
				{ "ModuleRelativePath", "Controller_Atoms.h" },
				{ "ToolTip", "Button state: is it currently up, Just pressed, held down, etc. Have the count if we want to charge." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StateMachinePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECButtonState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECButtonState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECInputDirections_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StateMachinePlugin_ECInputDirections, Z_Construct_UPackage__Script_StateMachinePlugin(), TEXT("ECInputDirections"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECInputDirections(ECInputDirections_StaticEnum, TEXT("/Script/StateMachinePlugin"), TEXT("ECInputDirections"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StateMachinePlugin_ECInputDirections_CRC() { return 788252830U; }
	UEnum* Z_Construct_UEnum_StateMachinePlugin_ECInputDirections()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachinePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECInputDirections"), 0, Get_Z_Construct_UEnum_StateMachinePlugin_ECInputDirections_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECInputDirections::DownBack", (int64)ECInputDirections::DownBack },
				{ "ECInputDirections::Down", (int64)ECInputDirections::Down },
				{ "ECInputDirections::DownForward", (int64)ECInputDirections::DownForward },
				{ "ECInputDirections::Back", (int64)ECInputDirections::Back },
				{ "ECInputDirections::Neutral", (int64)ECInputDirections::Neutral },
				{ "ECInputDirections::Forward", (int64)ECInputDirections::Forward },
				{ "ECInputDirections::UpBack", (int64)ECInputDirections::UpBack },
				{ "ECInputDirections::Up", (int64)ECInputDirections::Up },
				{ "ECInputDirections::UpForward", (int64)ECInputDirections::UpForward },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitfalgs", "" },
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Controller_Atoms.h" },
				{ "ToolTip", "Direction input from joystick or whatever keyboard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StateMachinePlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECInputDirections",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECInputDirections",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCDirectionalInputAtom::StaticRegisterNativesUCDirectionalInputAtom()
	{
	}
	UClass* Z_Construct_UClass_UCDirectionalInputAtom_NoRegister()
	{
		return UCDirectionalInputAtom::StaticClass();
	}
	UClass* Z_Construct_UClass_UCDirectionalInputAtom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USM_InputAtom,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachinePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Controller_Atoms.h" },
				{ "ModuleRelativePath", "Controller_Atoms.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputDirection_MetaData[] = {
				{ "Category", "CDirectionalInputAtom" },
				{ "ModuleRelativePath", "Controller_Atoms.h" },
				{ "ToolTip", "Which direction we're describing with this atom." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputDirection = { UE4CodeGen_Private::EPropertyClass::Enum, "InputDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCDirectionalInputAtom, InputDirection), Z_Construct_UEnum_StateMachinePlugin_ECInputDirections, METADATA_PARAMS(NewProp_InputDirection_MetaData, ARRAY_COUNT(NewProp_InputDirection_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputDirection_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputDirection_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCDirectionalInputAtom>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCDirectionalInputAtom::StaticClass,
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
	IMPLEMENT_CLASS(UCDirectionalInputAtom, 870919386);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCDirectionalInputAtom(Z_Construct_UClass_UCDirectionalInputAtom, &UCDirectionalInputAtom::StaticClass, TEXT("/Script/StateMachinePlugin"), TEXT("UCDirectionalInputAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDirectionalInputAtom);
	void UCButtonInputAtom::StaticRegisterNativesUCButtonInputAtom()
	{
	}
	UClass* Z_Construct_UClass_UCButtonInputAtom_NoRegister()
	{
		return UCButtonInputAtom::StaticClass();
	}
	UClass* Z_Construct_UClass_UCButtonInputAtom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USM_InputAtom,
				(UObject* (*)())Z_Construct_UPackage__Script_StateMachinePlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Controller_Atoms.h" },
				{ "ModuleRelativePath", "Controller_Atoms.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonState_MetaData[] = {
				{ "Category", "CButtonInputAtom" },
				{ "ModuleRelativePath", "Controller_Atoms.h" },
				{ "ToolTip", "Which direction we're describing with this atom." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonState = { UE4CodeGen_Private::EPropertyClass::Enum, "ButtonState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCButtonInputAtom, ButtonState), Z_Construct_UEnum_StateMachinePlugin_ECButtonState, METADATA_PARAMS(NewProp_ButtonState_MetaData, ARRAY_COUNT(NewProp_ButtonState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonState_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCButtonInputAtom>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCButtonInputAtom::StaticClass,
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
	IMPLEMENT_CLASS(UCButtonInputAtom, 3374375635);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCButtonInputAtom(Z_Construct_UClass_UCButtonInputAtom, &UCButtonInputAtom::StaticClass, TEXT("/Script/StateMachinePlugin"), TEXT("UCButtonInputAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCButtonInputAtom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
