#pragma once
#include "CoreMinimal.h"
#include "ContextualActionEffect.h"
#include "EContextualActionNeeds.h"
#include "AddNeedEffect.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UAddNeedEffect : public UContextualActionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EContextualActionNeeds ContextualActionNeedForAdd;
    
    UAddNeedEffect();

};

