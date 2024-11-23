#pragma once
#include "CoreMinimal.h"
#include "Parameter.h"
#include "LinearColorParameter.generated.h"

class UCurveLinearColor;

USTRUCT()
struct FLinearColorParameter : public FParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveLinearColor* Curve;
    
    STALKER2_API FLinearColorParameter();
};

