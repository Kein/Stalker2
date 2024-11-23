#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FogParams.generated.h"

USTRUCT(BlueprintType)
struct FFogParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Density;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatInterval Height;
    
    STALKER2_API FFogParams();
};

