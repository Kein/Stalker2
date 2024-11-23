#pragma once
#include "CoreMinimal.h"
#include "EnvironmentParticlePrototype.h"
#include "ParticleActorSpawnPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleActorSpawnPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseSpawnProbability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnProbabilityIncrement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnProbabilityCheckTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinSpawnDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSpawnDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SurfaceHeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LocationCheckTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxParticleCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnInPlayerViewport;
    
    FParticleActorSpawnPrototype();
};

