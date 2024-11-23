#include "PlayerLocomotionAnimations.h"

FPlayerLocomotionAnimations::FPlayerLocomotionAnimations() {
    this->StandIdleInHip = NULL;
    this->CrouchIdleInHip = NULL;
    this->LowCrouchIdleInHip = NULL;
    this->Sprint = NULL;
    this->SprintWithDetector = NULL;
    this->Run = NULL;
    this->RunWithDetector = NULL;
    this->RunCombat = NULL;
    this->Walk = NULL;
    this->WalkWithDetector = NULL;
    this->WalkAim = NULL;
    this->WalkLimp = NULL;
    this->Crouch = NULL;
    this->CrouchAim = NULL;
    this->LowCrouch = NULL;
    this->LowCrouchAim = NULL;
    this->WalkStart = NULL;
    this->WalkStop = NULL;
    this->RunStart = NULL;
    this->RunStop = NULL;
    this->RunToSprint = NULL;
    this->SprintStop = NULL;
    this->SprintToRun = NULL;
    this->StandTurnInPlace = NULL;
    this->CrouchTurnInPlace = NULL;
    this->JumpStart = NULL;
    this->JumpLoop = NULL;
    this->JumpEnd = NULL;
    this->JumpStartLowCrouch = NULL;
    this->JumpLoopLowCrouch = NULL;
    this->JumpEndLowCrouch = NULL;
}

