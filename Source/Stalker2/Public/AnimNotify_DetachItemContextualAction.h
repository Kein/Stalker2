#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ContextualItemDetachment.h"
#include "AnimNotify_DetachItemContextualAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_DetachItemContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FContextualItemDetachment> ContextualItemAttachments;
    
    UAnimNotify_DetachItemContextualAction();

};

