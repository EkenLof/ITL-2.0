#include "Triggers/BoxCollider.h"

#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

#include "EngineUtils.h" // for (TActorIterator<ACole> It(GetWorld()); It; ++It)

#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

#include "Gameplay/GameplayEvents.h"
#include "Characters/Cole.h"

ABoxCollider::ABoxCollider()
{
	PrimaryActorTick.bCanEverTick = false;

	bIsTempValue = true;
	bIsTempValue2 = true;

	bIsBeforeMeetCole = false;
	bIsMeetCole = false;
	bIsMissingCole = false;
	bIsExitFuseBoxRoom = false;
    bIsGoingToReceptionPhone = false;
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
	ReceptionPhoneTagName = FName(TEXT("ReceptionPhone")); // ReceptionPhone
}

void ABoxCollider::BeginPlay()
{
	Super::BeginPlay();

}

void ABoxCollider::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoxCollider::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool BFromSweep, const FHitResult& SeepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(MichaelTagName))
	{
		//////////////////////////////////////////////////---ACTIONS---//////////////////////////////////////////////////
        /*
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
			if (IsValid(EventSteps)) 
			{
				EventSteps->LoadSublevel(TEXT("LightsF1"));

				// ********************* Phone ring sound ************************
				EventSteps->UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);
			}

			//
			UWorld* World = GetWorld();

			if (!World)
			{
				UE_LOG(LogTemp, Error, TEXT("World is null in UpdateVaribleState"));
				return;
			}
			else
			{
				if (!IsValid(ReceptionPhoneActor))
				{
					TArray<AActor*> FoundActors;

					UGameplayStatics::GetAllActorsWithTag(World, ReceptionPhoneTagName, FoundActors);

					if (FoundActors.Num() > 0)
					{
						UE_LOG(LogTemp, Error, TEXT("FOUND"));
						ReceptionPhoneActor = FoundActors[0];
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("NOT-FOUND"));
					}
				}
			}

			if (IsValid(ReceptionPhoneActor)) ReceptionPhoneActor->SetActorEnableCollision(true);
			else UE_LOG(LogTemp, Warning, TEXT("ReceptionPhoneActor is NOT Valid"));

			bIsTempValue = false;
			bIsExitFuseBoxRoom = false;
		}
		else if (bIsGoingToReceptionPhone && !bIsTempValue)
		{
			if (IsValid(EventSteps)) EventSteps->NextStep(8); // Phone Ringing

            bIsGoingToReceptionPhone = false;
		}
		else if (bIsExitReceptionPhone) // STEP 10 ACTIVE
		{
			UE_LOG(LogTemp, Warning, TEXT("LightsB1Reception OFF!"));
			
			if (IsValid(EventSteps)) 
			{
				EventSteps->UnloadSublevel(TEXT("LightsB1Reception"));
				EventSteps->NextStep(10);
			}

			bIsExitReceptionPhone = false;
		}
		else if (bIsExitWithKeyCard)
		{
			//if (IsValid(EventSteps)) EventSteps->NextStep(13); // DELETE ????????????????????????????????????????????????????????????????????????

			bIsExitWithKeyCard = false;
		}
        */
		
        if (bIsBeforeMeetCole) // STEP # ACTIVE
        {
            HandleBeforeMeetCole();
        }
        else if (bIsMeetCole) // STEP # ACTIVE
        {
            HandleMeetCole();
}
        else if (bIsMissingCole) // STEP # ACTIVE
        {
            HandleMissingCole();
        }
        else if (bIsExitFuseBoxRoom) // SUBLEVEL LOAD
        {
            HandleExitFuseBoxRoom();
        }
        else if (bIsGoingToReceptionPhone && !bIsTempValue)
        {
            HandleGoingToReceptionPhone();
        }
        else if (bIsExitReceptionPhone) // STEP 10 ACTIVE
        {
            HandleExitReceptionPhone();
        }
        else if (bIsExitWithKeyCard)
        {
            HandleExitWithKeyCard();
        }
	}
}

void ABoxCollider::HandleBeforeMeetCole()
{
    FName TagName = "Cole_StorageRoom";
    TArray<AActor*> TaggedActors;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), TagName, TaggedActors);

    this->ColeState = nullptr;

    if (TaggedActors.Num() > 0)
    {
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

    if (IsValid(this->ColeState))
        this->ColeState->ColeSearchIdle(true);
    else
        UE_LOG(LogTemp, Warning, TEXT("Cole ignores me..."));

    bIsBeforeMeetCole = false;
}

void ABoxCollider::HandleMeetCole()
{
    FName TagName = "Cole_StorageRoom";
    TArray<AActor*> TaggedActors;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), TagName, TaggedActors);

    this->ColeState = nullptr;

    if (TaggedActors.Num() > 0)
    {
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

    if (IsValid(this->ColeState))
        this->ColeState->ColeMeet(true);
    else
        UE_LOG(LogTemp, Warning, TEXT("Cole ignores me..."));

    if (IsValid(EventSteps))
        EventSteps->NextStep(3);

    bIsMeetCole = false;
}

void ABoxCollider::HandleMissingCole()
{
    UE_LOG(LogTemp, Warning, TEXT("OBJECTIVE: Look for Electric-Key."));
    if (IsValid(EventSteps))
        EventSteps->NextStep(6);

    bIsMissingCole = false;
}

void ABoxCollider::HandleExitFuseBoxRoom()
{
    UE_LOG(LogTemp, Warning, TEXT("Light ON!"));
    if (IsValid(EventSteps))
    {
        EventSteps->LoadSublevel(TEXT("LightsF1"));
        EventSteps->UpdateVaribleState(ReceptionPhoneActor, ReceptionPhoneTagName);
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("World is null in UpdateVaribleState"));
        return;
    }
    else
    {
        if (!IsValid(ReceptionPhoneActor))
        {
            TArray<AActor*> FoundActors;
            UGameplayStatics::GetAllActorsWithTag(World, ReceptionPhoneTagName, FoundActors);

            if (FoundActors.Num() > 0)
            {
                UE_LOG(LogTemp, Error, TEXT("FOUND"));
                ReceptionPhoneActor = FoundActors[0];
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("NOT-FOUND"));
            }
        }
    }

    if (IsValid(ReceptionPhoneActor))
        ReceptionPhoneActor->SetActorEnableCollision(true);
    else
        UE_LOG(LogTemp, Warning, TEXT("ReceptionPhoneActor is NOT Valid"));

    bIsTempValue = false;
    bIsExitFuseBoxRoom = false;
}

void ABoxCollider::HandleGoingToReceptionPhone()
{
    if (IsValid(EventSteps)) EventSteps->NextStep(8); // Phone Ringing

    bIsGoingToReceptionPhone = false;
}

void ABoxCollider::HandleExitReceptionPhone()
{
    UE_LOG(LogTemp, Warning, TEXT("LightsB1Reception OFF!"));
    if (IsValid(EventSteps))
    {
        EventSteps->UnloadSublevel(TEXT("LightsB1Reception"));
        EventSteps->NextStep(10);
    }

    bIsExitReceptionPhone = false;
}

void ABoxCollider::HandleExitWithKeyCard()
{
    // Uncomment if needed
    // if (IsValid(EventSteps)) EventSteps->NextStep(13);

    bIsExitWithKeyCard = false;
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

