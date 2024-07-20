// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FRL.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NPCAIController.h"

UBTTask_FRL::UBTTask_FRL(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Find Random Location in NavMesh";
}

EBTNodeResult::Type UBTTask_FRL::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get AI Controller
	if (auto* const cont = Cast<ANPCAIController>(OwnerComp.GetAIOwner()))
	{
		if (auto* const npc = cont->GetPawn())
		{
			// Obterner posicion del npc
			auto const Origin = npc->GetActorLocation();
			// Get Navmesh systme
			if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				FNavLocation Loc;
				if (NavSys->GetRandomPointInNavigableRadius(Origin, SearchRadius, Loc))
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(),
																															 Loc.Location);

					// Terminar la ejecucion 
					FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
					return EBTNodeResult::Succeeded;
				}
			}
		}
	}

	return EBTNodeResult::Failed;
}
