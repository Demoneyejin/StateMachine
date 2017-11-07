// Fill out your copyright notice in the Description page of Project Settings.

#include "OurPawn.h"
#include "Controller_Atoms.h"
#include "Combos.h"
#include "ComboLink.h"
#include "OurMovementComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"


// Sets default values
AOurPawn::AOurPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InputExpirationTime = 2.5f;


	//Our Custom Movement Component
	PawnMovementComp = CreateDefaultSubobject<UOurMovementComponent>(TEXT("Movement Component"));
	PawnMovementComp->UpdatedComponent = RootComponent;

}

// Called when the game starts or when spawned
void AOurPawn::BeginPlay()
{
	Super::BeginPlay();

	if (!CurrentMove)
	{
		UE_LOG(LogTemp, Warning, TEXT("No initial move."));
		Destroy();
		return;
	}
	//Check that we have all the states we need.
	if (!DirectionDownBackAtom || !DirectionDownAtom || !DirectionDownForwardAtom
		|| !DirectionBackAtom || !DirectionNeutralAtom || !DirectionForwardAtom
		|| !DirectionUpBackAtom || !DirectionUpAtom || !DirectionUpForwardAtom)
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing at least one direction atom"));

	}

	int32 ButtonInputCount = (int32)ECButtonState::Count;
	for (int32 i = 0; i < ButtonInputCount; ++i)
	{
		if (!ButtonAtoms.IsValidIndex(i) || !ButtonAtoms[i])
		{
			UE_LOG(LogTemp, Warning, TEXT("Not enough button input atoms, or a NULL entry was found in the list."));
			Destroy();
			return;
		}
	}

	//Get a reference to our flipbook component.
	OurFlipbook = FindComponentByClass<UPaperFlipbookComponent>();
	if (OurFlipbook == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("We were unable to get a reference to our flipbook component"))
		Destroy();
		return;
	}
	
}



// Called every frame
void AOurPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float DirectionThreshold = 0.5f;
	UCDirectionalInputAtom* InputDirection = nullptr;
	if (DirectionInput.X < -DirectionThreshold)
	{
		if (DirectionInput.Y < -DirectionThreshold)
		{
			InputDirection = DirectionDownBackAtom;
		}
		else if (DirectionInput.Y < DirectionThreshold)
		{
			InputDirection = DirectionBackAtom;
		}
		else
		{
			InputDirection = DirectionUpBackAtom;
		}
	}
	else if (DirectionInput.X < DirectionThreshold)
	{
		if (DirectionInput.Y < -DirectionThreshold)
		{
			InputDirection = DirectionDownAtom;
		}
		else if (DirectionInput.Y < DirectionThreshold)
		{
			InputDirection = DirectionNeutralAtom;
		}
		else
		{
			InputDirection = DirectionUpAtom;
		}
	}
	else
	{
		if (DirectionInput.Y < -DirectionThreshold)
		{
			InputDirection = DirectionDownForwardAtom;
		}
		else if (DirectionInput.Y < DirectionThreshold)
		{
			InputDirection = DirectionForwardAtom;
		}
		else
		{
			InputDirection = DirectionUpForwardAtom;
		}
	}
	InputStream.Add(InputDirection);

	// Add one atom for each button's state.
	for (int32 i = 0; i < (int32)ECInputButtons::Count; ++i)
	{
		if (ButtonsDown & (1 << i))
		{
			if (ButtonsDown_Old & (1 << i))
			{
				InputStream.Add(ButtonAtoms[(int32)ECButtonState::HeldDown]);
			}
			else
			{
				InputStream.Add(ButtonAtoms[(int32)ECButtonState::JustPressed]);
			}
		}
		else
		{
			InputStream.Add(ButtonAtoms[(int32)ECButtonState::Up]);
		}
	}

	// Always add an input time stamp to match the input sequence.
	float CurrentTime = UKismetSystemLibrary::GetGameTimeInSeconds(this);
	InputTimeStamps.Add(CurrentTime);

	// Cache old button state so we can distinguish between held and just pressed.
	ButtonsDown_Old = ButtonsDown;

	// Prune old inputs. This would be better-suited to a ringbuffer than an array, but it's not much data.
	for (int32 i = 0; i < InputStream.Num(); ++i)
	{
		if ((InputTimeStamps[i] + InputExpirationTime) >= CurrentTime)
		{
			// Remove everything before this, then exit the loop.
			if (i > 0)
			{
				InputTimeStamps.RemoveAt(0, i, false);
				InputStream.RemoveAt(0, i * ((int32)ECInputButtons::Count + 1), false);
			}
			break;
		}
	}

	FComboLinkToFollow MoveLinkToFollow = CurrentMove->TryLinks(this, InputStream);
	if (MoveLinkToFollow.SMR.CompletionType == EStateMachineCompletionType::Accepted)
	{

		if (MoveLinkToFollow.Link->Move->MoveName.ToString().Contains(FString("Attack")))
		{
			IsDoingMove = true;
		}
		else
		{
			IsDoingMove = false;
		}
		UE_LOG(LogTemp, Warning, TEXT("Switching to state %s"), *MoveLinkToFollow.Link->Move->MoveName.ToString());
		if (MoveLinkToFollow.Link->bClearInput || MoveLinkToFollow.Link->Move->bClearInputOnEntry || CurrentMove->bClearInputOnExit)
		{
			InputStream.Reset();
			InputTimeStamps.Reset();
		}
		else if (MoveLinkToFollow.SMR.DataIndex)
		{
			// Consume the input we used to get to this move.
			check((MoveLinkToFollow.SMR.DataIndex % (1 + (int32)ECInputButtons::Count)) == 0);
			InputTimeStamps.RemoveAt(0, MoveLinkToFollow.SMR.DataIndex / 3, false);
			InputStream.RemoveAt(0, MoveLinkToFollow.SMR.DataIndex, false);
		}

		// Set and start the new move.
		CurrentMove = MoveLinkToFollow.Link->Move;
		TimeInCurrentMove = 0.0f;
		DoMove(CurrentMove);
	}
	else
	{
		TimeInCurrentMove += DeltaTime;		// Modulate by move animation length
		
	}
}

// Called to bind functionality to input
void AOurPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("XAxis", this, &AOurPawn::ReadXAxis);
	InputComponent->BindAxis("YAxis", this, &AOurPawn::ReadYAxis);
	InputComponent->BindAction("Attack", IE_Pressed, this, &AOurPawn::LeftButtonPressed);
	InputComponent->BindAction("Attack", IE_Released, this, &AOurPawn::LeftButtonReleased);
	InputComponent->BindAction("Dodge", IE_Pressed, this, &AOurPawn::BottomButtonPressed);
	InputComponent->BindAction("Dodge", IE_Released, this, &AOurPawn::BottomButtonReleased);

}

void AOurPawn::LeftButtonPressed()
{
	ButtonsDown |= (1 << (int32)ECInputButtons::LeftFace);
	UE_LOG(LogTemp, Warning, TEXT("Button pressed"));
}

void AOurPawn::LeftButtonReleased()
{
	ButtonsDown &= ~(1 << (int32)ECInputButtons::LeftFace);
}

void AOurPawn::BottomButtonPressed()
{
	ButtonsDown |= (1 << (int32)ECInputButtons::BottomFace);
}

void AOurPawn::BottomButtonReleased()
{
	ButtonsDown &= ~(1 << (int32)ECInputButtons::BottomFace);
}

void AOurPawn::ReadXAxis(float Value)
{
	DirectionInput.X = Value;
	if (IsDoingMove == false)
	{
		PawnMovementComp->AddInputVector(FVector(1.0, 0.0, 0.0) * Value);
	}
}

void AOurPawn::ReadYAxis(float Value)
{
	DirectionInput.Y = Value;
	if (IsDoingMove == false)
	{
		PawnMovementComp->AddInputVector(FVector(0.0, -1.0, 0.0) * Value);
	}

}