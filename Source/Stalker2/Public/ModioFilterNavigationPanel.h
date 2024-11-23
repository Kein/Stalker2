#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ModioFilterNavigationPanel.generated.h"

class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioFilterNavigationPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* SlotContainer;
    
public:
    UModioFilterNavigationPanel();

private:
    UFUNCTION()
    void OnButtonClicked(const int32 ButtonIndex);
    
};

