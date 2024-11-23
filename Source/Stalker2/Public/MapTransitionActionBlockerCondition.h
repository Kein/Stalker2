#pragma once
#include "CoreMinimal.h"
#include "ActionBlockerConditionBase.h"
#include "MapTransitionActionBlockerCondition.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UMapTransitionActionBlockerCondition : public UActionBlockerConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBlockMapTransition;
    
    UMapTransitionActionBlockerCondition();

};

