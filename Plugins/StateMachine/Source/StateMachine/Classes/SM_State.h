// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataAsset.h"
#include "SM_State.generated.h"


UENUM()
enum class EStateMachineCompletionType : uint8 {
	//Implicit Faliure - This state is not marked as accepted
	NotAccepted,

	//Success - this state is an accept state.
	Accepted,

	// Explicit Failure - this state is specfically marked as failure /not-accepted.
	Rejected,

	//our simulation ran out of stteps while the machine was still running. 
	OutOfSteps UMETA(Hidden)
};


USTRUCT()
struct STATEMACHINE_API FStateMachineResult{

	GENERATED_BODY()


	UPROPERTY()
	EStateMachineCompletionType CompletionType;

	UPROPERTY()
	USM_State* FinalState;

	UPROPERTY()
	uint32 DataIndex;

};

UCLASS()
class STATEMACHINE_API USM_InputAtom : public UDataAsset {

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName description;

};

UCLASS(EditInlineNew)
class STATEMACHINE_API USM_Branch : public UDataAsset
{
	GENERATED_BODY()

public:
	/** Returns DestinationState on sucess, NULL on failure. For Subclasses, 
	    OutDataIndex might be something other than 1, if a branch is made to consume multiple inputs.*/

	virtual USM_State* TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>&  DataSource,
		uint32 DataIndex, uint32 *OutDataIndex);
	
protected:

	//STate whre we will go next if this branch is taken. if Null, this branch will be ignored.

	UPROPERTY(EditAnywhere)
	USM_State* DestinationState;

	//If true, the meaning of Acceptable Inputs is reversed.
	UPROPERTY(EditAynwhere)
	uint32 bReverseInputTest : 1; 


	// Acceptable inputs. The current input atom must be on this list. 
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> AcceptableInputs;

};

/**
 * 
 */
UCLASS()
class STATEMACHINE_API USM_State : public UDataAsset
{
	GENERATED_BODY()
private:

public:

	USM_State();

	/**Attempt to run the state with input from the given DataSource object.
	   Will start reading input at DataIndex.
	   Will decrement RemainingSteps and automatically fail after it hits 0.
	   */
	UFUNCTION(BlueprintCallable, Category = "State Machine")
		virtual FStateMachineResult RunState(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, int32 DataIndex/* = 0*/,
			uint32 RemainingSteps/* = -1*/);

p
rotected:

	// Loop. Used when input atom being processed isn't recognized. 
	virtual FStateMachineResult LoopState(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource, uint32 DataIndex = 0,
		uint32 RemainingSteps);


	// If input runs out on this state( or TerminateImmediate is true). This is how the result will be interpreted.
	UPROPERTY(EditAnywhere)
	EStateMachineCompletionType CompletionType;

	//A state machine run that enters this state will terminate immediately. regardless of whether or not there is more input data. 
	UPROPERTY(EditAnywhere)
	uint32 bTerminateImmediately : 1;

	// if this is a set, this state will loop on itself whenever an unhandled input atom is detected. 
	uint32 bLoopByDefault : 1;

	// Branches to other states. These are in priority order, so the first successful branch will be taken. 
	UPROPERTY(EditAnywhere, Instanced)
	TArray<USM_Branch*> InstancedBranches;	
	
};
