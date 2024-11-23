#include "AnimPlayerAutoCoverData.h"

FAnimPlayerAutoCoverData::FAnimPlayerAutoCoverData() {
    this->bFrontTraceBlocked = false;
    this->bRightTraceBlocked = false;
    this->bLeftTraceBlocked = false;
    this->bUpTraceBlocked = false;
    this->bInCover = false;
    this->bAutoCoverActionActive = false;
    this->AimLeanTime = 0.00f;
    this->ApproachTransitionPlayRate = 0.00f;
    this->LeaningAlpha = 0.00f;
    this->bCanChangeLeanSide = false;
    this->bCoverlessLeaning = false;
    this->bCoverlessLeaningRight = false;
    this->MinRangeDistanceToCover = 0.00f;
    this->MaxRangeDistanceToChangeLeanSide = 0.00f;
    this->TraceCapsuleRadius = 0.00f;
    this->CoverForwardTraceRange = 0.00f;
    this->CoverAimTraceRange = 0.00f;
    this->CoverUpperTraceRange = 0.00f;
    this->CoverSideTracesRange = 0.00f;
    this->CoverLeanTracesRange = 0.00f;
    this->CoverLeanTracesIterations = 0;
    this->CoverTraceHorizontalShift = 0.00f;
    this->CoverTraceVerticalShift = 0.00f;
    this->MinCoverWidth = 0.00f;
    this->ApproachTransitionMinPlayRate = 0.00f;
    this->ApproachTransitionMaxPlayRate = 0.00f;
    this->CoverState = EAutoCoverState::StandInCover;
    this->HeadHeightStand = 0.00f;
    this->HeadHeightCrouch = 0.00f;
    this->HeadHeightLowCrouch = 0.00f;
    this->TickInterval = 0.00f;
    this->AccumulatedTime = 0.00f;
    this->bTraceDirectionBindedToCamera = false;
}

