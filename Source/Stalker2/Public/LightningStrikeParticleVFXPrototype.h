#pragma once
#include "CoreMinimal.h"
#include "EnvironmentParticlePrototype.h"
#include "LightningStrikeVFXMaterialPrototype.h"
#include "LightningStrikeParticleVFXPrototype.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FLightningStrikeParticleVFXPrototype : public FEnvironmentParticlePrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> LightningStrikeDefault;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLightningStrikeVFXMaterialPrototype LightningStrikeMetal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLightningStrikeVFXMaterialPrototype LightningStrikeWater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLightningStrikeVFXMaterialPrototype LightningStrikeWood;
    
    FLightningStrikeParticleVFXPrototype();
};

