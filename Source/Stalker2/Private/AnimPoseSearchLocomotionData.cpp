#include "AnimPoseSearchLocomotionData.h"

FAnimPoseSearchLocomotionData::FAnimPoseSearchLocomotionData() {
    this->StrafeRotateInterpSpeedCurve = NULL;
    this->bForcedIdling = false;
    this->bShouldInterrupt = false;
    this->EnableLookAtAlpha = 0.00f;
    this->Searchable = NULL;
    this->StrideScale = 0.00f;
    this->LegIKAlpha = 0.00f;
    this->bUseRelaxLocomotion = false;
    this->HistoryExpirationSeconds = 0.00f;
    this->SmartCoverType = ESmartCoverType::NoCover;
    this->bUsingSmartCoverAnimPose = false;
    this->MoveBehaviorOnlyTransitionUseTime = 0.00f;
    this->MovementComponent = NULL;
}

