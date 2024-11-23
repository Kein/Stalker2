#pragma once
#include "CoreMinimal.h"
#include "EnvironmentParticlePrototype.h"
#include "ParticleExplosionPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleExplosionPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionDistance;
    
    FParticleExplosionPrototype();
};

