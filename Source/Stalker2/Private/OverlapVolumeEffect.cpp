#include "OverlapVolumeEffect.h"

FOverlapVolumeEffect::FOverlapVolumeEffect() {
    this->AddOnBeginOverlap = false;
    this->RemoveOnEndOverlap = false;
    this->IgnorePlayer = false;
    this->IgnoreAI = false;
}

