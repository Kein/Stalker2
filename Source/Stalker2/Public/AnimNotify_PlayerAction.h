#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EActionType.h"
#include "EPlayerActionResult.h"
#include "EPlayerTriggerState.h"
#include "AnimNotify_PlayerAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_PlayerAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPlayerActionResult PlayerActionResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EActionType PlayerActionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPlayerTriggerState PlayerTriggerToOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EActionType PlayerActionTypeToOverride;
    
    UAnimNotify_PlayerAction();

};

