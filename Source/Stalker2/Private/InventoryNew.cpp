#include "InventoryNew.h"

UInventoryNew::UInventoryNew() {
    this->CanvasPanel = NULL;
    this->EquipmentWidget = NULL;
    this->QuickPanel = NULL;
    this->InventoryWidget = NULL;
    this->CurrSelectedItem = NULL;
    this->HoveredItem = NULL;
    this->CurrClickedItem = NULL;
    this->TakeAllIcon = NULL;
    this->LootSeparator = NULL;
    this->LootGridWidget = NULL;
    this->ButtonTakeAllItems = NULL;
    this->DropZone = NULL;
    this->RejectDropZoneInventory = NULL;
    this->RejectDropZoneEquipment = NULL;
    this->RejectDropZoneLootSmall = NULL;
    this->RejectDropZoneLootBig = NULL;
    this->ContextualDropZone = NULL;
    this->HintsOverlay = NULL;
    this->SafeZoneOverlay = NULL;
    this->HintToggleEquipment = NULL;
    this->HintToggleDescription = NULL;
    this->HintToggleAutoComparing = NULL;
    this->HintClose = NULL;
    this->HintBack = NULL;
    this->HintUseItem = NULL;
    this->HintEquip = NULL;
    this->HintMoveToBackpack = NULL;
    this->HintRemoveAttach = NULL;
    this->HintUnload = NULL;
    this->HintChangeCompareItemHint = NULL;
    this->HintDropItem = NULL;
    this->HintLootTakeItem = NULL;
    this->HintLootPutDown = NULL;
    this->HintLootTakeAll = NULL;
    this->HintSortInventory = NULL;
    this->HintShowContextualMenu = NULL;
    this->HintMoveItem = NULL;
    this->HintPlaceItem = NULL;
    this->HintRemoveQuickAccess = NULL;
    this->UseItemHoldTime = 1.50f;
    this->DropItemHoldTime = 1.50f;
    this->UpgradeMenu = NULL;
    this->SortButton = NULL;
    this->LootOverlay = NULL;
    this->IconTakeAllItems = NULL;
    this->TooltipAndHintsPadding = 100.00f;
    this->ItemTypeSwitchValue = NULL;
    this->TooltipDistance = 10.00f;
    this->CurrGamepadNavigatedWidget = NULL;
    this->DragWidget = NULL;
    this->DragWidgetGrid = NULL;
    this->ItemTooltipShowDelay = 0.50f;
    this->ItemTooltipCompareShowDelay = 0.50f;
    this->ItemTooltipClass = NULL;
    this->DragWidgetClass = NULL;
    this->DragGridWidgetClass = NULL;
    this->StackSplitWidgetClass = NULL;
    this->StackSplitContextual = NULL;
    this->StackSplit = NULL;
    this->GamepadNavigationThreshold = 0.20f;
    this->RadiationMark = NULL;
    this->RightClickMenuWidget = NULL;
    this->ItemSlotStartedDrag = NULL;
    this->CurrGamepadSelectedItem = NULL;
    this->CurrentCompareSlot = EInventoryEquipmentSlot::PrimaryWeapon;
    this->EquipmentSlotToCompare = NULL;
    this->CurrentCompareItemSlotType = EInventoryEquipmentSlot::PrimaryWeapon;
}

void UInventoryNew::UseItemHoldReleased() {
}

void UInventoryNew::UpdateInputDependent() {
}

void UInventoryNew::UIInventoryToggleItemInfo() {
}

void UInventoryNew::UIInventoryToggleEquipment() {
}

void UInventoryNew::UIInventoryTakeItem() {
}

void UInventoryNew::UIInventorySort() {
}

void UInventoryNew::UIInventoryNavigateUp() {
}

void UInventoryNew::UIInventoryNavigateRight() {
}

void UInventoryNew::UIInventoryNavigateLeft() {
}

void UInventoryNew::UIInventoryNavigateDown() {
}

void UInventoryNew::UIInventoryNavigateComparingUp() {
}

void UInventoryNew::UIInventoryNavigateComparingRight() {
}

void UInventoryNew::UIInventoryNavigateComparingLeft() {
}

void UInventoryNew::UIInventoryNavigateComparingDown() {
}

void UInventoryNew::UIInventoryItemAction() {
}

void UInventoryNew::UIInventoryEnableAutoComparing() {
}

void UInventoryNew::UIInventoryDropItem() {
}

void UInventoryNew::UIInventoryCompareItem() {
}

void UInventoryNew::UIInventoryChangeComparingItem() {
}

void UInventoryNew::UIGamepadInventoryItemAction() {
}

void UInventoryNew::SortInventory() {
}

void UInventoryNew::ShowTooltip() {
}

void UInventoryNew::OnVisibilityChangedEvent(ESlateVisibility NewVisibility) {
}

void UInventoryNew::OnUseItemHoldTriggered() {
}

void UInventoryNew::OnTakeAllHoldTriggered() {
}

void UInventoryNew::OnSplitConfirmed(int32 ItemAmountSplitForDrop, const FItemUID ItemUID) {
}

void UInventoryNew::OnSplitCanceled() {
}

void UInventoryNew::OnRightClickMenuItemSelected(const FRightClickMenuItemData& ItemData) {
}

void UInventoryNew::OnRightClickMenuItemHover(const FRightClickMenuItemData& ItemData, const bool bInHover) {
}

void UInventoryNew::OnRightClickMenuCanceled() {
}

void UInventoryNew::OnRejectDrop(const FVector2D Pos) {
}

void UInventoryNew::OnMoveToBackpackHoldTriggered() {
}

void UInventoryNew::OnGamepadSelectItemRelease() {
}

void UInventoryNew::OnGamepadSelectItemForMoveRepeat() {
}

void UInventoryNew::OnGamepadSelectItemForMovePress() {
}

void UInventoryNew::OnGamepadItemSelectHoldFinished() {
}

void UInventoryNew::OnGamepadEquipItem() {
}

void UInventoryNew::OnGamepadContextMenu() {
}

void UInventoryNew::OnGamepadCompareItemRepeat() {
}

void UInventoryNew::OnGamepadCompareItemRelease() {
}

void UInventoryNew::OnGamepadCompareItemPress() {
}

void UInventoryNew::OnExitClick(FName ButtonId) {
}

void UInventoryNew::OnEquipHoldTriggered() {
}

void UInventoryNew::OnDropToEmptyPlace(const FVector2D Pos) {
}

void UInventoryNew::OnDropItemHoldTriggered() {
}

void UInventoryNew::OnDragDropCanceled(const FVector2D Pos) {
}

void UInventoryNew::LootTakeItemAction() {
}

void UInventoryNew::LootTakeAllHoldStarted() {
}

void UInventoryNew::LootTakeAllHoldReleased() {
}

void UInventoryNew::InventoryWidgetTakeAllItems() {
}

void UInventoryNew::HideRightClickMenu() {
}

void UInventoryNew::GamepadDragStop() {
}

void UInventoryNew::DropItemHoldReleased() {
}


