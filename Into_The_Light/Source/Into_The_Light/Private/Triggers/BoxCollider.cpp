#include "Triggers/BoxCollider.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

#include "Gameplay/GameplayEvents.h"
#include "Characters/Cole.h"

// Sets default values
ABoxCollider::ABoxCollider()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsMeetCole = false;
	bIsMissingCole = false;
	bIsExitFuseBoxRoom = false;
	bIsExitReceptionPhone = false;
	bIsExitWithKeyCard = false;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ABoxCollider::OnOverlapBegin);
	//CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ABoxCollider::OnOverlapEnd);

	EventSteps = CreateDefaultSubobject<AGameplayEvents>(TEXT("EventSteps"));
	ColeState = CreateDefaultSubobject<ACole>(TEXT("ColeState"));

	MichaelTagName = FName(TEXT("Michael"));
}

// Called when the game starts or when spawned
void ABoxCollider::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABoxCollider::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoxCollider::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool BFromSweep, const FHitResult& SeepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(MichaelTagName))
	{
		//////////////////////////////////////////////////---ACTIONS---//////////////////////////////////////////////////
		if (bIsMeetCole)
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, TEXT("OBJECTIVE: Talk to Cole."));
			if (IsValid(ColeState)) ColeState->ColeMeet(true);
			if (IsValid(EventSteps)) EventSteps->NextStep(3);
			bIsMeetCole = false;
			//Destroy(this);
		}
		else if (bIsMissingCole)
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, TEXT("OBJECTIVE: Look for Electric-Key."));
			if (IsValid(EventSteps)) EventSteps->NextStep(6);
			bIsMissingCole = false;
		}
		else if (bIsExitFuseBoxRoom)
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, TEXT("Light ON!"));
			if (IsValid(EventSteps)) EventSteps->LoadSublevel(TEXT("LightsF1"));
			bIsExitFuseBoxRoom = false;
		}
		else if (bIsExitReceptionPhone)
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, TEXT("LightsB1Reception ON!"));
			EventSteps->UnloadSublevel(TEXT("LightsB1Reception"));
			if (IsValid(EventSteps)) EventSteps->NextStep(10);
			bIsExitReceptionPhone = false;
		}
		else if (bIsExitWithKeyCard)
		{
			if (IsValid(EventSteps)) EventSteps->NextStep(13);

			bIsExitWithKeyCard = false;
		}
		//////////////////////////////////////////////////---ACTIONS---//////////////////////////////////////////////////
	}
	/*else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("***Michael Not Found inside a trigger***"));
	}*/
}

/*
void ABoxCollider::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->ActorHasTag(MichaelTagName))
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Exit Trigger"));
	}
}
*/

