// Copyright 2024 WAM Productions

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/*
 * AuraGameplayTags
 * 
 * Singleton containing native Gameplay Tags
 */

struct FAuraGameplayTags
{
public:
	static const FAuraGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();

	FGameplayTag Attributes_Primary_Intelligence;
	FGameplayTag Attributes_Primary_Strength;
	FGameplayTag Attributes_Primary_Resilience;
	FGameplayTag Attributes_Primary_Vigor;

	FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_ArmorPenetration;
	FGameplayTag Attributes_Secondary_BlockChance;
	FGameplayTag Attributes_Secondary_CriticalHitChance;
	FGameplayTag Attributes_Secondary_CriticalHitDamage;
	FGameplayTag Attributes_Secondary_CriticalHitResistance;
	FGameplayTag Attributes_Secondary_HealthMax;
	FGameplayTag Attributes_Secondary_HealthRegeneration;
	FGameplayTag Attributes_Secondary_ManaMax;
	FGameplayTag Attributes_Secondary_ManaRegeneration;

	FGameplayTag Attributes_Vital_Health;
	FGameplayTag Attributes_Vital_Mana;

	FGameplayTag InputTag_Ability_Primary;
	FGameplayTag InputTag_Ability_Secondary;
	FGameplayTag InputTag_Ability_Tertiary_1;
	FGameplayTag InputTag_Ability_Tertiary_2;
	FGameplayTag InputTag_Ability_Tertiary_3;
	FGameplayTag InputTag_Ability_Tertiary_4;

	FGameplayTag Damage;

private:
	static FAuraGameplayTags GameplayTags;
};
