// Fill out your copyright notice in the Description page of Project Settings.

#include "C_InputBranch.h"



USM_State* UC_InputBranch::TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 &OutDataIndex)
{
	OutDataIndex = DataIndex;

	if (RequiredButtons & ForbiddenButtons)
	{
		UE_LOG(LogTemp, Warning, TEXT("Impassable condition: Required button is also forbidden."));
		return nullptr;
	}

	// Make sure we have at least the minimum data here.
	if ((DataIndex + (int32)ECInputButtons::Count) >= DataSource.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("Error: Not enough data"));
		return nullptr;
	}

	// The first piece of data must be a DirectionalInput
	if (UCDirectionalInputAtom* DirectionalInput = Cast<UCDirectionalInputAtom>(DataSource[DataIndex]))
	{
		if (!(AcceptableDirections & (1 << (int32)DirectionalInput->InputDirection)))
		{
			return nullptr;
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Error: No directional input at index %i"), DataIndex);
		return nullptr;
	}
	++OutDataIndex;

	bool bRequiredButtonPressed = false;
	for (int32 i = 0; i < (int32)ECInputButtons::Count; ++i, ++OutDataIndex)
	{
		if (UCButtonInputAtom* ButtonAtom = Cast<UCButtonInputAtom>(DataSource[OutDataIndex]))
		{
			if (RequiredButtons & (1 << i))
			{
				if (ButtonAtom->ButtonState == ECButtonState::JustPressed)
				{
					bRequiredButtonPressed = true;
					continue;
				}
				else if (ButtonAtom->ButtonState == ECButtonState::HeldDown)
				{
					continue;
				}
				return nullptr;
			}
			else if (ForbiddenButtons & (1 << i))
			{
				// Any state other than having just pressed the forbidden button is OK, even holding it down.
				if (ButtonAtom->ButtonState != ECButtonState::JustPressed)
				{
					continue;
				}
				return nullptr;
			}
		}
		else
		{
			
			UE_LOG(LogTemp, Warning, TEXT("Error: Expected %d button inputs, only found %d."), (int32)ECInputButtons::Count, i);
			//UE_LOG(LogTemp, Warning, TEXT("Uh"));
			//float x = 2 + 2;
			return nullptr;
		}
	}
	// If there were any required buttons, make sure at least one of them was just pressed.
	if (RequiredButtons && !bRequiredButtonPressed)
	{
		return nullptr;
	}

	return DestinationState;
}

