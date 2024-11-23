#pragma once
#include "CoreMinimal.h"
#include "VelocityDebug.generated.h"

USTRUCT(BlueprintType)
struct FVelocityDebug {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double LinearVelocity;
    
    UPROPERTY(EditAnywhere)
    double AngularVelocity;
    
    STALKER2_API FVelocityDebug();
};

