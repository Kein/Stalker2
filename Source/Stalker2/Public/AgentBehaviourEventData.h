#pragma once
#include "CoreMinimal.h"
#include "EGoalType.h"
#include "GameplayEventData.h"
#include "AgentBehaviourEventData.generated.h"

UCLASS(BlueprintType)
class UAgentBehaviourEventData : public UGameplayEventData {
    GENERATED_BODY()
public:
    UAgentBehaviourEventData();

    UFUNCTION(BlueprintPure)
    EGoalType GetGoalType() const;
    
};

