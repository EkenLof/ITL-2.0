#include "Triggers/BoxCollider.h"

#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

#include "EngineUtils.h" // for (TActorIterator<ACole> It(GetWorld()); It; ++It)

#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

#include "Gameplay/GameplayEvents.h"
#include "Characters/Cole.h"

// Sets default values
ABoxCollider::ABoxCollider()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsBeforeMeetCole = false;
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
	// Cole_StorageRoom
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
		if (bIsBeforeMeetCole) // STEP # ACTIVE
		{
			FName TagName = "Cole_StorageRoom";
			TArray<AActor*> TaggedActors;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(), TagName, TaggedActors);

			// Assuming ColeState is a member variable of ABoxTrigger
			this->ColeState = nullptr;

			if (TaggedActors.Num() > 0)
			{
				// Iterate through the tagged actors and find the first valid ACole
				for (AActor* Actor : TaggedActors)
				{
					ACole* PotentialCole = Cast<ACole>(Actor);
					if (IsValid(PotentialCole))
					{
						this->ColeState = PotentialCole;
						break;
					}
				}
			}

			if (IsValid(this->ColeState)) this->ColeState->ColeSearchIdle(true);
			else UE_LOG(LogTemp, Warning, TEXT("Cole ignores me..."));

			bIsBeforeMeetCole = false;
		}
		else if (bIsMeetCole) // STEP # ACTIVE
		{
			FName TagName = "Cole_StorageRoom";
			TArray<AActor*> TaggedActors;
			UGameplayStatics::GetAllActorsWithTag(GetWorld(), TagName, TaggedActors);

			// Assuming ColeState is a member variable of ABoxTrigger
			this->ColeState = nullptr;

			if (TaggedActors.Num() > 0)
			{
				// Iterate through the tagged actors and find the first valid ACole
				for (AActor* Actor : TaggedActors)
				{
					ACole* PotentialCole = Cast<ACole>(Actor);
					if (IsValid(PotentialCole))
					{
						this->ColeState = PotentialCole;
						break;
					}
				}
			}

			if (IsValid(this->ColeState)) this->ColeState->ColeMeet(true);
			else UE_LOG(LogTemp, Warning, TEXT("Cole ignores me..."));

			if (IsValid(EventSteps)) EventSteps->NextStep(3);
			bIsMeetCole = false;
		}
		else if (bIsMissingCole) // STEP & ACTIVE
		{
			UE_LOG(LogTemp, Warning, TEXT("OBJECTIVE: Look for Electric-Key."));
			if (IsValid(EventSteps)) EventSteps->NextStep(6);
			bIsMissingCole = false;
		}
		else if (bIsExitFuseBoxRoom) // SUBLEVEL LOAD
		{
			UE_LOG(LogTemp, Warning, TEXT("Light ON!"));
			if (IsValid(EventSteps)) EventSteps->LoadSublevel(TEXT("LightsF1"));
			bIsExitFuseBoxRoom = false;
		}
		else if (bIsExitReceptionPhone) // STEP 10 ACTIVE
		{
			UE_LOG(LogTemp, Warning, TEXT("LightsB1Reception OFF!"));
			EventSteps->UnloadSublevel(TEXT("LightsB1Reception"));
			if (IsValid(EventSteps)) EventSteps->NextStep(10);
			bIsExitReceptionPhone = false;
		}
		else if (bIsExitWithKeyCard)
		{
			//if (IsValid(EventSteps)) EventSteps->NextStep(13); // DELETE ????????????????????????????????????????????????????????????????????????

			bIsExitWithKeyCard = false;
		}
		//////////////////////////////////////////////////---ACTIONS---//////////////////////////////////////////////////
	}
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

