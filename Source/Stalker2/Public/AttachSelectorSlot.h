#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAttachSlotState.h"
#include "ESlotDirection.h"
#include "WidgetBase.h"
#include "AttachSelectorSlot.generated.h"

class UAttachSelectorTip;
class UButton;
class UImage;
class UImageWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UAttachSelectorSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D SlotSize;
    
    UPROPERTY(EditAnywhere)
    ESlotDirection SlotDirection;
    
private:
    UPROPERTY(Instanced)
    UImageWidget* AttachIcon;
    
    UPROPERTY(Instanced)
    UButton* AttachButton;
    
    UPROPERTY(Instanced)
    UImage* AttachBackground;
    
    UPROPERTY(Instanced)
    UImage* DeactivateBackground;
    
    UPROPERTY(Instanced)
    UImage* AttachBackgroundHighlighted;
    
    UPROPERTY(Instanced)
    UImage* AttachBackgroundSelected;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* AttachWidgetSwitcher;
    
    UPROPERTY(Instanced)
    UImageWidget* DefaultAttachIcon;
    
    UPROPERTY(Instanced)
    UImageWidget* SelectedAttachIcon;
    
    UPROPERTY(EditDefaultsOnly)
    int32 AttachSlotIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DetachSlotIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DefaultSlotIndex;
    
    UPROPERTY(Instanced, Transient)
    UAttachSelectorTip* SelectorTip;
    
    UPROPERTY(Transient)
    EAttachSlotState AttachSlotState;
    
    UPROPERTY(EditAnywhere)
    uint8 SlotStateFlagEditorOnly;
    
    UPROPERTY(EditDefaultsOnly)
    float DisabledOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float SelectedHighlightedOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float FilledOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    float EmptyOpacity;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D DetachHighlightIconScale;
    
    UPROPERTY(Transient)
    UWidgetAnimation* Shake;
    
    UPROPERTY(Transient)
    UWidgetAnimation* MoveRight;
    
    UPROPERTY(Transient)
    UWidgetAnimation* MoveLeft;
    
    UPROPERTY(Transient)
    UWidgetAnimation* MoveUp;
    
    UPROPERTY(Transient)
    UWidgetAnimation* MoveDown;
    
    UPROPERTY(Transient)
    UWidgetAnimation* MoveDownLeft;
    
    UPROPERTY(Transient)
    UWidgetAnimation* MoveDownRight;
    
    UPROPERTY(Transient)
    UWidgetAnimation* MoveUpRight;
    
    UPROPERTY(Transient)
    UWidgetAnimation* MoveUpLeft;
    
    UPROPERTY(Transient)
    UWidgetAnimation* Select;
    
public:
    UAttachSelectorSlot();

    UFUNCTION()
    void SelectAndEquipAttach();
    
    UFUNCTION()
    void OnUnhoverSlot();
    
private:
    UFUNCTION()
    void OnButtonHover();
    
};

