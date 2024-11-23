#pragma once
#include "CoreMinimal.h"
#include "ESettingCategoryType.h"
#include "WidgetBase.h"
#include "SettingsPage.generated.h"

class UScrollBox;

UCLASS(EditInlineNew)
class STALKER2_API USettingsPage : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UScrollBox* OptionsContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESettingCategoryType Category;
    
public:
    USettingsPage();

};

