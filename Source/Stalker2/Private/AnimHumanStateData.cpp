#include "AnimHumanStateData.h"

FAnimHumanStateData::FAnimHumanStateData() {
    this->bInCombat = false;
    this->bWounded = false;
    this->bKnockedDown = false;
    this->KnockedDownPoseBlendTime = 0.00f;
    this->bCrouching = false;
    this->bSitting = false;
    this->bRotating = false;
    this->CurveGaitValue = 0.00f;
    this->DynamicGaitValue = 0.00f;
    this->StateCurveValue = 0.00f;
    this->CurveGaitState = EAnimationStates::None;
    this->bHasMovementInput = false;
    this->bHasContextualItemInHands = false;
    this->bZombie = false;
    this->bSpawnedAsZombie = false;
    this->bStandingUpAsZombie = false;
    this->bShouldPlayLongBHIdle = false;
    this->bDragDeadBody = false;
    this->bShouldDisableLegIK = false;
    this->bIsRenderRelevant = false;
    this->IsRotatingAngleThreshold = 0.00f;
    this->bShouldDisableInertialization = false;
    this->bMovementShouldDisableLookAt = false;
    this->bShouldCopyVirtualWeaponBone = false;
    this->bHasEmptyHandsInDialog = false;
    this->bIsDeadAsNotZombie = false;
    this->bIsDeadAsZombie = false;
    this->bShouldTransitionToWeaponRelaxedIdle = false;
    this->bStandToRelaxIdle = false;
}

