#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "RainState.generated.h"

USTRUCT()
struct FRainState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatParameter Intensity;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter WeatherLightningSpawnRate;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter Wetness;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter Drying;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter MaxWetnessValue;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter LightningColor;
    
    STALKER2_API FRainState();
};

