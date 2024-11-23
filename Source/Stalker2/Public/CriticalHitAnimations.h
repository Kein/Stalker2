#pragma once
#include "CoreMinimal.h"
#include "DirectionalAnimation.h"
#include "CriticalHitAnimations.generated.h"

USTRUCT(BlueprintType)
struct FCriticalHitAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FName> HitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDirectionalAnimation> DirectionalAnimations;
    
    STALKER2_API FCriticalHitAnimations();
};

