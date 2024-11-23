#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_PreciseRootMotion.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_PreciseRootMotion : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LoopTimeCompareTolerance;
    
    UAnimNotifyState_PreciseRootMotion();

};

