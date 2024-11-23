#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AlphaBlend.h"
#include "AnimNotifyState_FOVBlend.generated.h"

class UCurveFloat;

UCLASS(CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotifyState_FOVBlend : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsBlendIn;
    
    UPROPERTY(EditAnywhere)
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CustomCurve;
    
    UPROPERTY(EditAnywhere)
    bool bShouldBlendWeaponInHands;
    
    UAnimNotifyState_FOVBlend();

};

