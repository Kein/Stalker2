#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PlayerStorageData.generated.h"

class UTooltipRecord;

UCLASS(EditInlineNew)
class STALKER2_API UPlayerStorageData : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTooltipRecord* ItemsAmount;
    
    UPROPERTY(Instanced)
    UTooltipRecord* ItemsWeight;
    
public:
    UPlayerStorageData();

};

