// Copyright 2024 WAM Productions


#include "Actor/AuraEffectActor.h"
#include <AbilitySystemInterface.h>
#include <AbilitySystem/AuraAttributeSet.h>
#include "AbilitySystemBlueprintLibrary.h"

AAuraEffectActor::AAuraEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;

	SetRootComponent(CreateDefaultSubobject<USceneComponent>("SceneRoot"));
}

void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();

}

void AAuraEffectActor::ApplyEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> GameplayEffectClass)
{
	UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	if (ASC == nullptr) return;

	check(GameplayEffectClass);

	FGameplayEffectContextHandle EffectContextHandle = ASC->MakeEffectContext();
	EffectContextHandle.AddSourceObject(this);
	
	const FGameplayEffectSpecHandle EffectSpectHandle = ASC->MakeOutgoingSpec(GameplayEffectClass, 1.f, EffectContextHandle);

	ASC->ApplyGameplayEffectSpecToSelf(*EffectSpectHandle.Data.Get());
}
