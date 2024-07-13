#include "NPC_AIController.h"
#include "MyFirstNPC.h"
ANPC_AIController::ANPC_AIController(FObjectInitializer const& ObjectInitializer) {}

void ANPC_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (AMyFirstNPC* const npc = Cast<AMyFirstNPC>(InPawn))
	{
		if (UBehaviorTree* const tree = npc->GetBehaviorTree())
		{
			UBlackboardComponent* blackboard;
			UseBlackboard(tree->BlackboardAsset, blackboard);
			Blackboard = blackboard;
			RunBehaviorTree(tree);
		}
	}
}
