#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SettingsCategory.generated.h"

class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API USettingsCategory : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    FString CategoryNameSID;
    
    UPROPERTY(Instanced)
    UTextWidget* CategoryNameText;
    
public:
    USettingsCategory();

};

