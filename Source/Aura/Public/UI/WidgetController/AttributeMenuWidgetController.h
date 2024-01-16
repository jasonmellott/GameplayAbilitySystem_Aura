// Copyright 2024 WAM Productions

#pragma once

#include "CoreMinimal.h"
#include "UI/WidgetController/AuraWidgetController.h"
#include <UI/Widget/AuraUserWidget.h>
#include <UI/WidgetController/OverlayWidgetController.h>
#include "AttributeMenuWidgetController.generated.h"

/**
 * 
 */

UCLASS(BlueprintType, Blueprintable)
class AURA_API UAttributeMenuWidgetController : public UAuraWidgetController
{
	GENERATED_BODY()

public:
	virtual void BroadcastInitialValues() override;
	virtual void BindCallbacksToDependencies() override;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Primary")
	FOnAttributeChangedSignature OnIntelligenceChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Primary")
	FOnAttributeChangedSignature OnStrengthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Primary")
	FOnAttributeChangedSignature OnResilienceChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Primary")
	FOnAttributeChangedSignature OnVigorChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnArmorChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnArmorPenetrationChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnBlockChanceChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnCriticalHitChanceChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnCriticalHitDamageChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnCriticalHitResistanceChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnHealthMaxChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnHealthRegenerationChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnManaMaxChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Secondary")
	FOnAttributeChangedSignature OnManaRegenerationChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Vital")
	FOnAttributeChangedSignature OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "GAS|Attributes|Vital")
	FOnAttributeChangedSignature OnManaChanged;
};
