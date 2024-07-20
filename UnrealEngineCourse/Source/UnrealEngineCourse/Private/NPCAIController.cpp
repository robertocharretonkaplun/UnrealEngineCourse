
#include "NPCAIController.h"
#include "NPC.h"

ANPCAIController::ANPCAIController(FObjectInitializer const& ObjectInitializer) {}

void ANPCAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (ANPC* const npc = Cast<ANPC>(InPawn))
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
