// Copyright 2024 WAM Productions

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
public:
	AAuraEnemy();
	
	// Begin EnemyInterface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	// End EnemyInterface

	// Begin CombatInterface
	virtual int32 GetCharacterLevel() override;
	// End CombatInterface

protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;
};
