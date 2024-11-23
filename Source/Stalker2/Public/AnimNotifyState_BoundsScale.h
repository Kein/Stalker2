#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_BoundsScale.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_BoundsScale : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BoundsScale;
    
    UAnimNotifyState_BoundsScale();

};

