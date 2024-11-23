#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "ExponentialHeightFogState.generated.h"

USTRUCT()
struct FExponentialHeightFogState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatParameter FogDensity;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter FogHeightFalloff;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter SecondFogDensity;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter SecondFogFalloff;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter SecondFogOffset;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter ScatteringDistribution;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter Albedo;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter Emissive;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter ExtinctionScale;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter SkyAtmosphereAmbientContributionColorScale;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter DirectionalInscatteringColor;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter DirectionalInscatteringExponent;
    
    STALKER2_API FExponentialHeightFogState();
};

