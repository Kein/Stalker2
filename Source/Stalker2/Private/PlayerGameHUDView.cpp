#include "PlayerGameHUDView.h"

UPlayerGameHUDView::UPlayerGameHUDView() {
    this->ContextualLegend = NULL;
    this->QuickPanel = NULL;
    this->HudHintsPanel = NULL;
    this->SystemNotification = NULL;
    this->Container = NULL;
    this->CompassWidget = NULL;
    this->AmmoPanel = NULL;
    this->HoldBreathHint = NULL;
    this->Crosshair = NULL;
    this->StatPanel = NULL;
    this->Background = NULL;
    this->NotificationWidget = NULL;
    this->ThreatIndicator = NULL;
    this->InventoryBlur = NULL;
    this->ItemSelectorHudModeAnimation = NULL;
    this->ItemSelectorHUDMod = 50.00f;
    this->ItemSelectorHUDModSpeed = 1.00f;
    this->bShouldEnableAutoHideWidgets = true;
    this->TimeUpdateHideWidgetsMax = 1.00f;
    this->TimeUpdateHideWidgets = 0.10f;
    this->bShouldEnableTurnAngleAutoHide = true;
    this->PlayerTurnAngleMax = 45.00f;
    this->ApproximationPlayerLocation = 1.00f;
}


