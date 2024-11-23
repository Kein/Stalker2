#include "MovementParams.h"

FMovementParams::FMovementParams() {
    this->WalkSpeed = 0.00f;
    this->RunSpeed = 0.00f;
    this->CrouchSpeed = 0.00f;
    this->LowCrouchSpeed = 0.00f;
    this->SprintSpeed = 0.00f;
    this->ClimbSpeedCoef = 0.00f;
    this->JumpSpeedCoef = 0.00f;
    this->LimpSpeedCoef = 0.00f;
    this->WalkDiagonalBackCoef = 0.00f;
    this->RunDiagonalBackCoef = 0.00f;
    this->WalkBackCoef = 0.00f;
    this->RunBackCoef = 0.00f;
    this->MoveBackCrouchCoef = 0.00f;
    this->MoveBackLowCrouchCoef = 0.00f;
    this->AirControlCoef = 0.00f;
    this->WalkTransitionCoef = 0.00f;
    this->BaseTurnRate = 0.00f;
    this->BaseLookUpRate = 0.00f;
    this->MaxSlowdownValue = 0.00f;
    this->StaggerAngle = 0.00f;
    this->bCanDash = false;
}

