#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "PressBuildControlSettingsWidget.generated.h"

class ULocalizedImage;

UCLASS(EditInlineNew)
class STALKER2_API UPressBuildControlSettingsWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    ULocalizedImage* Gamepad;
    
    UPROPERTY(Instanced)
    ULocalizedImage* Keyboard;
    
public:
    UPressBuildControlSettingsWidget();

};

