// Fill out your copyright notice in the Description page of Project Settings.

#include "C_State.h"




FStateMachineResult UC_State::LoopState(const UObject* RefObject,
	const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps)
{
	return RunState(RefObject, DataSource, DataIndex + 1 + (int32)ECInputButtons::Count, RemainingSteps -1);
}
