#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_ForceReloadingEnd.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_ForceReloadingEnd : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsUnloading;
    
    UAnimNotifyState_ForceReloadingEnd();

};

