#pragma once
#include "CoreMinimal.h"
#include "EffectPrototypeSID.h"
#include "EnvironmentParticlePrototype.h"
#include "LightningStrikeDamagePrototype.generated.h"

USTRUCT(BlueprintType)
struct FLightningStrikeDamagePrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerHitProbability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerHitCheckTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeightPriorityRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeightPriorityUsageProbability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEffectPrototypeSID> PlayerHitEffects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEffectPrototypeSID> NPCHitEffects;
    
    STALKER2_API FLightningStrikeDamagePrototype();
};

