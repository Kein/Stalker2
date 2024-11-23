#include "CompassWidget.h"

UCompassWidget::UCompassWidget() {
    this->StealthNoiseIndicator = NULL;
    this->BackgroundImage = NULL;
    this->CompassCardinalDirectionImage = NULL;
    this->BodyCompassLine = NULL;
    this->LineRight = NULL;
    this->LineLeft = NULL;
    this->NoiseProgress = NULL;
    this->NoiseProgressBottomLines = NULL;
    this->Arrow = NULL;
    this->MarkerContainer = NULL;
    this->CompassSize = NULL;
    this->LineSizeBox = NULL;
    this->MultiplyBodyLineSpeedPercent = 1.00f;
    this->CenterZoneWidth = 20.00f;
    this->MaskZoneWidth = 66.00f;
    this->HiddeMarkerZone = 100.00f;
    this->CenterCompassBorder = 12.00f;
    this->UpdateBackgroundTime = 0.02f;
    this->TopMarkerHeight = -50.00f;
    this->BottomMarkerHeigth = 25.00f;
    this->bShouldEnableAutoUpdate = false;
    this->NoiseBarFillSpeed = 0.30f;
    this->NoiseBarReduceSpeed = 0.30f;
    this->bShouldEnableAutoHideCompaas = true;
    this->TimeUpdateHideCompaasMax = 1.00f;
    this->TimeUpdateHideCompaas = 0.10f;
    this->bShouldEnableTurnAngleAutoHide = true;
    this->PlayerTurnAngleMax = 45.00f;
    this->ApproximationPlayerLocation = 1.00f;
    this->bDisableNoiseIndicator = false;
    this->ShowAnimation = NULL;
    this->SlowShowAnimationSpeedMultiplier = 0.30f;
    this->FastShowAnimationSpeedMultiplier = 1.00f;
    this->StealthNoiseWavingAnimation = NULL;
}


