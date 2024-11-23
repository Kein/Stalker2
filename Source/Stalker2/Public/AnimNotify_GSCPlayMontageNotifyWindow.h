#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_GSCPlayMontageNotifyWindow.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotify_GSCPlayMontageNotifyWindow : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag NotifyTag;
    
public:
    UAnimNotify_GSCPlayMontageNotifyWindow();

};

