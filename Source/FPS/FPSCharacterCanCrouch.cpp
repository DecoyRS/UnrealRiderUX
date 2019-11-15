// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacterCanCrouch.h"
#include "Components/InputComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPCharCanCrouch, Warning, All);

void AFPSCharacterCanCrouch::SetupPlayerInputComponent(class UInputComponent* SetupInputComponent)
{
    Super::SetupPlayerInputComponent(SetupInputComponent);

	check(SetupInputComponent);
    
	SetupInputComponent->BindAction("Crouch", IE_Pressed, this, &AFPSCharacterCanCrouch::StartCrouch);
	SetupInputComponent->BindAction("Crouch", IE_Released, this, &AFPSCharacterCanCrouch::StopCrouch);
}

void AFPSCharacterCanCrouch::StartCrouch()
{
	UE_LOG(LogFPCharCanCrouch, Display, TEXT("StartCrouch"));
	NumberOfCrouches++;
	Crouch();
}

void AFPSCharacterCanCrouch::StopCrouch()
{
	UE_LOG(LogFPCharCanCrouch, Display, TEXT("StopCrouch"));
	UnCrouch();
}
