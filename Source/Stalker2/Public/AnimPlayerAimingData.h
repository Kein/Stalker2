#pragma once
#include "CoreMinimal.h"
#include "EAnimationAimState.h"
#include "AnimPlayerAimingData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerAimingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bAiming;
    
    UPROPERTY(BlueprintReadOnly)
    float AimInFrame;
    
    UPROPERTY(BlueprintReadOnly)
    float AimOutFrame;
    
    UPROPERTY(BlueprintReadOnly)
    float AimAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float AimCameraShakeAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    EAnimationAimState AimState;
    
    FAnimPlayerAimingData();
};

