#pragma once
#include "CoreMinimal.h"
#include "HumanLookAtAnimations.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FHumanLookAtAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* CoverStandBlindLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* CoverCrouchBlindLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpace* CoverCrouchBlindTop;
    
    STALKER2_API FHumanLookAtAnimations();
};

