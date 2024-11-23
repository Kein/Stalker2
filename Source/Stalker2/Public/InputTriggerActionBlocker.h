#pragma once
#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "InputTriggerActionBlocker.generated.h"

class UActionBlockerConditionBase;

UCLASS(CollapseCategories, EditInlineNew)
class STALKER2_API UInputTriggerActionBlocker : public UInputTrigger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UActionBlockerConditionBase* Condition;
    
public:
    UInputTriggerActionBlocker();

};

