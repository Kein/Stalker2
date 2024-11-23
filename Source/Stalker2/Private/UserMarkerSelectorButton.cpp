#include "UserMarkerSelectorButton.h"

UUserMarkerSelectorButton::UUserMarkerSelectorButton() {
    this->MarkerType = EMarkerType::FollowLandmark;
    this->MarkerPosition = EMarkerPosition::Top;
    this->ButtonElement = NULL;
    this->MarkerImage = NULL;
    this->Background = NULL;
    this->RotationOverlay = NULL;
    this->HoverOptionAnimation = NULL;
    this->SelectAnimation = NULL;
    this->SelectAnimationSpeedMultiplier = 1.00f;
    this->HoverAnimationSpeedMultiplier = 1.00f;
    this->HideHoverAnimationSpeedMultiplier = 1.00f;
}

void UUserMarkerSelectorButton::OnPressedButtonElement() {
}

void UUserMarkerSelectorButton::OnHoveredButtonElement() {
}


