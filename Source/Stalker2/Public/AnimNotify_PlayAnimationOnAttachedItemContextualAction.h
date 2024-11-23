#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "PlayAnimationOnAttachedItemData.h"
#include "AnimNotify_PlayAnimationOnAttachedItemContextualAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_PlayAnimationOnAttachedItemContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPlayAnimationOnAttachedItemData> PlayAnimationOnAttachedItemData;
    
    UAnimNotify_PlayAnimationOnAttachedItemContextualAction();

};

