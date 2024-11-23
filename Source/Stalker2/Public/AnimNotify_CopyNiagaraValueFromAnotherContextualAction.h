#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyBase.h"
#include "NiagaraValueCopyFromTo.h"
#include "AnimNotify_CopyNiagaraValueFromAnotherContextualAction.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_CopyNiagaraValueFromAnotherContextualAction : public UAnimNotifyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FNiagaraValueCopyFromTo CopyFromTo;
    
public:
    UAnimNotify_CopyNiagaraValueFromAnotherContextualAction();

};

