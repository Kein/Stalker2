#include "AnimHumanLookAtData.h"

FAnimHumanLookAtData::FAnimHumanLookAtData() {
    this->RestrictionsConfigDA = NULL;
    this->bIsRotating = false;
    this->bIsRotatingFullBody = false;
    this->CurrentOwnerState = ELookAtOwnerState::Empty;
    this->FullBodyRotationRate = 0.00f;
    this->FullBodyRotationTimeGap = 0.00f;
    this->bEnableCombatLookAt = false;
    this->MaxLookAtAlphaChangeSpeed = 0.00f;
    this->LookAtAlpha = 0.00f;
    this->bOnlyHeadRotateOnUpperBody = false;
    this->WeaponRotationInterpSpeed = 0.00f;
    this->WeaponRotationAngleOffset = 0.00f;
    this->AdditionalWeaponTransformAlpha = 0.00f;
    this->MaxWeaponShiftOnReload = 0.00f;
    this->bIsFullBodyRotatingBlockedOutside = false;
}

