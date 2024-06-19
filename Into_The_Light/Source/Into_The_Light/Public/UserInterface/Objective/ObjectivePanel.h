#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectivePanel.generated.h"

class UTextBlock;
class AGameplayEvents;
class AFirstPersonCharacter;


UCLASS()
class INTO_THE_LIGHT_API UObjectivePanel : public UUserWidget
{
	GENERATED_BODY()

public:
	FORCEINLINE AFirstPersonCharacter* SetObjective() const { return Player; };

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextContent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity | Objective")
	FText ActiveText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event | Activity | Objective")
	bool bIsFindCole;

	UFUNCTION(BlueprintCallable, Category = "Event | Activity | Objective")
	void SetInfoText(FText& TempText);

protected:
	AFirstPersonCharacter* Player;

	//virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
};
