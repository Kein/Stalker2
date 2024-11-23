#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "EStashActionType.h"
#include "AnimNotify_StashSound.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_StashSound : public UAnimNotifyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStashActionType StashActionType;
    
public:
    UAnimNotify_StashSound();

};

