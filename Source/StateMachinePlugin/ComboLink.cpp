// Fill out your copyright notice in the Description page of Project Settings.

#include "ComboLink.h"
#include "OurPawn.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"




FStateMachineResult UComboLink::TryLink(const AOurPawn* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps)
{
	if (InputStateMachine && Move)
	{
		bool bCanCancel = false;
		for (const FVector2D& CancelWindow : CancelWindows)
		{
			 
			
			float OurCancelWindowX = RefObject->GetOurPawnFlipbook()->GetFlipbookLength() * 0.8;

			if (RefObject->GetTimeInMove() == FMath::Clamp(RefObject->GetTimeInMove(), OurCancelWindowX, CancelWindow.Y))
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