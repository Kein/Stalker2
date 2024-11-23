#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "SkyLightState.generated.h"

USTRUCT()
struct FSkyLightState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatParameter Intensity;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter SkyLightColor;
    
    STALKER2_API FSkyLightState();
};

