#include "AnimPlayerClimbingData.h"

FAnimPlayerClimbingData::FAnimPlayerClimbingData() {
    this->bAnimClimbStarted = false;
    this->AnimClimbState = EAnimClimbState::None;
    this->ClimbUpSpeed = 0.00f;
    this->ClimbDownSpeed = 0.00f;
    this->EnterDownSpeed = 0.00f;
    this->EnterUpSpeed = 0.00f;
    this->ExitUpSpeed = 0.00f;
    this->CameraYaw = 0.00f;
    this->CameraPitch = 0.00f;
    this->bLongIdleEnable = false;
    this->bJumpingOffLadderState = false;
    this->bJumpingOffLadderBottomState = false;
    this->LadderType = ELadderType::Blockout;
    this->BottomOffset = 0.00f;
    this->SingleStepHeight = 0.00f;
    this->CameraFocusOnExitTime = 0.00f;
    this->CameraFocusOnExitInterpSpeed = 0.00f;
    this->EnterTransitionCurve = NULL;
    this->TimeToStartLongIdle = 0.00f;
}

