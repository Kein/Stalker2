#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "LightState.generated.h"

USTRUCT()
struct FLightState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatParameter Intensity;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter LightColor;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter Temperature;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter ShadowAmount;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MoonOpacity;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter CloudScatteredLuminanceScale;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter SunDiskColorScale;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter VolumetricScatteringIntensity;
    
    STALKER2_API FLightState();
};

