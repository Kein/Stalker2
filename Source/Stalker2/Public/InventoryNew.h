#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EInventoryEquipmentSlot.h"
#include "ItemUID.h"
#include "RightClickMenuItemData.h"
#include "Templates/SubclassOf.h"
#include "ViewBaseExtended.h"
#include "InventoryNew.generated.h"

class UAkSwitchValue;
class UButton;
class UCanvasPanel;
class UCustomGrid;
class UCustomGridSlot;
class UDragDropZone;
class UEquipmentSlot;
class UEquipmentSlots;
class UHintInputController;
class UImage;
class UInteractableItemSlotBaseWidget;
class UItemDragWidget;
class UItemInfo;
class UOverlay;
class UQuickPanel;
class UStackSplitContextual;
class UStackSplittingWidget;
class UTextWidget;
class UUpgradeMenuWidget;
class UUserWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class STALKER2_API UInventoryNew : public UViewBaseExtended {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(Instanced)
    UEquipmentSlots* EquipmentWidget;
    
    UPROPERTY(Instanced)
    UQuickPanel* QuickPanel;
    
    UPROPERTY(Instanced)
    UCustomGrid* InventoryWidget;
    
    UPROPERTY(Instanced)
    UInteractableItemSlotBaseWidget* CurrSelectedItem;
    
    UPROPERTY(Instanced)
    UInteractableItemSlotBaseWidget* HoveredItem;
    
    UPROPERTY(Instanced)
    UInteractableItemSlotBaseWidget* CurrClickedItem;
    
    UPROPERTY(Instanced)
    UImage* TakeAllIcon;
    
    UPROPERTY(Instanced)
    UTextWidget* LootSeparator;
    
    UPROPERTY(Instanced)
    UCustomGrid* LootGridWidget;
    
    UPROPERTY(Instanced)
    UButton* ButtonTakeAllItems;
    
    UPROPERTY(Instanced)
    UDragDropZone* DropZone;
    
    UPROPERTY(Instanced)
    UDragDropZone* RejectDropZoneInventory;
    
    UPROPERTY(Instanced)
    UDragDropZone* RejectDropZoneEquipment;
    
    UPROPERTY(Instanced)
    UDragDropZone* RejectDropZoneLootSmall;
    
    UPROPERTY(Instanced)
    UDragDropZone* RejectDropZoneLootBig;
    
    UPROPERTY(Instanced)
    UDragDropZone* ContextualDropZone;
    
    UPROPERTY(Instanced)
    UOverlay* HintsOverlay;
    
    UPROPERTY(Instanced)
    UOverlay* SafeZoneOverlay;
    
    UPROPERTY(Instanced)
    UHintInputController* HintToggleEquipment;
    
    UPROPERTY(Instanced)
    UHintInputController* HintToggleDescription;
    
    UPROPERTY(Instanced)
    UHintInputController* HintToggleAutoComparing;
    
    UPROPERTY(Instanced)
    UHintInputController* HintClose;
    
    UPROPERTY(Instanced)
    UHintInputController* HintBack;
    
    UPROPERTY(Instanced)
    UHintInputController* HintUseItem;
    
    UPROPERTY(Instanced)
    UHintInputController* HintEquip;
    
    UPROPERTY(Instanced)
    UHintInputController* HintMoveToBackpack;
    
    UPROPERTY(Instanced)
    UHintInputController* HintRemoveAttach;
    
    UPROPERTY(Instanced)
    UHintInputController* HintUnload;
    
    UPROPERTY(Instanced)
    UHintInputController* HintChangeCompareItemHint;
    
    UPROPERTY(Instanced)
    UHintInputController* HintDropItem;
    
    UPROPERTY(Instanced)
    UHintInputController* HintLootTakeItem;
    
    UPROPERTY(Instanced)
    UHintInputController* HintLootPutDown;
    
    UPROPERTY(Instanced)
    UHintInputController* HintLootTakeAll;
    
    UPROPERTY(Instanced)
    UHintInputController* HintSortInventory;
    
    UPROPERTY(Instanced)
    UHintInputController* HintShowContextualMenu;
    
    UPROPERTY(Instanced)
    UHintInputController* HintMoveItem;
    
    UPROPERTY(Instanced)
    UHintInputController* HintPlaceItem;
    
    UPROPERTY(Instanced)
    UHintInputController* HintRemoveQuickAccess;
    
    UPROPERTY(EditDefaultsOnly)
    float UseItemHoldTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DropItemHoldTime;
    
    UPROPERTY(Instanced)
    UUpgradeMenuWidget* UpgradeMenu;
    
    UPROPERTY(Instanced)
    UButton* SortButton;
    
    UPROPERTY(Instanced)
    UOverlay* LootOverlay;
    
    UPROPERTY(Instanced)
    UImage* IconTakeAllItems;
    
    UPROPERTY(EditDefaultsOnly)
    float TooltipAndHintsPadding;
    
    UPROPERTY(Instanced)
    TArray<UHintInputController*> VisibleStateHints;
    
    UPROPERTY(Instanced)
    TArray<UHintInputController*> CommonHints;
    
    UPROPERTY()
    UAkSwitchValue* ItemTypeSwitchValue;
    
    UPROPERTY(EditDefaultsOnly)
    float TooltipDistance;
    
    UPROPERTY(Transient)
    TMap<UUserWidget*, ESlateVisibility> GridVisibilityMap;
    
public:
    UPROPERTY(Instanced)
    UUserWidget* CurrGamepadNavigatedWidget;
    
    UPROPERTY(Instanced)
    UItemDragWidget* DragWidget;
    
    UPROPERTY(Instanced)
    UItemDragWidget* DragWidgetGrid;
    
    UPROPERTY(EditAnywhere)
    float ItemTooltipShowDelay;
    
    UPROPERTY(EditAnywhere)
    float ItemTooltipCompareShowDelay;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UItemInfo> ItemTooltipClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UItemDragWidget> DragWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UItemDragWidget> DragGridWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UStackSplittingWidget> StackSplitWidgetClass;
    
    UPROPERTY(Instanced)
    UStackSplitContextual* StackSplitContextual;
    
    UPROPERTY(Instanced)
    UStackSplittingWidget* StackSplit;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ItemBacktDefault;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ItemBackOk;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ItemBackInterceptOne;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ItemBackInterceptTwo;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ItemBackDepend;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ItemBackHoveredCompatible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GamepadNavigationThreshold;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UWidgetAnimation* RadiationMark;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ToggleEquipmentIconColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor OverWeightColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor NormalWeightColor;
    
protected:
    UPROPERTY(Instanced)
    UUserWidget* RightClickMenuWidget;
    
    UPROPERTY(Instanced)
    UInteractableItemSlotBaseWidget* ItemSlotStartedDrag;
    
    UPROPERTY(Instanced)
    UInteractableItemSlotBaseWidget* CurrGamepadSelectedItem;
    
    UPROPERTY()
    EInventoryEquipmentSlot CurrentCompareSlot;
    
    UPROPERTY(Instanced)
    UEquipmentSlot* EquipmentSlotToCompare;
    
    UPROPERTY()
    EInventoryEquipmentSlot CurrentCompareItemSlotType;
    
    UPROPERTY(Instanced)
    TArray<UCustomGridSlot*> GridSlotsPool;
    
public:
    UInventoryNew();

    UFUNCTION()
    void UseItemHoldReleased();
    
protected:
    UFUNCTION()
    void UpdateInputDependent();
    
public:
    UFUNCTION()
    void UIInventoryToggleItemInfo();
    
    UFUNCTION()
    void UIInventoryToggleEquipment();
    
protected:
    UFUNCTION()
    void UIInventoryTakeItem();
    
public:
    UFUNCTION()
    void UIInventorySort();
    
    UFUNCTION()
    void UIInventoryNavigateUp();
    
    UFUNCTION()
    void UIInventoryNavigateRight();
    
    UFUNCTION()
    void UIInventoryNavigateLeft();
    
    UFUNCTION()
    void UIInventoryNavigateDown();
    
    UFUNCTION()
    void UIInventoryNavigateComparingUp();
    
    UFUNCTION()
    void UIInventoryNavigateComparingRight();
    
    UFUNCTION()
    void UIInventoryNavigateComparingLeft();
    
    UFUNCTION()
    void UIInventoryNavigateComparingDown();
    
    UFUNCTION()
    void UIInventoryItemAction();
    
    UFUNCTION()
    void UIInventoryEnableAutoComparing();
    
    UFUNCTION()
    void UIInventoryDropItem();
    
    UFUNCTION()
    void UIInventoryCompareItem();
    
    UFUNCTION()
    void UIInventoryChangeComparingItem();
    
    UFUNCTION()
    void UIGamepadInventoryItemAction();
    
protected:
    UFUNCTION()
    void SortInventory();
    
    UFUNCTION()
    void ShowTooltip();
    
    UFUNCTION()
    void OnVisibilityChangedEvent(ESlateVisibility NewVisibility);
    
    UFUNCTION()
    void OnUseItemHoldTriggered();
    
    UFUNCTION()
    void OnTakeAllHoldTriggered();
    
    UFUNCTION()
    void OnSplitConfirmed(int32 ItemAmountSplitForDrop, const FItemUID ItemUID);
    
public:
    UFUNCTION()
    void OnSplitCanceled();
    
protected:
    UFUNCTION()
    void OnRightClickMenuItemSelected(const FRightClickMenuItemData& ItemData);
    
    UFUNCTION()
    void OnRightClickMenuItemHover(const FRightClickMenuItemData& ItemData, const bool bInHover);
    
    UFUNCTION()
    void OnRightClickMenuCanceled();
    
public:
    UFUNCTION()
    void OnRejectDrop(const FVector2D Pos);
    
protected:
    UFUNCTION()
    void OnMoveToBackpackHoldTriggered();
    
public:
    UFUNCTION()
    void OnGamepadSelectItemRelease();
    
    UFUNCTION()
    void OnGamepadSelectItemForMoveRepeat();
    
    UFUNCTION()
    void OnGamepadSelectItemForMovePress();
    
    UFUNCTION()
    void OnGamepadItemSelectHoldFinished();
    
protected:
    UFUNCTION()
    void OnGamepadEquipItem();
    
public:
    UFUNCTION()
    void OnGamepadContextMenu();
    
    UFUNCTION()
    void OnGamepadCompareItemRepeat();
    
    UFUNCTION()
    void OnGamepadCompareItemRelease();
    
    UFUNCTION()
    void OnGamepadCompareItemPress();
    
protected:
    UFUNCTION()
    void OnExitClick(FName ButtonId);
    
    UFUNCTION()
    void OnEquipHoldTriggered();
    
    UFUNCTION()
    void OnDropToEmptyPlace(const FVector2D Pos);
    
    UFUNCTION()
    void OnDropItemHoldTriggered();
    
    UFUNCTION()
    void OnDragDropCanceled(const FVector2D Pos);
    
public:
    UFUNCTION()
    void LootTakeItemAction();
    
    UFUNCTION()
    void LootTakeAllHoldStarted();
    
    UFUNCTION()
    void LootTakeAllHoldReleased();
    
    UFUNCTION()
    void InventoryWidgetTakeAllItems();
    
protected:
    UFUNCTION()
    void HideRightClickMenu();
    
public:
    UFUNCTION()
    void GamepadDragStop();
    
    UFUNCTION()
    void DropItemHoldReleased();
    
};

