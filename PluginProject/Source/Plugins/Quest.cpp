
// Fill out your copyright notice in the Description page of Project Settings.

#include "Plugins.h"
#include "Quest.h"



UQuestStatus::UQuestStatus()
{
	//constructor
}

void UQuestStatus::BeginPlay()
{
	Super::BeginPlay();

	//.....
}

void UQuestStatus::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	//....
}

void UQuestStatus::UpdateQuests(USM_InputAtom * QuestActivity)
{
	TArray<int32> RecentlyCompletedQuests;
	//Update the master list to everything we've done.
	QuestActivities.Add(QuestActivity);

	// Update Individual quests (if they care about these activities) and see if they are complete.
	for (int32 i = QuestList.Num() - 1; i >= 0; --i)
	{
		if (QuestList[i].UpdateQuest(this, QuestActivity))
		{
			RecentlyCompletedQuests.Add(i); 
		}
	}

	//process completed quests after updating all quests.
	// this way, a completed quest can't inject out of order input atoms into our other quests.
	for (int32 i = RecentlyCompletedQuests.Num() - 1; i >= 0; --i)
	{
		FQuestInProgress& QIP = QuestList[RecentlyCompletedQuests[i]];
		if (QIP.QuestProgress == EQuestCompletion::EQC_Succeeded)
		{
			QIP.Quest->OnSuccess(this);
		}
		else
		{
			QIP.Quest->OnFailed(this);
		}
		RecentlyCompletedQuests.RemoveAtSwap(i);
	}
}

bool UQuestStatus::BeginQuest(const UQuest * Quest)
{
	for (FQuestInProgress& QIP : QuestList)
	{
		if (QIP.Quest == Quest)
		{
			if (QIP.QuestProgress == EQuestCompletion::EQC_NotStarted)
			{
				UE_LOG(LogTemp, Warning, TEXT("Changing Quest \" %s \" to started"), *QIP.Quest->QuestName.ToString())
				QIP.QuestProgress = EQuestCompletion::EQC_Started;
				return true;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Quest \" %s \" is already on the list."), *QIP.Quest->QuestName.ToString())
				return false;
			}
		}
	}
	//If we did not find any quests then it wasn't even in the list at all, so we're gonna add it and start it. 
	UE_LOG(LogTemp, Warning, TEXT("Adding quest \" %s \" to the list and starting it."), *Quest->QuestName.ToString())
	QuestList.Add(FQuestInProgress::NewQuestInProgress(Quest));
	return true;
}


void UQuest::OnSuccess(class UQuestStatus* QuestStatus) const
{
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" succeeded!"), *QuestName.ToString())
}
void UQuest::OnFailed(class UQuestStatus* QuestStatus) const
{
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" has failed"), *QuestName.ToString())
}

void UQuestWithResult::OnSuccess(class UQuestStatus* QuestStatus) const
{
	Super::OnSuccess(QuestStatus);

	for (UQuest* SuccessQuest : SuccessQuests)
	{
		QuestStatus->BeginQuest(SuccessQuest);
	}

	for (int32 i = 0; i < SuccessInputs.Num(); ++i)
	{
		QuestStatus->UpdateQuests(SuccessInputs[i]);
	}
}

void UQuestWithResult::OnFailed(UQuestStatus * QuestStatus) const
{
	Super::OnFailed(QuestStatus);

	for (UQuest* FailedQuest : FailureQuests)
	{
		QuestStatus->BeginQuest(FailedQuest);
	}

	for (int32 i = 0; i < FailedInputs.Num(); ++i)
	{
		QuestStatus->UpdateQuests(FailedInputs[i]);
	}
}
