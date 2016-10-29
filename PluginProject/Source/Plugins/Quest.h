// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataAsset.h"
#include "StateMachine/Classes/SM_State.h"
#include "Components/ActorComponent.h"
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
class PLUGINS_API UQuest : public UDataAsset
{
	GENERATED_BODY()
	
public:


	//Name of the Quest
	UPROPERTY(EditAnywhere)
	FText QuestName;

	//If this machine accepts our QuestActivities log, the quest is successful. 
	UPROPERTY(EditAnywhere)
	USM_State* QuestStateMachine;


	//if true, the input list is a blacklist. Otherwise it's a whitelist..
	UPROPERTY(EditAnywhere)
	uint32 bInputBlackList : 1;

	//The blacklist / whitelist (depending on bBlackList) used to fill InputAtoms this quest recognizes.
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> InputList;

	virtual void OnSuccess(class UQuestStatus* QuestStatus) const;
	virtual void OnFailed(class UQuestStatus* QuestStatus) const;
	
};

USTRUCT()
struct FQuestInProgress
{
	GENERATED_BODY()

		// Quest Data Asset.
	UPROPERTY(EditAnywhere)
	const UQuest* Quest;

		//Current progress in the quest
	UPROPERTY(EditAnywhere)
	EQuestCompletion QuestProgress;

protected:
	// All input for this quest. Filtered by the quest's blacklist/whitelist.
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> QuestActivites;

public:

	//Returns true if the quest was completed (Success or Failure) by the new activity.
	bool UpdateQuest(const UObject* ObjRef, USM_InputAtom* QuestActivity)
	{
		//Only log activity to valid, in-progress quests. Check the blacklist/whitelist before logging 
		if (Quest && (QuestProgress == EQuestCompletion::EQC_Started) && Quest->bInputBlackList != Quest->InputList.Contains(QuestActivity))
		{


			FStateMachineResult QuestResult;
			QuestActivites.Add(QuestActivity);
			QuestResult = Quest->QuestStateMachine->RunState(ObjRef, QuestActivites);
			switch (QuestResult.CompletionType)
			{
			case EStateMachineCompletionType::Accepted:
				QuestProgress = EQuestCompletion::EQC_Succeeded;
				return true;
			case EStateMachineCompletionType::Rejected:
				QuestProgress = EQuestCompletion::EQC_Failed;
				return true;
				//case NotAccepted: //Still in progress. No update needed.

			}
		}
		return false;
	}

	static FQuestInProgress NewQuestInProgress(const UQuest* _Quest)
	{
		FQuestInProgress NewQIP;
		NewQIP.Quest = _Quest;
		NewQIP.QuestProgress = EQuestCompletion::EQC_Started;
		return NewQIP;
	}
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PLUGINS_API UQuestStatus : public UActorComponent
{

	GENERATED_BODY()

public:

	//Sets default values for this component's value.
	UQuestStatus();

	//Called when the game starts.
	virtual void BeginPlay() override;

	//Called every frame
	virtual void TickComponent(float DeltaTime,	ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction) override;

	//Add to our quest activity log! this also automatically checks to see if unfinished quests are now complete.
	UFUNCTION(BlueprintCallable, Category = "Quests")
	void UpdateQuests(USM_InputAtom* QuestActivity);

	//Add a new quest in progress entry or begin the quest provided if it's already on the list and hasn't been started yet.

	UFUNCTION(BlueprintCallable, Category = "Quests")
	bool BeginQuest(const UQuest* Quest);

protected:

	//The master list of all quest-related things we've done.
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> QuestActivities;

	//The list of quests in our current game or area.
	UPROPERTY(EditAnywhere)
	TArray<FQuestInProgress> QuestList;

};

UCLASS()
class PLUGINS_API UQuestWithResult : public UQuest
{
	GENERATED_BODY()

public:

	virtual void OnSuccess(class UQuestStatus* QuestStatus) const override;
	virtual void OnFailed(class UQuestStatus* QuestStatus) const override;

protected:

	// The quest on this list will go from not started to started if the current quest succeeds. 
	UPROPERTY(EditAnywhere)
	TArray<UQuest*> SuccessQuests;

	//Input Atoms to add if the quest succeeds.
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> SuccessInputs;

	//The quest in this list will go from notStarted to Started if the current quest fails
	UPROPERTY(EditAnywhere)
	TArray<UQuest*> FailureQuests;

	//Input Atoms to add if the quest fails
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> FailedInputs;

};