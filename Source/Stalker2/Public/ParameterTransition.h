#pragma once
#include "CoreMinimal.h"
#include "ParameterTransition.generated.h"

USTRUCT()
struct FParameterTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartOffset;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    STALKER2_API FParameterTransition();
};

