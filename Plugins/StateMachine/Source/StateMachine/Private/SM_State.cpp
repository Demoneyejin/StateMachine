// Fill out your copyright notice in the Description page of Project Settings.

#include "SM_State.h"




USM_State::USM_State()
{
	//we loop our state by default
	bLoopByDefault = true;
}

USM_State* USM_BranchBase::TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource,
	int32 DataIndex, int32 &OutDataIndex) {
	OutDataIndex = DataIndex;
	return DestinationState;
}


USM_State * USM_Branch::TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource,
	int32 DataIndex, int32 &OutDataIndex)
{
	//the data we send out, is our current data index. Increase it by 1 for when we sned it out. 
	OutDataIndex = DataIndex + 1;

	//if we don't have anything in the acceptable inputs, return our destination state, unless we within the index and have acceptable inputs.
	if (DataSource.IsValidIndex(DataIndex) && AcceptableInputs.Contains(DataSource[DataIndex]))
	{
		
		return bReverseInputTest ? nullptr : DestinationState; //return reverse or destination
	}
	return bReverseInputTest ? DestinationState : nullptr;
}

FStateMachineResult USM_State::RunState(const UObject* RefObject,
	const TArray<USM_InputAtom*>& DataSource, int32 DataIndex /*= 0*/, int32 RemainingSteps /*= -1*/)
{
	
	//Either we terminate due to reaching the end of our data index or we hit the last state.
	bool bMustEndNow = (bTerminateImmediately || !DataSource.IsValidIndex(DataIndex));

	//If we have steps left and we're not ending..
	if (RemainingSteps && !bMustEndNow)
	{
		USM_State* DestinationState = nullptr;
		int32 DestinationDataIndex = DataIndex;
		for (int32 i = 0; i < InstancedBranches.Num(); ++i)
		{

			//This could be a check. There shouldn't be a null branch in the list.
			if (InstancedBranches[i])
			{
				//We try to branch, if the branch comes back with anything but null
				DestinationState = InstancedBranches[i]->TryBranch(RefObject, DataSource, DataIndex, DestinationDataIndex);
				if (DestinationState)
				{
					//We run that state
					return DestinationState->RunState(RefObject, DataSource, DestinationDataIndex, RemainingSteps - 1);
				}
			}
		}

		//checked after Instanced branches
		for (int32 i = 0; i < SharedBranches.Num(); ++i)
		{
			//This could be a check. There shouldn't be a null branches in the list.
			if (SharedBranches[i])
			{
				DestinationState = SharedBranches[i]->TryBranch(RefObject, DataSource, DataIndex, DestinationDataIndex);
				if (DestinationState)
				{
					return DestinationState->RunState(RefObject, DataSource, DestinationDataIndex, RemainingSteps);
				}
			}
		}

		//Exit out the for loop:
		//We didn't find any acceptable branches so we must end this unless we're told to loop.
		if (bLoopByDefault)
		{
			return LoopState(RefObject, DataSource, DataIndex, RemainingSteps);
		}
		bMustEndNow = true;
		
	}

	FStateMachineResult _StateMachineResult;
	_StateMachineResult.FinalState = this;
	_StateMachineResult.DataIndex = DataIndex;
	_StateMachineResult.CompletionType = bMustEndNow ? CompletionType : EStateMachineCompletionType::OutOfSteps;
	return _StateMachineResult;

}

FStateMachineResult USM_State::LoopState(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps)
{
	//Be default, Increase DataIndex by 1 and decrease RemainingSteps by 1
	return RunState(RefObject, DataSource, DataIndex + 1, RemainingSteps - 1);
}