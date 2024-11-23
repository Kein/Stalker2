#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PopupHintImage.generated.h"

class UHintImageKeyboard;

UCLASS(EditInlineNew)
class STALKER2_API UPopupHintImage : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHintImageKeyboard* HintImageKeyboard;
    
public:
    UPopupHintImage();

};

