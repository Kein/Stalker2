#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EStateTag.h"
#include "AnimNotify_EnableStateTagForDuration.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotify_EnableStateTagForDuration : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStateTag StateTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDisableIfDied;
    
    UAnimNotify_EnableStateTagForDuration();

};

