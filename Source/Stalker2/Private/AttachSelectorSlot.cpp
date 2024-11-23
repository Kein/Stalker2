#include "AttachSelectorSlot.h"

UAttachSelectorSlot::UAttachSelectorSlot() {
    this->SlotDirection = ESlotDirection::Up;
    this->AttachIcon = NULL;
    this->AttachButton = NULL;
    this->AttachBackground = NULL;
    this->DeactivateBackground = NULL;
    this->AttachBackgroundHighlighted = NULL;
    this->AttachBackgroundSelected = NULL;
    this->AttachWidgetSwitcher = NULL;
    this->DefaultAttachIcon = NULL;
    this->SelectedAttachIcon = NULL;
    this->AttachSlotIndex = 0;
    this->DetachSlotIndex = 1;
    this->DefaultSlotIndex = 2;
    this->SelectorTip = NULL;
    this->AttachSlotState = EAttachSlotState::None;
    this->SlotStateFlagEditorOnly = 0;
    this->DisabledOpacity = 0.30f;
    this->SelectedHighlightedOpacity = 0.90f;
    this->FilledOpacity = 0.70f;
    this->EmptyOpacity = 0.50f;
    this->Shake = NULL;
    this->MoveRight = NULL;
    this->MoveLeft = NULL;
    this->MoveUp = NULL;
    this->MoveDown = NULL;
    this->MoveDownLeft = NULL;
    this->MoveDownRight = NULL;
    this->MoveUpRight = NULL;
    this->MoveUpLeft = NULL;
    this->Select = NULL;
}

void UAttachSelectorSlot::SelectAndEquipAttach() {
}

void UAttachSelectorSlot::OnUnhoverSlot() {
}

void UAttachSelectorSlot::OnButtonHover() {
}


