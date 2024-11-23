#pragma once
#include "CoreMinimal.h"
#include "FloatParameter.h"
#include "LinearColorParameter.h"
#include "SkySphereState.generated.h"

USTRUCT()
struct FSkySphereState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatParameter AtmosphereBrightness;
    
    UPROPERTY(EditAnywhere)
    FFloatParameter EmissiveBrightness;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter ZenithColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColorParameter HorizonColor;
    
    STALKER2_API FSkySphereState();
};

