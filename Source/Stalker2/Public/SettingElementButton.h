#pragma once
#include "CoreMinimal.h"
#include "ENestingIndex.h"
#include "SettingElement.h"
#include "SettingElementButton.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API USettingElementButton : public USettingElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    ENestingIndex NestingWindowIndex;
    
public:
    USettingElementButton();

private:
    UFUNCTION()
    void ChangeLegendOnUnhovered();
    
    UFUNCTION()
    void ChangeLegendOnHovered();
    
};

