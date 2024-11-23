#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "ConfirmUpgradePopup.generated.h"

class UHintInputController;
class URichTextWidget;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UConfirmUpgradePopup : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextWidget* Title;
    
    UPROPERTY(Instanced)
    URichTextWidget* RichDescription;
    
    UPROPERTY(Instanced)
    UHintInputController* ConfirmHint;
    
    UPROPERTY(Instanced)
    UHintInputController* CancelHint;
    
public:
    UConfirmUpgradePopup();

};

