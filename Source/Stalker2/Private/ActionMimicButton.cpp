#include "ActionMimicButton.h"

UActionMimicButton::UActionMimicButton() {
    this->bInitializeAutomatically = true;
    this->ButtonElement = NULL;
    this->InputAction = NULL;
    this->InputTrigger = NULL;
}

void UActionMimicButton::OnMouseButtonReleased() {
}

void UActionMimicButton::OnMouseButtonPressed() {
}


