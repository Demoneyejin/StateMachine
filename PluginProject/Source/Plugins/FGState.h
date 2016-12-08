// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SM_State.h"
#include "FGAtoms.h"
#include "FGState.generated.h"

/**
 * 
 */
UCLASS()
class PLUGINS_API UFGState : public USM_State
{
	GENERATED_BODY()
	
	// Loop. Used when input atom being processed isn't recognized. 
	virtual FStateMachineResult LoopState(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps) override;
	
	
};
