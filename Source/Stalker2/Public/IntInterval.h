#pragma once
#include "CoreMinimal.h"
#include "IntInterval.generated.h"

USTRUCT()
struct FIntInterval {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Min;
    
    UPROPERTY(EditAnywhere)
    int32 Max;
    
    STALKER2_API FIntInterval();
};

