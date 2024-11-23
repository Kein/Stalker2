#pragma once
#include "CoreMinimal.h"
#include "MovementRotationStructure.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FMovementRotationStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float TurnTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableTurnInterp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnInterpThreshold;
    
    FMovementRotationStructure();
};

