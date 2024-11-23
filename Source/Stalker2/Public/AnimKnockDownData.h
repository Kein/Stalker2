#pragma once
#include "CoreMinimal.h"
#include "EKnockedDownState.h"
#include "AnimKnockDownData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimKnockDownData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EKnockedDownState KnockedDownState;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsStillKnockedDown;
    
    FAnimKnockDownData();
};

