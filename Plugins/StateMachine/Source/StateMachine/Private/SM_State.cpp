// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachinePrivatePCH.h"
#include "SM_State.h"




USM_State::USM_State()
{
	bLoopByDefault = true;
}

USM_State* USM_Branch::TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 &OutDataIndex)
{
	OutDataIndex = DataIndex +1;
	if ( (DataSource.IsValidIndex(DataIndex) && AcceptableInputs.Contains(DataSource[DataIndex])))
	{
		
		return bReverseInputTest ? nullptr : DestinationState;
	}
	return bReverseInputTest ? DestinationState : nullptr;
}

FStateMachineResult USM_State::RunState(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex /*= 0*/, int32 RemainingSteps  /*= -1*/)
{

	bool bMustEndNow = (bTerminateImmediately || !DataSource.IsValidIndex(DataIndex));

	//If we're still running,  see where our branches lead.
	if (RemainingSteps && !bMustEndNow)
	{
		USM_State* DestinationState = nullptr;
		int32 DestinationDataIndex = DataIndex;

		for (int32 i = 0; i < InstancedBranches.Num(); ++i)
		{

			//this could be a check. There shouldn't be any null branches in the list
			if (InstancedBranches[i])
			{
				DestinationState = InstancedBranches[i]->TryBranch(RefObject, DataSource, DataIndex, DestinationDataIndex);

				if (DestinationState)
				{
					return DestinationState->RunState(RefObject, DataSource, DestinationDataIndex, RemainingSteps - 1);
				}
			}
			
		}
		//We didn't find any acceptable branch, so we must end on this state unless we're told to loop.

		if (bLoopByDefault)
		{
			return LoopState(RefObject, DataSource, DataIndex, RemainingSteps);
		}
		bMustEndNow = true;
	}

	FStateMachineResult SMR;
	SMR.FinalState = this;
	SMR.DataIndex = DataIndex;
	SMR.CompletionType = bMustEndNow ? CompletionType : EStateMachineCompletionType::OutOfSteps;
	return SMR;
		
}


FStateMachineResult USM_State::LoopState(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps)
{

	//By default, increase dataindex by 1 and decrease remainingsteps by 1.
	return RunState(RefObject, DataSource, DataIndex + 1, RemainingSteps - 1);
}