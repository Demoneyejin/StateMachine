// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "OurMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class STATEMACHINEPLUGIN_API UOurMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()
	

public:

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	//Increase or Decrease the speed at which your character can move
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Velocity|Speed")
	float MovementSpeed;
	
	
	
};
