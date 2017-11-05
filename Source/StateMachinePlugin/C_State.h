// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Controller_Atoms.h"
#include "C_State.generated.h"

/**
 * 
 */
UCLASS()
class STATEMACHINEPLUGIN_API UC_State : public USM_State
{
	GENERATED_BODY()
	
public:
		virtual FStateMachineResult LoopState(const UObject* RefObject,
			const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps)override;
};
