#include "ModioCategorySelectionBoxEntry.h"

UModioCategorySelectionBoxEntry::UModioCategorySelectionBoxEntry() {
    this->DummyCheckbox = NULL;
    this->CheckboxNameText = NULL;
    this->HoverAnimation = NULL;
    this->PressAnimation = NULL;
    this->HoverAnimationSpeedMultiplier = 1.00f;
    this->HideHoverAnimationSpeedMultiplier = 2.00f;
    this->PressButtonAnimationSpeed = 2.00f;
    this->IsCheckedOnInit = false;
    this->EnableLocalization = false;
}


