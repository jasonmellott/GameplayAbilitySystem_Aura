// Copyright 2024 WAM Productions


#include "UI/WidgetController/AttributeMenuWidgetController.h"
#include <AbilitySystem/AuraAttributeSet.h>

void UAttributeMenuWidgetController::BroadcastInitialValues()
{
	const UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	OnIntelligenceChanged.Broadcast(AuraAttributeSet->GetIntelligence());
	OnStrengthChanged.Broadcast(AuraAttributeSet->GetStrength());
	OnResilienceChanged.Broadcast(AuraAttributeSet->GetResilience());
	OnVigorChanged.Broadcast(AuraAttributeSet->GetVigor());

	OnArmorChanged.Broadcast(AuraAttributeSet->GetArmor());
	OnArmorPenetrationChanged.Broadcast(AuraAttributeSet->GetArmorPenetration());
	OnBlockChanceChanged.Broadcast(AuraAttributeSet->GetBlockChance());
	OnCriticalHitChanceChanged.Broadcast(AuraAttributeSet->GetCriticalHitChance());
	OnCriticalHitDamageChanged.Broadcast(AuraAttributeSet->GetCriticalHitDamage());
	OnCriticalHitResistanceChanged.Broadcast(AuraAttributeSet->GetCriticalHitResistance());
	OnHealthMaxChanged.Broadcast(AuraAttributeSet->GetHealthMax());
	OnHealthRegenerationChanged.Broadcast(AuraAttributeSet->GetHealthRegeneration());
	OnManaMaxChanged.Broadcast(AuraAttributeSet->GetManaMax());
	OnManaRegenerationChanged.Broadcast(AuraAttributeSet->GetManaRegeneration());

	OnHealthChanged.Broadcast(AuraAttributeSet->GetHealth());
	OnManaChanged.Broadcast(AuraAttributeSet->GetMana());
}

void UAttributeMenuWidgetController::BindCallbacksToDependencies()
{
	const UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetIntelligenceAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnIntelligenceChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetStrengthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnStrengthChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetResilienceAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnResilienceChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetVigorAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnVigorChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetArmorAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnArmorChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetArmorPenetrationAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnArmorPenetrationChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetBlockChanceAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnBlockChanceChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetCriticalHitChanceAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnCriticalHitChanceChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetCriticalHitDamageAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnCriticalHitDamageChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetCriticalHitResistanceAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnCriticalHitResistanceChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetHealthMaxAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthMaxChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetHealthRegenerationAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthRegenerationChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetManaMaxAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnManaMaxChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetManaRegenerationAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnManaRegenerationChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthChanged.Broadcast(Data.NewValue);
			}
	);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(
		AuraAttributeSet->GetManaAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnManaChanged.Broadcast(Data.NewValue);
			}
	);

}
