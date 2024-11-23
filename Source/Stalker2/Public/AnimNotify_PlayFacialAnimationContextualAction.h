#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "WeightedFacialAnimation.h"
#include "AnimNotify_PlayFacialAnimationContextualAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_PlayFacialAnimationContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FWeightedFacialAnimation> FacialAnimations;
    
    UAnimNotify_PlayFacialAnimationContextualAction();

};

