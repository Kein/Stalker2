#pragma once
#include "CoreMinimal.h"
#include "DynamicObstacleAvoidanceAgentSettings.generated.h"

USTRUCT(BlueprintType)
struct FDynamicObstacleAvoidanceAgentSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AgentAvoidanceRadiusMargin;
    
    UPROPERTY(EditAnywhere)
    float MinMovementSpeed;
    
    UPROPERTY(EditAnywhere)
    float AgentTimeOfImpactToConsiderWaiting;
    
    UPROPERTY(EditAnywhere)
    float SpeedRecoveryTimeout;
    
    UPROPERTY(EditAnywhere)
    float AgentPriorityTimeout;
    
    UPROPERTY(EditAnywhere)
    float AgentRepathingTimeout;
    
    UPROPERTY(EditAnywhere)
    float AgentFailMovementTimeout;
    
    UPROPERTY(EditAnywhere)
    bool AllowPriorityAgent;
    
    UPROPERTY(EditAnywhere)
    bool bMergeObstacles;
    
    UPROPERTY(EditAnywhere)
    bool bCanFailMovement;
    
    STALKER2_API FDynamicObstacleAvoidanceAgentSettings();
};

