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

	bIsBeforeMeetCole = false;
	bIsMeetCole = false;
    bIsGoingToMissingCole = false;
	bIsMissingCole = false;
	bIsExitFuseBoxRoom = false;
	bIsExitReceptionPhone = false;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ABoxCollider::OnOverlapBegin);
	//CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ABoxCollider::OnOverlapEnd);

	EventSteps = CreateDefaultSubobject<AGameplayEvents>(TEXT("EventSteps"));
	ColeState = CreateDefaultSubobject<ACole>(TEXT("ColeState"));

	MichaelTagName = FName(TEXT("Michael"));
	//ReceptionPhoneTagName = FName(TEXT("ReceptionPhone")); // ReceptionPhone

	LanternTagName = FName(TEXT("Lantern"));
	LanternBrokenTagName = FName(TEXT("LanternBroken"));
	ElectricKeyTagName = FName(TEXT("ElectricKey"));
	ElectricKey_KeyTagName = FName(TEXT("ElectricKey_Key"));

	ColeMissingTrigTagName = FName(TEXT("ColeMissingTrigger")); // MissingCole

	ColeStorageTagName = FName(TEXT("Cole_StorageRoom"));
}

void ABoxCollider::BeginPlay()
{
	Super::BeginPlay();

}

void ABoxCollider::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoxCollider::UpdateVaribleState(AActor*& ActorReference, const FName& TagName)
{
	UWorld* World = GetWorld();

	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("World is null in UpdateVaribleState"));
		return;
	}
	else
	{
		if (!IsValid(ActorReference))
		{
			//ActorReference = nullptr;

			TArray<AActor*> FoundActors;

			UGameplayStatics::GetAllActorsWithTag(World, TagName, FoundActors);

			if (FoundActors.Num() > 0)
			{
				UE_LOG(LogTemp, Log, TEXT("FOUND"));
				ActorReference = FoundActors[0];
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("NOT-FOUND"));
			}
		}
	}
}

void ABoxCollider::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool BFromSweep, const FHitResult& SeepResult)
{
	if (OtherActor && OtherActor->ActorHasTag(MichaelTagName))
	{	
        if (bIsBeforeMeetCole) HandleBeforeMeetCole();

        else if (bIsGoingToMissingCole) HandlebGoingToMissingCole();

        else if (bIsMissingCole) HandleMissingCole();

        else if (bIsExitFuseBoxRoom) HandleExitFuseBoxRoom();

        else if (bIsExitReceptionPhone) HandleExitReceptionPhone();
	}
}

void ABoxCollider::HandleBeforeMeetCole()
{
	UE_LOG(LogTemp, Log, TEXT("HandleBeforeMeetCole Overlaped"));

	// Actors OFF
	UpdateVaribleState(LanternBrokenActor, LanternBrokenTagName);
	if (IsValid(LanternBrokenActor)) // LanternBroken
	{
		LanternBrokenActor->SetActorHiddenInGame(true);
		LanternBrokenActor->SetActorEnableCollision(false);
	}
	else UE_LOG(LogTemp, Warning, TEXT("LanternBrockenActor is NOT Valid"));

	UpdateVaribleState(ElectricKeyActor, ElectricKeyTagName);
	UpdateVaribleState(ElectricKey_KeyActor, ElectricKey_KeyTagName);
	if (IsValid(ElectricKeyActor) && IsValid(ElectricKey_KeyActor)) // ElectricKey
	{
		ElectricKeyActor->SetActorHiddenInGame(true);
		ElectricKeyActor->SetActorEnableCollision(false);
		ElectricKey_KeyActor->SetActorEnableCollision(false);
	}
	else UE_LOG(LogTemp, Warning, TEXT("ElectricKeyActor OR ElectricKey_KeyActor is NOT Valid"));

	UpdateVaribleState(MissingColeTriggerStart, ColeMissingTrigTagName);
	if (IsValid(MissingColeTriggerStart)) MissingColeTriggerStart->SetActorEnableCollision(false);
	else UE_LOG(LogTemp, Warning, TEXT("MissingColeTriggerStart is NOT Valid"));

    Destroy();
    bIsBeforeMeetCole = false;
}

void ABoxCollider::HandlebGoingToMissingCole()
{
	UE_LOG(LogTemp, Log, TEXT("HandlebGoingToMissingCole Overlaped"));

	UpdateVaribleState(LanternActor, LanternTagName);
	UpdateVaribleState(LanternBrokenActor, LanternBrokenTagName);
	UpdateVaribleState(ColeStorageRoomActor, ColeStorageTagName);
	UpdateVaribleState(ElectricKeyActor, ElectricKeyTagName);
	UpdateVaribleState(ElectricKey_KeyActor, ElectricKey_KeyTagName);
	UpdateVaribleState(MissingColeTriggerStart, ColeMissingTrigTagName);


	if (IsValid(LanternActor)) // Lantern
	{
		LanternActor->SetActorHiddenInGame(true);
		LanternActor->SetActorEnableCollision(false);
	}
	else UE_LOG(LogTemp, Warning, TEXT("---*Lantern ON* NOT POSSIBLE---"));

	if (IsValid(LanternBrokenActor)) // LanternBroken
	{
		LanternBrokenActor->SetActorHiddenInGame(false);
		LanternBrokenActor->SetActorEnableCollision(true);
	}
	else UE_LOG(LogTemp, Warning, TEXT("---*LanternBroken ON* NOT POSSIBLE---"));

	if (IsValid(ColeStorageRoomActor)) // Cole
	{
		ColeStorageRoomActor->SetActorHiddenInGame(true);
		ColeStorageRoomActor->SetActorEnableCollision(false);
	}
	else UE_LOG(LogTemp, Warning, TEXT("---*Cole ON* NOT POSSIBLE---"));

	if (IsValid(ElectricKeyActor) && IsValid(ElectricKey_KeyActor)) // ElectricKey
	{
		ElectricKeyActor->SetActorHiddenInGame(false);
		ElectricKeyActor->SetActorEnableCollision(true);
		ElectricKey_KeyActor->SetActorEnableCollision(true);
	}
	else UE_LOG(LogTemp, Warning, TEXT("---*ElectricKey ON* NOT POSSIBLE---"));

	if (IsValid(MissingColeTriggerStart))
	{
		UE_LOG(LogTemp, Warning, TEXT("---MissinColeTrigger ON---"));
		MissingColeTriggerStart->SetActorEnableCollision(true);
	}
	else UE_LOG(LogTemp, Warning, TEXT("---*MissinColeTrigger ON* NOT POSSIBLE---"));

    bIsGoingToMissingCole = false;
}

void ABoxCollider::HandleMissingCole()
{
	UE_LOG(LogTemp, Log, TEXT("HandleMissingCole Overlaped")); 

    bIsMissingCole = false;
}

void ABoxCollider::HandleExitFuseBoxRoom()
{
	UE_LOG(LogTemp, Log, TEXT("HandleExitFuseBoxRoom Overlaped"));

    UE_LOG(LogTemp, Log, TEXT("Light ON!"));

    if (IsValid(EventSteps)) 
	{
		EventSteps->LoadSublevel(TEXT("LightsF1"));
		EventSteps->UnloadSublevel(TEXT("LightsF1_OFF"));
	}
	else UE_LOG(LogTemp, Warning, TEXT("EventSteps is NOT Valid"));                                                                                

    bIsExitFuseBoxRoom = false;
}

void ABoxCollider::HandleExitReceptionPhone()
{
	UE_LOG(LogTemp, Log, TEXT("HandleExitReceptionPhone Overlaped"));

    UE_LOG(LogTemp, Log, TEXT("LightsB1Reception OFF!"));
	UE_LOG(LogTemp, Log, TEXT("LightsF1 OFF!"));

	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("---LightsB1Reception OFF! \nLightsF1 OFF!---"));

    bIsExitReceptionPhone = false;
}