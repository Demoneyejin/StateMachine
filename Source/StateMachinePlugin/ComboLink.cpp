// Fill out your copyright notice in the Description page of Project Settings.

#include "ComboLink.h"
#include "OurPawn.h"




FStateMachineResult UComboLink::TryLink(const AOurPawn* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps)
{
	if (InputStateMachine && Move)
	{
		bool bCanCancel = false;
		for (const FVector2D& CancelWindow : CancelWindows)
		{
			if (RefObject->GetTimeInMove() == FMath::Clamp(RefObject->GetTimeInMove(), CancelWindow.X, CancelWindow.Y))
			{
				bCanCancel = true;
				break;
			}
		}

		//If no cancel windows are provided, assume the move is always available.
		if (bCanCancel || !CancelWindows.Num())
		{
			return InputStateMachine->RunState(RefObject, DataSource, DataIndex, RemainingSteps);
		}
	}
	return FStateMachineResult();
}