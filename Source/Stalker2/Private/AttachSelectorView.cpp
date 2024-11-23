#include "AttachSelectorView.h"

UAttachSelectorView::UAttachSelectorView() {
    this->SlotGridPanel = NULL;
    this->AttachSelectorTip = NULL;
    this->FastChangeSlotTime = 0.10f;
    this->DetachSlot = NULL;
    this->CurrentChooseLine = ESlotDirection::Up;
    this->IndexCurrentSelectedSlot = 0;
    this->SelectedSlot = NULL;
    this->LastHoveredAttach = NULL;
    this->LastTriggeredDirection = ESlotDirection::Up;
}

void UAttachSelectorView::UIIterateUpSlots() {
}

void UAttachSelectorView::UIIterateRightSlots() {
}

void UAttachSelectorView::UIIterateLeftSlots() {
}

void UAttachSelectorView::UIIterateDownSlots() {
}

void UAttachSelectorView::SetCurrentChooseLine(const ESlotDirection InCurrentChooseLine) {
}

void UAttachSelectorView::DetachAllAttachByDirection() {
}

void UAttachSelectorView::AttachSelectorSlotUp() {
}

void UAttachSelectorView::AttachSelectorSlotSelect() {
}

void UAttachSelectorView::AttachSelectorSlotRight() {
}

void UAttachSelectorView::AttachSelectorSlotLeft() {
}

void UAttachSelectorView::AttachSelectorSlotDown() {
}

void UAttachSelectorView::AttachSelectorDetachAll() {
}


