// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "SM_State.h"
#include "Quest.generated.h"



UENUM()
enum class EQuestCompletion : uint8
{
	EQC_NotStarted,
	EQC_Started,
	EQC_Succeeded,
	EQC_Failed
};

/**
 * 
 */
UCLASS()
class STATEMACHINEPLUGIN_API UQuest : public UDataAsset
{
	GENERATED_BODY()
	
public:

	//Name of the quest
	UPROPERTY(EditAnywhere)
	FText QuestName;

	//If this machine acceptes our uest Activities log, the quest is successful?
	UPROPERTY(EditAnywhere)
	USM_State* QuestStateMachine;

	//If true, the input list is a blacklist otherwise it's a whitelist.
	UPROPERTY(EditAnywhere)
	uint32 bInputBlacklist : 1;

	// the blacklist/whitelist used to filter input atoms this quest recognizes.
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> InputList;

	virtual void OnSucceed(class UQuestStatus* QuestStatus) const;
	virtual void OnFailed(class UQuestStatus* QuestStatus) const;
	
	
};

UCLASS()
class STATEMACHINEPLUGIN_API UQuestWithResult : public UQuest
{
	GENERATED_BODY()

public:

	virtual void OnSucceed(class UQuestStatus* QuestStatus) const override;
	virtual void OnFailed(class UQuestStatus* QuestStatus) const override;

protected:

	//The Quest in this list will go from not started to started if the quest succeeds
	UPROPERTY(EditAnywhere)
	TArray<UQuest*> SuccessQuests;

	//Input atom to add if the quest Succeeds
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> SuccessInputs;

	//The quest in the list will go from not started to started if the quest fails. 
	TArray<UQuest*> FailureQuests;

	//Input atom to add if the quest Succeeds
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> FailureInputs;

};


USTRUCT()
struct FQuestInProgress
{
	GENERATED_BODY()

	// Quest data asset.
	UPROPERTY(EditAnywhere)
	const UQuest* Quest;

	//Current quest progress.
	UPROPERTY(EditAnywhere)
	EQuestCompletion QuestProgress;


protected:
	// All input for this quest. Filtered by the quest's blacklist/whitelist.
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> QuestActivities;


public:

	//Returns true if the quest was completed (Success or failure) by the new activity.
	bool UpdateQuest(const UObject* ObjectRef, USM_InputAtom* QuestActivity)
	{
		// only log activity to valid, in-progress quests. Check the blacklist/whitelist before logging
		if (Quest && (QuestProgress == EQuestCompletion::EQC_Started) && (Quest->bInputBlacklist !=  Quest->InputList.Contains(QuestActivity)))
		{
			UE_LOG(LogTemp, Warning, TEXT("Checking to update quest"))

			FStateMachineResult QuestResult;
			QuestActivities.Add(QuestActivity);
			QuestResult = Quest->QuestStateMachine->RunState(ObjectRef, QuestActivities);
			switch (QuestResult.CompletionType)
			{
			case EStateMachineCompletionType::Accepted:
				QuestProgress = EQuestCompletion::EQC_Succeeded;
				return true;
			case EStateMachineCompletionType::Rejected:
				QuestProgress = EQuestCompletion::EQC_Failed;
				return true;
			}
		}
		return false;
	}

	static FQuestInProgress NewQuestInProgress(const UQuest* _Quest) {

		FQuestInProgress NewQIP;
		NewQIP.Quest = _Quest;
		NewQIP.QuestProgress = EQuestCompletion::EQC_Started;
		return NewQIP;
	}

};




UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class STATEMACHINEPLUGIN_API UQuestStatus : public UActorComponent
{
	GENERATED_BODY()

public:
	//sets default values for this component's properties
	UQuestStatus();

	//Called when the game starts
	virtual void BeginPlay() override;

	//Called every frame
	virtual void TickComponent(float DeltaSeconds, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	// Add to our quest activity log! THis also automatically checks to see if any unfinished quests are now complete.
	UFUNCTION(BlueprintCallable, Category = "Quest")
	void UpdateQuests(USM_InputAtom* QuestActivity);

	/*Adds a new quest in progress entry, or begins the quest provided if it's already on the list and 
	hasn't been started yet.*/
	UFUNCTION(BlueprintCallable, Category = "Quest")
	bool BeginQuest(const UQuest* Quest);


protected:


	// The master list of all quest-related things we've done.
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> QuestActivities;

	//The list of quests in our current game or area.
	UPROPERTY(EditAnywhere)
	TArray<FQuestInProgress> QuestList;
	 



};

