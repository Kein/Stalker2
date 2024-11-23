#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "AnimNotifyBase.h"
#include "EAnimationHands.h"
#include "AnimNotify_HandIK.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_HandIK : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAnimationHands HandToApply;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForceSetStartValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EndValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAlphaBlendOption BlendOption;
    
    UAnimNotify_HandIK();

};

