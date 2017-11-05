// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Controller_Atoms.h"
#include "C_State.h"
#include "ComboLink.generated.h"


class AOurPawn;
class UCombos;
/**
 * 
 */
UCLASS()
class STATEMACHINEPLUGIN_API UComboLink : public UDataAsset
{
	GENERATED_BODY()
	
public:
	//Tries all the links, returns the best one to follow and the result of the state machine that got there.
	FStateMachineResult TryLink(const AOurPawn* RefObject,
		const TArray<USM_InputAtom*>& DataSource, int32 DataIndex = 0, int32 RemainingSteps = -1);

	//The move 
	UPROPERTY(EditAnywhere)
	UCombos* Move;

	// Set of window (in seconds) when this link can be used.
	UPROPERTY(EditAnywhere)
	TArray<FVector2D> CancelWindows;

	//Clear input buffer when using this link
	UPROPERTY(EditAnywhere)
	uint32 bClearInput : 1;

	//Sequence of inputs used to trigger this move. if not NULL, will override move's own input state
	UPROPERTY(EditAnywhere)
	UC_State* InputStateMachine;
	
};
