// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacterCanCrouch.h"
#include "Components/InputComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPCharCanCrouch, Warning, All);


AFPSCharacterCanCrouch::AFPSCharacterCanCrouch():AFPSCharacter()
{
	text = TEXT("Some new text");
}

void AFPSCharacterCanCrouch::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
    Super::SetupPlayerInputComponent(InputComponent);

	check(InputComponent);
    
	InputComponent->BindAction("Crouch", IE_Pressed, this, &AFPSCharacterCanCrouch::StartCrouch);
	InputComponent->BindAction("Crouch", IE_Released, this, &AFPSCharacterCanCrouch::StopCrouch);
}

void AFPSCharacterCanCrouch::StartCrouch()
{
	UE_LOG(LogFPCharCanCrouch, ELogVerbosity::Display, TEXT("StartCrouch");
	Crouch();
}

void AFPSCharacterCanCrouch::StopCrouch()
{
	UE_LOG(LogFPCharCanCrouch, ELogVerbosity::Display, TEXT("StopCrouch");
	UnCrouch();
}
