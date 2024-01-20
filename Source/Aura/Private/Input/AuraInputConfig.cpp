// Copyright 2024 WAM Productions


#include "Input/AuraInputConfig.h"
#include "InputAction.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FAuraInputAction& InputAction : AbilityInputActions)
	{
		if (InputTag.MatchesTag(InputAction.InputTag))
		{
			return InputAction.InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find valid Input Tag (%s) in Ability Input Actions (%s)."), *InputTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
}
