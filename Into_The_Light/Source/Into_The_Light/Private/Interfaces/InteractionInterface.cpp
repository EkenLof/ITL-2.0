// Fill out your copyright notice in the Description page of Project Settings.


#include "Interfaces/InteractionInterface.h"
#include "..\Player/FirstPersonCharacter.h"

// Add default functionality here for any IInteractionInterface functions that are not pure virtual.

void IInteractionInterface::BeginFocus()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---BeginFocus---"));
}

void IInteractionInterface::EndFocus()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---EndFocus---"));
}

void IInteractionInterface::BeginInteract() // When item is Being Picked up
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---BeginInteract---"));
}

void IInteractionInterface::EndInteract()
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---EndInteract---"));
}

void IInteractionInterface::Interact(AFirstPersonCharacter* PlayerCharacter)
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("---Interact---"));
}
