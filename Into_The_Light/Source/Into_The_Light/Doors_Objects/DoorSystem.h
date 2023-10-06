// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorSystem.generated.h"

UCLASS()
class INTO_THE_LIGHT_API ADoorSystem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorSystem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	void DoorOpen(bool isOpenDoor);

	void OpenDoor();

public:

	bool isDoorOpenClosed;

	FRotator OpenRotation;
	FRotator ClosedRotation;
};
