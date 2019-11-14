// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSCharacter.h"
#include "FPSCharacterCanCrouch.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AFPSCharacterCanCrouch : public AFPSCharacter
{
	GENERATED_BODY()

public:
	AFPSCharacterCanCrouch();
	
protected:
	void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	void StartCrouch();
	void StopCrouch();
};
