#include "MapSettingsAsset.h"

UMapSettingsAsset::UMapSettingsAsset() {
    this->HubFoldingRadius = 1000.00f;
    this->HubFoldingZoomLevel = 2;
    this->bEnableReverseHoldMoveAxis = false;
    this->bEnableMouseMovement = true;
    this->bEnableHoldBorderMoving = true;
    this->GamepadCursorMovementSpeedMultiplier = 1000.00f;
    this->GamepadMapMovementSpeedMultiplier = 3000.00f;
    this->AttractionRadius = 60.00f;
    this->AttractionSpeed = 400.00f;
    this->UnselectedAreaBrightness = 0.20f;
    this->TooltipPadding = 10.00f;
    this->PlayerLandmarksLimitTotal = 10;
    this->CreateRadius = 35.00f;
    this->ZOrderForHoverMarker = 1000000;
    this->MapMarkerLocationUpdateTime = 1.00f;
    this->MapMarkerLocationUpdateRadius = 100000.00f;
}


