// Copyright 2024 WAM Productions


#include "AI/AuraAIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AAuraAIController::AAuraAIController()
{
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("Blackboard");
	check(Blackboard);
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviorTreeComponent");
	check(BehaviorTreeComponent);
}
