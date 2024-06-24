#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Cole.generated.h"

UCLASS()
class INTO_THE_LIGHT_API ACole : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACole();

	UFUNCTION(BlueprintCallable, Category = "Event | Activity")
	void ColeSearchIdle(bool bIsColeMeetActivety);

	UFUNCTION(BlueprintCallable, Category = "Event | Activity")
	void ColeMeet(bool bIsColeMeetActivety);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity")
	bool bIsColeStartCutscene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity")
	bool bIsColeSearchIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity")
	bool bIsColeMeetOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity")
	bool bIsColeFuseTakenOn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
