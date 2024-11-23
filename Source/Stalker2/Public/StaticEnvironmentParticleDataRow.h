#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStaticParticleType.h"
#include "ParticleDaytimePrototype.h"
#include "ParticleDistancePrototype.h"
#include "ParticleIndoorSpawnPrototype.h"
#include "ParticleLairPrototype.h"
#include "ParticleRainIntensityPrototype.h"
#include "ParticleWeatherPrototype.h"
#include "ParticleWindIntensityPrototype.h"
#include "Templates/SubclassOf.h"
#include "StaticEnvironmentParticleDataRow.generated.h"

class UNiagaraParameterProvider;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct STALKER2_API FStaticEnvironmentParticleDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStaticParticleType ParticleType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<TSubclassOf<UNiagaraParameterProvider>> Providers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleIndoorSpawnPrototype IndoorSpawnPrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleWeatherPrototype WeatherTypePrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleLairPrototype LairPrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleDistancePrototype PlayerDistancePrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleDaytimePrototype DaytimePrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleRainIntensityPrototype RainIntensityPrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FParticleWindIntensityPrototype WindIntensityPrototype;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UNiagaraSystem>> NiagaraSystems;
    
    FStaticEnvironmentParticleDataRow();
};

