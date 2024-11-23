#pragma once
#include "CoreMinimal.h"
#include "EnvironmentParticlePrototype.h"
#include "ParticleGunshotPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleGunshotPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GunshotDistance;
    
    FParticleGunshotPrototype();
};

