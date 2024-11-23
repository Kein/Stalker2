#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "AttachSelectorTip.generated.h"

class UPanelWidget;
class UTextWidget;
class UUniformGridSlot;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UAttachSelectorTip : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextWidget* Text;
    
    UPROPERTY(EditDefaultsOnly)
    float TipPadding;
    
    UPROPERTY(Instanced, Transient)
    UUniformGridSlot* ParentGridSlot;
    
    UPROPERTY(Instanced, Transient)
    UPanelWidget* ParentPanelWidget;
    
public:
    UAttachSelectorTip();

    UFUNCTION()
    void Show();
    
    UFUNCTION()
    void Hide();
    
};

