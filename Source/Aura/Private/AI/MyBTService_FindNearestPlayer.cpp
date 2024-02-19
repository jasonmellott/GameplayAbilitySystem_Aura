// Copyright 2024 WAM Productions


#include "AI/MyBTService_FindNearestPlayer.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include <BehaviorTree/BTFunctionLibrary.h>

void UMyBTService_FindNearestPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* OwningPawn = AIOwner->GetPawn();
	if (!IsValid(OwningPawn)) return;

	const FName TargetTag = OwningPawn->ActorHasTag(FName("Player")) ? FName("Enemy") : FName("Player");

	TArray<AActor*> ActorsWithTag;
	UGameplayStatics::GetAllActorsWithTag(OwningPawn, TargetTag, ActorsWithTag);

	float NearestPlayerDistance = std::numeric_limits<float>::max();
	AActor* NearestPlayer = nullptr;
	for (AActor* Actor : ActorsWithTag)
	{
		if (IsValid(Actor))
		{
			float Distance = OwningPawn->GetDistanceTo(Actor);
			if (Distance < NearestPlayerDistance)
			{
				NearestPlayerDistance = Distance;
				NearestPlayer = Actor;
			}
		}
	}

	UBTFunctionLibrary::SetBlackboardValueAsObject(this, TargetToFollowSelector, NearestPlayer);
	UBTFunctionLibrary::SetBlackboardValueAsFloat(this, DistanceToTargetSelector, NearestPlayerDistance);
}
