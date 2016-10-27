
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
	//Update the master list to everything we've done.
	QuestActivities.Add(QuestActivity);

	// Update Individual quests (if they care about these activities) and see if they are complete.
	for (int32 i = QuestList.Num() - 1; i >= 0; --i)
	{
		if (QuestList[i].UpdateQuest(this, QuestActivity))
		{
			UE_LOG(LogTemp, Warning, TEXT("Quest \" %s \" completed %s "), *QuestList[i].Quest->QuestName.ToString(),
				(QuestList[i].QuestProgress == EQuestCompletion::EQC_Succeeded) ? TEXT("Success") : TEXT("Failure"))
		}
	}
}
