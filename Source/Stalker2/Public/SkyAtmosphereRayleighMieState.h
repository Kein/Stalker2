#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "SkyAtmosphereRayleighMieState.generated.h"

USTRUCT()
struct FSkyAtmosphereRayleighMieState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatParameter RayleighScatteringScale;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter RayleighScattering;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter RayleighExponentialDistribution;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MieScatteringScale;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter MieScattering;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MieScatteringAbsorption;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter MieAbsorption;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MieAnisotropy;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MieExponentialDistribution;
    
    STALKER2_API FSkyAtmosphereRayleighMieState();
};

