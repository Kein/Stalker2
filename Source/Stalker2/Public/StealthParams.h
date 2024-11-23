#pragma once
#include "CoreMinimal.h"
#include "StealthParams.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FStealthParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlashLightCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VisibilitySizeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VisibilityCrouchCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VisibilityJumpCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VisibilityObstacleHeadCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VisibilityObstacleBodyCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseObstacleCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseCrouchCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NoiseJumpCoef;
    
    FStealthParams();
};

