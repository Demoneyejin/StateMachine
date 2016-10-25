// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachinePrivatePCH.h"
#include "SM_State.h"




USM_State::USM_State()
{
	bLoopByDefault = true;
}

USM_State* USM_Branch::TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>&  DataSource, uint32 DataIndex, uint32 *OutDataIndex)
{
	OutDataIndex = DataIndex;
	if (!AcceptableInputs.Num() || (DataSource.IsValidIndex(DataIndex) &&
		AcceptableInputs.Contains(DataSource[DataIndex]))
	{
		++OutDataIndex;
		return bReverseInputTest ? nullptr : DestinationState;
	}
	return bReverseInputTest ? DestinationState : nullptr;
}

FStateMachineResult USM_State::RunState(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex/* = 0*/,
	uint32 RemainingSteps /*= -1*/)
{

	bool bMustEndNow = (bTerminateImmediately || !DataSource.IsValidIndex(DataIndex));

	//If we're still running,  see where our branches lead.
	if (RemainingSteps && !bMustEndNow)
	{

	}
}