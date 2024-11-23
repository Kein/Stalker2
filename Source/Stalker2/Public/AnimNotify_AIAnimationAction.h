#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAIAnimationAction.h"
#include "AnimNotify_AIAnimationAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_AIAnimationAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAIAnimationAction AnimationAction;
    
    UAnimNotify_AIAnimationAction();

};

