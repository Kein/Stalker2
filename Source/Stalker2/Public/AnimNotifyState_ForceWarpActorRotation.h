#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_ForceWarpActorRotation.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_ForceWarpActorRotation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WarpTargetName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldExcludeWarpTargetAfterComplete;
    
    UAnimNotifyState_ForceWarpActorRotation();

};

