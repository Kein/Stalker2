#include "MenuButtonBase.h"

UMenuButtonBase::UMenuButtonBase() {
    this->ActionName = NULL;
    this->Button = NULL;
    this->HoverAnimation = NULL;
    this->PressAnimation = NULL;
    this->HoverAnimationSpeedMultiplier = 1.00f;
    this->HideHoverAnimationSpeedMultiplier = 2.00f;
    this->PressButtonAnimationSpeed = 2.00f;
    this->IsNotActiveOpacity = 0.50f;
    this->ButtonAction = NULL;
}

void UMenuButtonBase::OnPressed() {
}

void UMenuButtonBase::OnMousePressed() {
}

void UMenuButtonBase::OnButtonHovered() {
}

void UMenuButtonBase::ExecuteAction() {
}


