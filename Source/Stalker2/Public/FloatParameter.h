#pragma once
#include "CoreMinimal.h"
#include "Parameter.h"
#include "FloatParameter.generated.h"

class UCurveFloat;

USTRUCT()
struct FFloatParameter : public FParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* Curve;
    
    STALKER2_API FFloatParameter();
};

