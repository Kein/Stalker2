#pragma once
#include "CoreMinimal.h"
#include "EAnimationStealthState.h"
#include "AnimPlayerStealthData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerStealthData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bStealth;
    
    UPROPERTY(BlueprintReadOnly)
    float StealthInFrame;
    
    UPROPERTY(BlueprintReadOnly)
    float StealthOutFrame;
    
    UPROPERTY(BlueprintReadOnly)
    float StealthAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimationStealthState StealthState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* StealthKillSnapCurve;
    
    FAnimPlayerStealthData();
};

