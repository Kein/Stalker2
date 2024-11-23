#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ModioCategorySelectionBox.generated.h"

class UModioCategorySelectionBoxEntry;
class UPanelWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioCategorySelectionBox : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* CheckboxPanel;
    
private:
    UPROPERTY(Instanced, Transient)
    TArray<UModioCategorySelectionBoxEntry*> CheckboxList;
    
    UPROPERTY(Instanced, Transient)
    UModioCategorySelectionBoxEntry* SelectedCheckbox;
    
public:
    UModioCategorySelectionBox();

};

