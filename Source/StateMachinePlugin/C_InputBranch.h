// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SM_State.h"
#include "Controller_Atoms.h"
#include "C_InputBranch.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class STATEMACHINEPLUGIN_API UC_InputBranch : public USM_BranchBase
{
	GENERATED_BODY()
	
public:

	/* Consumes two types of input direction(s) and button */
	virtual USM_State* TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 &OutDataIndex)override;

protected:

	//These buttons must be Just Pressed or Held Down. If any are checked, at least one must be just pressed
	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "ECInputButtons"))
	int32 RequiredButtons;

	//These buttons must all be Up.
	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "ECInputButtons"))
	int32 ForbiddenButtons;

	// Required control-stick directions - at least one these must match the current input direction.
	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "ECInputDirections"))
	int32 AcceptableDirections;

	
};
