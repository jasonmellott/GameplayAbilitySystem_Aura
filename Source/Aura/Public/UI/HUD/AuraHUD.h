// Copyright 2024 WAM Productions

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include <UI/Widget/AuraUserWidget.h>
#include "AuraHUD.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraHUD : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TObjectPtr<UAuraUserWidget> OverlayWidget;
	
private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAuraUserWidget> OverlayWidgetClass;

protected:
	virtual void BeginPlay() override;
};
