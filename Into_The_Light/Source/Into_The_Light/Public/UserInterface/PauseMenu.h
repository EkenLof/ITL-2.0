#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"


#include "PauseMenu.generated.h"

class AFirstPersonCharacter;
//class AMainHUD;

UCLASS()
class INTO_THE_LIGHT_API UPauseMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY()
	AFirstPersonCharacter* PlayerCharacter;

	//UFUNCTION(BlueprintCallable, Category = "Menu | PauseMenu")
	//void Resume();

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;

	//AMainHUD* HUD;
};
