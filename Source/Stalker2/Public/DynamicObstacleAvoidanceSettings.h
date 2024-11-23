#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DynamicObstacleAvoidanceAgentSettings.h"
#include "DynamicObstacleAvoidanceQuerrySettings.h"
#include "DynamicObstacleAvoidanceSystemSettings.h"
#include "DynamicObstacleAvoidanceSettings.generated.h"

UCLASS(Config=Engine)
class UDynamicObstacleAvoidanceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDynamicObstacleAvoidanceSystemSettings SystemSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FDynamicObstacleAvoidanceQuerrySettings QuerrySettings;
    
    UPROPERTY(Config, EditAnywhere)
    FDynamicObstacleAvoidanceAgentSettings PiecefulAgentSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FDynamicObstacleAvoidanceAgentSettings CombatAgentSettings;
    
    UDynamicObstacleAvoidanceSettings();

};

