#pragma once
#include "CoreMinimal.h"
#include "WLParticlesPropertyState.generated.h"

USTRUCT(BlueprintType)
struct FWLParticlesPropertyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PropertyName;
    
    UPROPERTY(EditAnywhere)
    float TargetValue;
    
    UPROPERTY(EditAnywhere)
    float InterpolationSpeed;
    
    STALKER2_API FWLParticlesPropertyState();
};

