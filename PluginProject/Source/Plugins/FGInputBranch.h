// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SM_State.h"
#include "FGAtoms.h"
#include "FGInputBranch.generated.h"

/**
 * 
 */
UCLASS()
class PLUGINS_API UFGInputBranch : public USM_BranchBase
{
	GENERATED_BODY()
	
public:

	/** Consumes 2 types of input- Direction + Button(s). */
	virtual USM_State* TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 &OutDataIndex) override;

protected:
	// These buttons must be just pressed or Held Down. If any are checked, at least one must be just pressed
	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "EFGInputButtons"))
	int32 RequiredButtons;
	
	//These buttons must all be Up.
	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "EFGInputButtons"))
	int32 ForbiddenButtons;

	//Required Control- stick directions - at least one of these must match the current input directions. 
	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "EFGInputDirections"))
	int32 AcceptableDirections;

	
};
