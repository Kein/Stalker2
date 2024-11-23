#include "AnimNotify_ToggleEyesLookAt.h"

UAnimNotify_ToggleEyesLookAt::UAnimNotify_ToggleEyesLookAt() {
    this->bIsEnabled = false;
    this->bShouldChangeEyesIdle = true;
    this->NewEyesIdleProfile = ECutsceneEyesIdleProfile::KeepEyesOff;
}


