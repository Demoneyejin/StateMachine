// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Controller_Atoms.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "OurPawn.generated.h"



class UCombos;

UCLASS()
class STATEMACHINEPLUGIN_API AOurPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AOurPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void LeftButtonPressed();
	void LeftButtonReleased();
	void BottomButtonPressed();
	void BottomButtonReleased();
	void ReadXAxis(float Value);
	void ReadYAxis(float Value);

	FVector2D DirectionInput;
	uint32 ButtonsDown;
	uint32 ButtonsDown_Old;
	float TimeInCurrentMove;

	UPROPERTY(EditAnywhere)
	UCombos* CurrentMove;

	// Input atoms are removed when they pass this age threshold. All moves must be executed in under this time.
	UPROPERTY(EditAnywhere)
	float InputExpirationTime;

	UPROPERTY(EditAnywhere, Category = "ComboFSM | Input Atoms")
	UCDirectionalInputAtom* DirectionDownBackAtom;

	UPROPERTY(EditAnywhere, Category = "ComboFSM | Input Atoms")
		UCDirectionalInputAtom* DirectionDownAtom;

	UPROPERTY(EditAnywhere, Category = "ComboFSM | Input Atoms")
		UCDirectionalInputAtom* DirectionDownForwardAtom;

	UPROPERTY(EditAnywhere, Category = "ComboFSM | Input Atoms")
		UCDirectionalInputAtom* DirectionBackAtom;

	UPROPERTY(EditAnywhere, Category = "ComboFSM | Input Atoms")
		UCDirectionalInputAtom* DirectionNeutralAtom;

	UPROPERTY(EditAnywhere, Category = "ComboFSM | Input Atoms")
		UCDirectionalInputAtom* DirectionForwardAtom;

	UPROPERTY(EditAnywhere, Category = "ComboFSM | Input Atoms")
		UCDirectionalInputAtom* DirectionUpBackAtom;

	UPROPERTY(EditAnywhere, Category = "ComboFSM | Input Atoms")
		UCDirectionalInputAtom* DirectionUpAtom;

	UPROPERTY(EditAnywhere, Category ="ComboFSM | Input Atoms")
		UCDirectionalInputAtom* DirectionUpForwardAtom;

	UPROPERTY(EditAnywhere, Category = "ComboFSM | Button Atoms")
	TArray<UCButtonInputAtom*> ButtonAtoms;

	UFUNCTION(BlueprintImplementableEvent)
	void DoMove(UCombos* NewMove);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE float GetTimeInMove() const { return TimeInCurrentMove; }
	FORCEINLINE UPaperFlipbookComponent* GetOurPawnFlipbook() const { return OurFlipbook; }
	

private:

	//~ This array relates to InputStream. InputStream must not be updated without this stream being updated
	UPROPERTY(VisibleInstanceOnly)
	TArray<float> InputTimeStamps;

	UPROPERTY(VisibleInstanceOnly)
	TArray<USM_InputAtom*> InputStream;

	UPROPERTY(VisibleAnywhere)
	UPaperFlipbookComponent* OurFlipbook;
};
