#pragma once
#include "CoreMinimal.h"
#include "DynamicObstacleAvoidanceQuerrySettings.generated.h"

USTRUCT(BlueprintType)
struct FDynamicObstacleAvoidanceQuerrySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartTrackingDistance;
    
    UPROPERTY(EditAnywhere)
    float EndTrackingOffset;
    
    UPROPERTY(EditAnywhere)
    float PreferredAvoidanceCorridorWidth;
    
    UPROPERTY(EditAnywhere)
    float MaxCorridorSectionLength;
    
    UPROPERTY(EditAnywhere)
    float ObstaclesQueryDistance;
    
    UPROPERTY(EditAnywhere)
    float AgentMinAvoidanceSampleStep;
    
    STALKER2_API FDynamicObstacleAvoidanceQuerrySettings();
};

