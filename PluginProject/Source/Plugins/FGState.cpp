// Fill out your copyright notice in the Description page of Project Settings.

#include "Plugins.h"
#include "FGState.h"

FStateMachineResult UFGState::LoopState(const UObject * RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps)
{
	//By default, increase dataindex by 1 and decrease remainingsteps by 1.
	return RunState(RefObject, DataSource, DataIndex + 1 + (int32)EFGInputButtons::Count, RemainingSteps - 1);
}
