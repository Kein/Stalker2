#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "TooltipRecord.generated.h"

class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UTooltipRecord : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FString FieldNameSID;
    
protected:
    UPROPERTY(Instanced)
    UTextWidget* FieldName;
    
    UPROPERTY(Instanced)
    UTextWidget* FieldValue;
    
public:
    UTooltipRecord();

};

