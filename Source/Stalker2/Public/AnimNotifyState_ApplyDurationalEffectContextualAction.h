#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ModifyVFXValue.h"
#include "AnimNotifyState_ApplyDurationalEffectContextualAction.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class STALKER2_API UAnimNotifyState_ApplyDurationalEffectContextualAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FModifyVFXValue> ModifyVFXAttachmentsValue;
    
    UAnimNotifyState_ApplyDurationalEffectContextualAction();

};

