#pragma once
#include "CoreMinimal.h"
#include "ContextualActionEffect.h"
#include "EContextualActionNeeds.h"
#include "RemoveNeedEffect.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API URemoveNeedEffect : public UContextualActionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EContextualActionNeeds ContextualActionNeedForRemove;
    
    URemoveNeedEffect();

};

