
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
	for(int32 i =)
}


void UQuest::OnSuccess(class UQuestStatus* QuestStatus) const
{
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" succeeded!"), *QuestName.ToString())
}
void UQuest::OnFailed(class UQuestStatus* QuestStatus) const
{
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" has failed"), *QuestName.ToString())
}