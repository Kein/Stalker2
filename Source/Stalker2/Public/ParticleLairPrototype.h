#pragma once
#include "CoreMinimal.h"
#include "EAgentType.h"
#include "ParticleConditionPrototype.h"
#include "ParticleLairPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleLairPrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LairCheckDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EAgentType> AllowedNPCTypes;
    
    FParticleLairPrototype();
};

