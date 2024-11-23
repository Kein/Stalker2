#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AlphaBlend.h"
#include "EAnimationHands.h"
#include "AnimNotify_HandIKState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotify_HandIKState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAnimationHands HandToApply;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EndValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAlphaBlendOption BlendOption;
    
    UAnimNotify_HandIKState();

};

