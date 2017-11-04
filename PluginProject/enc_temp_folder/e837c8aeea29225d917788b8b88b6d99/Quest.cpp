// Fill out your copyright notice in the Description page of Project Settings.

#include "Quest.h"

UQuestStatus::UQuestStatus()
{
	//Nada
}


//things that on begin play we execute.
void UQuestStatus::BeginPlay()
{
	Super::BeginPlay();

}

//Called every frame
void UQuestStatus::TickComponent(float DeltaSeconds, ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	Super::TickComponent(DeltaSeconds, TickType, ThisTickFunction);

}

void UQuestStatus::UpdateQuests(USM_InputAtom * QuestActivity)
{

	TArray<int32> RecentlyCompletedQuests;

	//Update the master list of everything we've ever done.
	QuestActivities.Add(QuestActivity);

	//Update individual quests( if they care about this acitivity) and see if they are complete.
	for (int32 i = QuestList.Num() - 1; i >= 0; --i)
	{
		if (QuestList[i].UpdateQuest(this, QuestActivity))
		{
			RecentlyCompletedQuests.Add(i);
		}
	}

	//Process completed quests after updating  all quests.
	//This way, a completed quest can't inject out-of-order input atoms into other quests.
	for (int32 i = RecentlyCompletedQuests.Num() - 1; i >= 0; --i)
	{
		FQuestInProgress& QIP = QuestList[RecentlyCompletedQuests[i]];
		if (QIP.QuestProgress == EQuestCompletion::EQC_Succeeded)
		{
			QIP.Quest->OnSucceed(this);
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
				UE_LOG(LogTemp, Warning, TEXT("Changing quest \"%s\" to started status."), *QIP.Quest->QuestName.ToString());
				QIP.QuestProgress = EQuestCompletion::EQC_Started;
				return true;
			}
			UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" is already started."), *QIP.Quest->QuestName.ToString());
			return false;
		}
		
	}
	UE_LOG(LogTemp, Warning, TEXT("Adding quest \"%s\" to the list and starting it."), *Quest->QuestName.ToString());
	QuestList.Add(FQuestInProgress::NewQuestInProgress(Quest));
	return true;
	
}

void UQuest::OnSucceed(UQuestStatus * QuestStatus) const
{
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" succeeded!"), *QuestName.ToString());
}

void UQuest::OnFailed(UQuestStatus * QuestStatus) const
{
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" failed!"), *QuestName.ToString());
}

void UQuestWithResult::OnSucceed(UQuestStatus * QuestStatus) const
{
	Super::OnSucceed(QuestStatus);

	for (UQuest* SuccessQuest : SuccessQuests)
	{
		QuestStatus->BeginQuest(SuccessQuest);
	}

	for (int32 i = 0; i < SuccessQuests.Num(); ++i)
	{
		QuestStatus->UpdateQuests(SuccessInputs[i]);
	}

}

void UQuestWithResult::OnFailed(UQuestStatus * QuestStatus) const
{
	Super::OnFailed(QuestStatus);

	for (UQuest* FailureQuest : FailureQuests)
	{
		QuestStatus->BeginQuest(FailureQuest);
	}

	for (int32 i = 0; i < FailureQuests.Num(); ++i)
	{
		QuestStatus->UpdateQuests(FailureInputs[i]);
	}
}
