#pragma once
#include "CoreMinimal.h"
#include "BodyPartRestriction.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FBodyPartRestriction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RotationBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldRotateIndependently;
    
    FBodyPartRestriction();
};

