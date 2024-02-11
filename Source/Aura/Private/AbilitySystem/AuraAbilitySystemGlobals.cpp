// Copyright 2024 WAM Productions


#include "AbilitySystem/AuraAbilitySystemGlobals.h"
#include "AuraAbilityTypes.h"

FGameplayEffectContext* UAuraAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FAuraGameplayEffectContext();
}
