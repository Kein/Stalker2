#pragma once
#include "CoreMinimal.h"
#include "EWeather.h"
#include "ParticleConditionPrototype.h"
#include "ParticleWeatherPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleWeatherPrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EWeather> AllowedWeatherTypes;
    
    FParticleWeatherPrototype();
};

