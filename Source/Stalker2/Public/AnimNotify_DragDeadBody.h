#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EDragDeadBodyState.h"
#include "AnimNotify_DragDeadBody.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_DragDeadBody : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDragDeadBodyState DragDeadBodyState;
    
    UAnimNotify_DragDeadBody();

};

