#pragma once
#include "CoreMinimal.h"
#include "ParticleConditionPrototype.h"
#include "ParticleBiomePrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleBiomePrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> AllowedBiomeNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> CountableBiomeNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BiomeCheckRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinBiomeCompatabilityPercent;
    
    FParticleBiomePrototype();
};

