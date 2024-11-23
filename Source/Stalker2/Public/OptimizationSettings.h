#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OptimizationSettings.generated.h"

UCLASS(Config=Game)
class STALKER2_API UOptimizationSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    bool bReloadPrototypes;
    
    UPROPERTY(Config, EditAnywhere)
    float SoftMemoryThresholdMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    float StreamingDistanceMemoryMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    float StreamingDistanceModifierLimit;
    
    UPROPERTY(Config, EditAnywhere)
    float MemoryThresholdMultiplierToStartHighPriorityNavMeshLoading;
    
    UPROPERTY(Config, EditAnywhere)
    float AfkTimeout;
    
    UPROPERTY(Config, EditAnywhere)
    float WaterTraceDistanceTolerance;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAlwaysCleanXSSViews;
    
public:
    UOptimizationSettings();

};

