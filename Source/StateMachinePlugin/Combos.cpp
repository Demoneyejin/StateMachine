// Fill out your copyright notice in the Description page of Project Settings.

#include "Combos.h"
#include "ComboLink.h"
#include "OurPawn.h"




FComboLinkToFollow UCombos::TryLinks(const AOurPawn* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps)
{
	FComboLinkToFollow ResultLink;

	for (int32 i = 0; i < LinkedMoves.Num(); ++i)
	{
		check(LinkedMoves[i]);

		//Grab the result of trying this link
		ResultLink.SMR = LinkedMoves[i]->TryLink(RefObject, DataSource, DataIndex, RemainingSteps);
		if (ResultLink.SMR.CompletionType == EStateMachineCompletionType::Accepted) //if the result is accepted
		{
			//get that link and place it into our result link
			ResultLink.Link = LinkedMoves[i];
			return ResultLink;
		}
	}
	return ResultLink;
}