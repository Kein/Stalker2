#pragma once
#include "CoreMinimal.h"
#include "DirectionalAnimation.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDirectionalAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* Animation;
    
    STALKER2_API FDirectionalAnimation();
};

