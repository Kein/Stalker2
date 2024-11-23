#include "MovementComponentExt.h"

UMovementComponentExt::UMovementComponentExt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxCameraShakeDistance = 0.00f;
    this->CameraShakeEffectCurve = NULL;
    this->WaterDepthRtpc = NULL;
    this->AkSoundEvent = NULL;
    this->AkSurfaceSwitch = NULL;
    this->AkMovementBehaviourSwitch = NULL;
}


