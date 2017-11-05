// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SM_State.h"
#include "Controller_Atoms.generated.h"

/*
	Direction input from joystick or whatever keyboard
*/
UENUM(Blueprintable, Meta = (Bitfalgs))
enum class ECInputDirections : uint8
{
	DownBack,
	Down,
	DownForward,
	Back,
	Neutral,
	Forward,
	UpBack,
	Up,
	UpForward
};

//Button state: is it currently up, Just pressed, held down, etc. Have the count if we want to charge.
UENUM(Blueprintable)
enum class ECButtonState : uint8 
{
	Up,
	JustPressed,
	HeldDown,
	Count UMETA(Hidden)
};

//Button Input, which actual button is doing these states above.
UENUM(Blueprintable, Meta = (Bitflags))
enum class ECInputButtons : uint8
{
	LeftFace,
	BottomFace,
	Count UMETA(Hidden)
};


UCLASS()
class STATEMACHINEPLUGIN_API UCDirectionalInputAtom : public USM_InputAtom
{
	GENERATED_BODY()

public:

	//Which direction we're describing with this atom.
	UPROPERTY(EditAnywhere)
	ECInputDirections InputDirection;

};


UCLASS()
class STATEMACHINEPLUGIN_API UCButtonInputAtom : public USM_InputAtom
{
	GENERATED_BODY()

public:

	//Which direction we're describing with this atom.
	UPROPERTY(EditAnywhere)
	ECButtonState InputDirection;

};

///**
// * 
// */
//UCLASS()
//class STATEMACHINEPLUGIN_API UController_Atoms : public USM_InputAtom
//{
//	GENERATED_BODY()
//	
//public:
//
//	
//	
//};
