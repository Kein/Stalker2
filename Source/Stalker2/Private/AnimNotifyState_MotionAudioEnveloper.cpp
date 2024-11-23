#include "AnimNotifyState_MotionAudioEnveloper.h"

UAnimNotifyState_MotionAudioEnveloper::UAnimNotifyState_MotionAudioEnveloper() {
    this->PlayAkEvent = NULL;
    this->StopAkEvent = NULL;
    this->MotionSpeedRTPC = NULL;
    this->MinBoneVelocity = 0.00f;
    this->MaxBoneVelocity = 0.00f;
    this->InterpolationTime = 0;
    this->bShowBoneVelocityInfo = false;
    this->AttachedAudioComponent = NULL;
}


