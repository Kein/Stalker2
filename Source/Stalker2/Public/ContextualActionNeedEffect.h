#pragma once
#include "CoreMinimal.h"
#include "ContextualActionEffect.h"
#include "EContextualActionNeeds.h"
#include "ContextualActionNeedEffect.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UContextualActionNeedEffect : public UContextualActionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EContextualActionNeeds ContextualActionNeed;
    
    UPROPERTY(EditAnywhere)
    float ChangeValuePerSelector;
    
    UContextualActionNeedEffect();

};

