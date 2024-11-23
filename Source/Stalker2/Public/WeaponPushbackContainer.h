#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "WeaponPushbackContainer.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FWeaponPushbackContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayBeforeBlendStarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAlphaBlendArgs BlendInArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAlphaBlendArgs BlendOutArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* PushbackRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* PushbackTranslationCurve;
    
    STALKER2_API FWeaponPushbackContainer();
};

