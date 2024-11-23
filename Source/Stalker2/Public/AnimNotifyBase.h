#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ENotifyTriggerType.h"
#include "AnimNotifyBase.generated.h"

UCLASS(Abstract, CollapseCategories)
class UAnimNotifyBase : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ENotifyTriggerType NotifyTriggerType;
    
public:
    UAnimNotifyBase();

};

