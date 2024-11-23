#pragma once
#include "CoreMinimal.h"
#include "HitBlocker.generated.h"

USTRUCT(BlueprintType)
struct FHitBlocker {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName JointName;
    
    UPROPERTY(EditAnywhere)
    int32 ElementIndex;
    
    UPROPERTY(EditAnywhere)
    float MaxPiercing;
    
    STALKER2_API FHitBlocker();
};

