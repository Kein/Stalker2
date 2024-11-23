#include "AnimInteractableData.h"

FAnimInteractableData::FAnimInteractableData() {
    this->InteractionDistance = 0.00f;
    this->bShouldLerpToInteractable = false;
    this->LerpSpeedMultiplier = 0.00f;
    this->bShouldLerpIn3D = false;
    this->bShouldToggleFOV = false;
    this->CollisionType = ECollisionEnabled::NoCollision;
}

