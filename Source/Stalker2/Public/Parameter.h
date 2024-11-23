#pragma once
#include "CoreMinimal.h"
#include "EWeather.h"
#include "ParameterTransition.h"
#include "Parameter.generated.h"

USTRUCT()
struct FParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EWeather, FParameterTransition> TransitionOverrides;
    
    STALKER2_API FParameter();
};

