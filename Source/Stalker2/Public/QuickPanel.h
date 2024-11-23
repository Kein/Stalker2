#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChildViewBase.h"
#include "ESortGroup.h"
#include "QuickPanel.generated.h"

class UBorder;
class UCanvasPanelSlot;
class UHintAction;
class UHintInputController;
class UImage;
class UInventoryNew;
class UQuickSlot;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UQuickPanel : public UChildViewBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFillQuickSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESortGroup SlotADefaultEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESortGroup SlotBDefaultEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESortGroup SlotCDefaultEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESortGroup SlotDDefaultEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bAnimate;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float UpdateShouldUseAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* AnimPanelHide;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* AnimPanelShow;
    
    UPROPERTY(Instanced)
    UBorder* NavBorder;
    
    UPROPERTY(Instanced, Transient)
    UCanvasPanelSlot* NavBorderSlot;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DefaultNavBorderColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor DraggingNavBorderColor;
    
protected:
    UPROPERTY(Instanced)
    UHintInputController* LeftHint;
    
    UPROPERTY(Instanced)
    UHintInputController* RightHint;
    
    UPROPERTY(Instanced)
    UQuickSlot* QuickSlot1;
    
    UPROPERTY(Instanced)
    UQuickSlot* QuickSlot3;
    
    UPROPERTY(Instanced)
    UQuickSlot* QuickSlot2;
    
    UPROPERTY(Instanced)
    UQuickSlot* QuickSlot4;
    
    UPROPERTY(Instanced)
    TArray<UQuickSlot*> QuickSlots;
    
    UPROPERTY(Instanced)
    UImage* HoldProgressLeft;
    
    UPROPERTY(Instanced)
    UImage* HoldProgressRight;
    
    UPROPERTY(Instanced)
    UHintAction* HintLeft;
    
    UPROPERTY(Instanced)
    UHintAction* HintRight;
    
    UPROPERTY(EditAnywhere)
    float HoldInactiveOpacity;
    
    UPROPERTY(EditAnywhere)
    float HoldActiveOpacity;
    
    UPROPERTY(EditAnywhere)
    float HidePanelDelay;
    
    UPROPERTY(EditAnywhere)
    float QuickSlotsFadeIn;
    
    UPROPERTY(EditAnywhere)
    float QuickSlotsFadeOut;
    
    UPROPERTY(EditAnywhere)
    bool bInventoryQuickPanel;
    
    UPROPERTY(Instanced)
    UQuickSlot* CurrSelectedSlot;
    
private:
    UPROPERTY(Instanced, Transient)
    UInventoryNew* InventoryNew;
    
public:
    UQuickPanel();

    UFUNCTION()
    void UpdateShouldUseAnimation() const;
    
    UFUNCTION()
    bool PlayShouldUseAnimationIfRequired(ESortGroup InSortGroup) const;
    
    UFUNCTION()
    void OnQuickSlotMouseLeave(UQuickSlot* HoveredWidget);
    
    UFUNCTION()
    void OnQuickSlotMouseEnter(UQuickSlot* ItemWidget);
    
};

