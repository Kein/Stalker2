#include "AnimHitData.h"

FAnimHitData::FAnimHitData() {
    this->bEnableAnimationHit = false;
    this->HitSourceType = EAnimHitSourceType::Default;
    this->MaxCountOfSimultaneouslyPlayedHitAnimations = 0;
    this->NumberOfAnimationsWhenFirstWillBeStopped = 0;
    this->LastHittedBodyPart = EAnimHitBodyPartType::Head;
    this->HitDirection = 0.00f;
    this->HitVerticalDirection = 0.00f;
    this->HitAnimDirection = EAnimDirections::None;
    this->DeathAnimationType = EDeathAnimationType::Default;
    this->DeathDamageSource = EHumanAnimDamageSource::None;
    this->DeadPose = NULL;
    this->bDiedLyingDown = false;
    this->bDiedFromAbove = false;
}

