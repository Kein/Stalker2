#pragma once
#include "CoreMinimal.h"
#include "DynamicObstacleAvoidanceSystemSettings.generated.h"

USTRUCT(BlueprintType)
struct FDynamicObstacleAvoidanceSystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 MaxUpdateAgentsPerTick;
    
    STALKER2_API FDynamicObstacleAvoidanceSystemSettings();
};

