#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "RepairPriceWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API URepairPriceWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* Price;
    
public:
    URepairPriceWidget();

};

