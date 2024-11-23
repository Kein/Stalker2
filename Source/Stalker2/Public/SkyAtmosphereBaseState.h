#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "SkyAtmosphereBaseState.generated.h"

USTRUCT()
struct FSkyAtmosphereBaseState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatParameter MultiScattering;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter AbsorptionScale;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter Absorption;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter SkyLuminanceFactor;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter AerialPerspectiveDistanceScale;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter HeightFogContribution;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter ColorPower;
    
    STALKER2_API FSkyAtmosphereBaseState();
};

