#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ContextualItemAttachment.h"
#include "AnimNotify_AttachItemContextualAction.generated.h"

UCLASS(CollapseCategories)
class STALKER2_API UAnimNotify_AttachItemContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FContextualItemAttachment> ContextualItemAttachments;
    
public:
    UAnimNotify_AttachItemContextualAction();

};

