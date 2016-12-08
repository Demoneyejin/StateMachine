// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SM_State.h"
#include "FGAtoms.generated.h"

/**
Direction input for our state machine*/
UENUM(Blueprintable, Meta =(Bitflags))
enum class EFGInputDirections : uint8
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

/***
?Something to consider for Wasabi's combo system?**/
UENUM()
enum class EFGButtonState : uint8
{
	Up,
	JustPressed,
	HeldDown,
	Count UMETA(Hidden)
};

UENUM(Blueprintable, Meta = (Bitflags))
enum class EFGInputButtons : uint8
{
	LeftFace,
	TopFace,
	Count UMETA(Hidden)
};

UCLASS()
class PLUGINS_API UFGDirectionalInputAtom : public USM_InputAtom
{
	GENERATED_BODY()

public:

	//Which direction we're describing with this atom
	UPROPERTY(EditAnywhere)
	EFGInputDirections InputDirection; // the enum class we made hehe.
};

/**
? Consider for Wasabi for button states, so we know when we're holding down, pressing and unpressed shit.**/
UCLASS()
class PLUGINS_API UFGButtonInputAtom : public USM_InputAtom
{
	GENERATED_BODY()
public:
	// State of the button being described.
	EFGButtonState ButtonState; //Our enum button state. 
};




/**
 * Just a data structure class,
   Derive from this class to get this functionality for your player.
 */
UCLASS()
class PLUGINS_API UFGAtoms : public USM_InputAtom
{
	GENERATED_BODY()
	
	
	
	
};
