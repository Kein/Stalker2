#include "HoverAction.h"

FHoverAction::FHoverAction() {
    this->HoverAction = EHintHoverActionType::None;
    this->ActionWidget = NULL;
    this->HoverVisibility = ESlateVisibility::Visible;
    this->UnHoverVisibility = ESlateVisibility::Visible;
}

