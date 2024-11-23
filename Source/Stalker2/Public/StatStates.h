#pragma once
#include "CoreMinimal.h"
#include "StatStates.generated.h"

USTRUCT()
struct FStatStates {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Weak;
    
    UPROPERTY()
    float Medium;
    
    UPROPERTY()
    float Strong;
    
    STALKER2_API FStatStates();
};

