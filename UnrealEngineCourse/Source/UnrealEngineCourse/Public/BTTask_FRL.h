#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FRL.generated.h"

UCLASS()
class UNREALENGINECOURSE_API UBTTask_FRL : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	explicit UBTTask_FRL(FObjectInitializer const& ObjectInitializer);

	virtual EBTNodeResult::Type 
	ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI NPC", meta = (AllowPrivateAccess = "true"))
		float SearchRadius = 1500.0f;
};
