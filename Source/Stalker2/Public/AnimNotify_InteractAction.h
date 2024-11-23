#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EAnimInteractAction.h"
#include "AnimNotify_InteractAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_InteractAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAnimInteractAction InteractAction;
    
public:
    UAnimNotify_InteractAction();

};

