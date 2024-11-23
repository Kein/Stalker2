#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "DialogActionWidget.generated.h"

class UImageWidget;

UCLASS(EditInlineNew)
class STALKER2_API UDialogActionWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImageWidget* Icon;
    
public:
    UDialogActionWidget();

};

