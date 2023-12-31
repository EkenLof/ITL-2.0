// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorSystem.h"

// Sets default values
ADoorSystem::ADoorSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoorSystem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	OpenRotation = GetActorRotation();
	ClosedRotation = GetActorRotation();
	OpenRotation.Yaw += 90 * DeltaTime;
	ClosedRotation.Yaw -= 90 * DeltaTime;

}

void ADoorSystem::DoorOpen(bool isOpenDoor)
{
	isOpenDoor = isDoorOpenClosed;

	if (!isOpenDoor)
	{
		SetActorRotation(OpenRotation);
		isOpenDoor = true;
	}
	else if (isOpenDoor)
	{
		SetActorRotation(ClosedRotation);
		isOpenDoor = false;
	}
}

void ADoorSystem::OpenDoor()
{

}

