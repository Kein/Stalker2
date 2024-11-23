#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EDialogAnimationType.h"
#include "AnimNotify_LaunchDialogAnimation.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_LaunchDialogAnimation : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDialogAnimationType DialogAnimationType;
    
    UAnimNotify_LaunchDialogAnimation();

};

