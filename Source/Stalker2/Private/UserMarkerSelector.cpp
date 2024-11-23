#include "UserMarkerSelector.h"

UUserMarkerSelector::UUserMarkerSelector() {
    this->ButtonOverlay = NULL;
    this->Background = NULL;
    this->MarkerCounter = NULL;
    this->TopButton = NULL;
    this->RightButton = NULL;
    this->LeftButton = NULL;
    this->BottomButton = NULL;
    this->SizeBox = NULL;
    this->ShowAnimation = NULL;
    this->ToGamepadCursor = NULL;
    this->bIsCursor = false;
    this->ShowAnimationSpeedMultiplier = 1.00f;
    this->HideAnimationSpeedMultiplier = 1.00f;
    this->CursorSelectorTransitionSpeedMultiplier = 1.00f;
    this->HoveredButton = NULL;
}

void UUserMarkerSelector::PressedButton(const EMarkerType MarkType, const FVector& Coordinates) {
}

void UUserMarkerSelector::HoverButton(UUserMarkerSelectorButton* InHoveredButton) {
}


