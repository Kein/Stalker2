#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "LastSaveTimeMenuWidget.generated.h"

class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API ULastSaveTimeMenuWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextWidget* Timestamp;
    
    UPROPERTY(EditDefaultsOnly)
    FString DateFormat;
    
public:
    ULastSaveTimeMenuWidget();

};

