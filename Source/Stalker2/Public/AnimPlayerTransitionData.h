#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerTransitionData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bHasVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    bool bMovingUp;
    
    UPROPERTY(BlueprintReadOnly)
    bool bMovingDown;
    
    UPROPERTY(BlueprintReadOnly)
    bool bReadyForLanding;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanEnterSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LerpToTargetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LerpToTargetTime;
    
    FAnimPlayerTransitionData();
};

