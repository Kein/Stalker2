#pragma once
#include "CoreMinimal.h"
#include "ParticleConditionPrototype.h"
#include "ParticleDaytimePrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleDaytimePrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DespawnTime;
    
    FParticleDaytimePrototype();
};

