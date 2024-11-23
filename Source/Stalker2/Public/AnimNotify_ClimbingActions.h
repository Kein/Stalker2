#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAnimationType.h"
#include "AnimNotify_ClimbingActions.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_ClimbingActions : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAnimationType AnimationType;
    
    UAnimNotify_ClimbingActions();

};

