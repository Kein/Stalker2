#include "AnimPlayerHitData.h"

FAnimPlayerHitData::FAnimPlayerHitData() {
    this->DeathSequence = NULL;
    this->DeathCameraDistance = 0.00f;
    this->HitDirection = 0.00f;
    this->DeathDamageSource = EPlayerAnimDamageSource::None;
    this->HitAnimDirection = EAnimDirections::None;
    this->DeathAnimationType = EDeathAnimationType::Default;
    this->bDiedLyingDown = false;
    this->bIsDeathAnimationEnded = false;
    this->bKnockedDown = false;
    this->KnockDownRotateCurve = NULL;
}

