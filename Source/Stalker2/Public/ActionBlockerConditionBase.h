#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActionBlockerConditionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UActionBlockerConditionBase : public UObject {
    GENERATED_BODY()
public:
    UActionBlockerConditionBase();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanTrigger() const;
    
};

