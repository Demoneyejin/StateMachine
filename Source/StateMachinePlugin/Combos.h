// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SM_State.h"
#include "PaperFlipbookComponent.h"
#include "Combos.generated.h"

class UComboLink;
class AOurPawn;

USTRUCT()
struct FComboLinkToFollow
{
	GENERATED_BODY()

		FComboLinkToFollow()
	{
		Link = nullptr;
	}

	UPROPERTY()
	UComboLink* Link;

	UPROPERTY()
	FStateMachineResult SMR;
};

/**
 * 
 */
UCLASS()
class STATEMACHINEPLUGIN_API UCombos : public UDataAsset
{
	GENERATED_BODY()
	
public:
	//Tries all the links, returns the best one to follow and the result of the state machine that got there.
	FComboLinkToFollow TryLinks(const AOurPawn* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex = 0, int32 RemainingSteps = -1);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName MoveName;
	
	//Animation to play while doing this move(Checking to see which one actually sets up the right flipbook..)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UPaperFlipbook* Animation;

	// Link this moves to others
	UPROPERTY(EditAnywhere)
	TArray<UComboLink*> LinkedMoves;

	//Clears input buffer when entering this state
	UPROPERTY(EditAnywhere)
	uint32 bClearInputOnEntry : 1;

	//Clears input buffer when exiting this state
	UPROPERTY(EditAnywhere)
	uint32 bClearInputOnExit : 1;

};
