#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_GSCPlayMontageNotifyWindow.h"
#include "AnimNotifyState_ThrowGrenade.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_ThrowGrenade : public UAnimNotify_GSCPlayMontageNotifyWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneName;
    
public:
    UAnimNotifyState_ThrowGrenade();

};

