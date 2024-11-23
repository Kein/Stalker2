#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentParticlePrototype.h"
#include "ParticlePlayerComponentSpawnPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticlePlayerComponentSpawnPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseSpawnProbability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnProbabilityIncrement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnProbabilityCheckTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LocationCheckTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector PlayerHeadOffset;
    
    FParticlePlayerComponentSpawnPrototype();
};

