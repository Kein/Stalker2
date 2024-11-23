#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EPlayerActionTriggerState.h"
#include "EPlayerTriggerState.h"
#include "AnimNotify_PlayerActionTrigger.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_PlayerActionTrigger : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPlayerActionTriggerState TriggerNewState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPlayerTriggerState ActionTrigger;
    
    UAnimNotify_PlayerActionTrigger();

};

