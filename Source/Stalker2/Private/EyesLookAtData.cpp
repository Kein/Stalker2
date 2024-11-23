#include "EyesLookAtData.h"

FEyesLookAtData::FEyesLookAtData() {
    this->BlinkAnimation = NULL;
    this->BlinkOnEyeMoveThreshold = 0.00f;
    this->BlinkOnEyeMoveInterval = 0.00f;
    this->ControlRigEnableInterpSpeed = 0.00f;
    this->ControlRigDisableInterpSpeed = 0.00f;
    this->CutsceneProceduralEyesWeight = 0.00f;
    this->CutsceneProceduralEyesAmplitude = 0.00f;
    this->CutsceneProceduralEyesIntensity = 0.00f;
    this->bShouldBeEnabled = false;
    this->ControlRigAlpha = 0.00f;
    this->CutsceneEyesLookAtWeight = 0.00f;
    this->LookAtActor = NULL;
    this->LookAtSkeletalMesh = NULL;
    this->CutsceneBlinkProfile = ECutsceneBlinkProfile::Default;
    this->CutsceneEyesIdleProfile = ECutsceneEyesIdleProfile::NoIdle;
    this->TimeToNextBlink = 0.00f;
    this->BlinkOnEyeMoveCooldown = 0.00f;
    this->CutsceneHeadControlRigAlpha = 0.00f;
    this->CutsceneHeadLookAtWeight = 0.00f;
    this->bShouldOffOnEdges = false;
}

