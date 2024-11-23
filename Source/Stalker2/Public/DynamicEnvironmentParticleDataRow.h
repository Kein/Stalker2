#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EDynamicParticleType.h"
#include "EWeather.h"
#include "LightningStrikeDamagePrototype.h"
#include "LightningStrikeParticleVFXPrototype.h"
#include "ParticleActorComponentSpawnPrototype.h"
#include "ParticleActorSpawnPrototype.h"
#include "ParticleBiomePrototype.h"
#include "ParticleDistancePrototype.h"
#include "ParticleIndoorSpawnPrototype.h"
#include "ParticlePlayerComponentSpawnPrototype.h"
#include "ParticleWindIntensityPrototype.h"
#include "Templates/SubclassOf.h"
#include "DynamicEnvironmentParticleDataRow.generated.h"

class UNiagaraParameterProvider;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FDynamicEnvironmentParticleDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDynamicParticleType ParticleType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<TSubclassOf<UNiagaraParameterProvider>> Providers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanSpawnOnWater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStopOnCutscene;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleIndoorSpawnPrototype IndoorSpawnPrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleBiomePrototype BiomeSpawnPrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleDistancePrototype PlayerDistancePrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleWindIntensityPrototype WindIntensityPrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EWeather, FParticleActorSpawnPrototype> ActorSpawnPrototypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EWeather, FParticlePlayerComponentSpawnPrototype> PlayerComponentSpawnPrototypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EWeather, FParticleActorComponentSpawnPrototype> ActorComponentSpawnPrototypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UNiagaraSystem>> ActorParticleVFXes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> PlayerParticleVFX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLightningStrikeParticleVFXPrototype LightningStrikeVFX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLightningStrikeDamagePrototype LightningStrikeDamagePrototype;
    
    FDynamicEnvironmentParticleDataRow();
};

