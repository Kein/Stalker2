#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "ENotifyDialogAction.h"
#include "AnimNotify_DialogAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_DialogAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ENotifyDialogAction NotifyDialogAction;
    
    UAnimNotify_DialogAction();

};

