#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerLookAtPreset.generated.h"

USTRUCT(BlueprintType)
struct FAnimPlayerLookAtPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationFreemoveEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationStopEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldRepeatTargetMovement;
    
    STALKER2_API FAnimPlayerLookAtPreset();
};

