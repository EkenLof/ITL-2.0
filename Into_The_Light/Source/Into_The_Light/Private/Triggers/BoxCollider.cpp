#include "Triggers/BoxCollider.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

#include "Gameplay/GameplayEvents.h"

// Sets default values
ABoxCollider::ABoxCollider()
{
 	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsReceptionNoFlashlight = false;
	bIsMeetCole = false;
	bIsFuseBox = false;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ABoxCollider::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ABoxCollider::OnOverlapEnd);

	EventSteps = CreateDefaultSubobject<AGameplayEvents>(TEXT("EventSteps"));
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
	if (bIsReceptionNoFlashlight)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("OBJECTIVE: Get the Flashlight."));
	}

	else if (bIsMeetCole)
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("OBJECTIVE: Talk to Cole."));
		EventSteps->NextStep(3);
	}
}

void ABoxCollider::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Exit Trigger"));
}



