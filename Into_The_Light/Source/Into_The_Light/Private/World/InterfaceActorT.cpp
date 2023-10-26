// Fill out your copyright notice in the Description page of Project Settings.

#include "World/InterfaceActorT.h"

// Sets default values
AInterfaceActorT::AInterfaceActorT()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	
	SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void AInterfaceActorT::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInterfaceActorT::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInterfaceActorT::BeginFocus()
{
	if (Mesh)
	{
		Mesh->SetRenderCustomDepth(true);
	}
}

void AInterfaceActorT::EndFocus()
{
	if (Mesh)
	{
		Mesh->SetRenderCustomDepth(false);
	}
}

void AInterfaceActorT::BeginInteract()
{
	UE_LOG(LogTemp, Warning, TEXT("Calling BeginInteract override on Interface test actor."));
}

void AInterfaceActorT::EndInteract()
{
	UE_LOG(LogTemp, Warning, TEXT("Calling EndInteract override on Interface test actor."));
}

void AInterfaceActorT::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Calling Interact override on Interface test actor."));
}

