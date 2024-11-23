#include "AnimPlayerStateData.h"

FAnimPlayerStateData::FAnimPlayerStateData() {
    this->bWalkingOverride = false;
    this->bCrouching = false;
    this->bLowCrouching = false;
    this->bClimbing = false;
    this->bLimping = false;
    this->bShootingUnfocusableTarget = false;
    this->bDragDeadBody = false;
    this->bActionSlotActive = false;
    this->bIsLeftHandBusy = false;
    this->bIsInspectingItem = false;
    this->bCrouchingOverride = false;
    this->bLowCrouchingOverride = false;
    this->bSprintingOverride = false;
    this->bInAirOverride = false;
    this->CrouchingInWaterInterruptionTime = 0.00f;
    this->SprintingInWaterInterruptionTime = 0.00f;
    this->InAirInWaterInterruptionTime = 0.00f;
    this->CombatIdleDuration = 0.00f;
    this->bCombatMoveIdle = false;
    this->bCombatCrouchIdle = false;
    this->bCombatActionActive = false;
    this->CombatIdleCooldown = 0.00f;
    this->bForceBindedHandsLookVertical = false;
    this->bHasExoskeleton = false;
    this->CurveGaitValue = 0.00f;
    this->DynamicGaitValue = 0.00f;
    this->EnumGaitState = EAnimationStates::None;
}

