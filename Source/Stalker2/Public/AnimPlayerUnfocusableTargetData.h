#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerUnfocusableTargetData.generated.h"

USTRUCT(BlueprintType)
struct FAnimPlayerUnfocusableTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTargetingUnfocusable;
    
    STALKER2_API FAnimPlayerUnfocusableTargetData();
};

