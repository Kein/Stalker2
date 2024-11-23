#include "AnimPlayerGuitarData.h"

FAnimPlayerGuitarData::FAnimPlayerGuitarData() {
    this->CameraPitchLimit = 0.00f;
    this->CameraYawLimit = 0.00f;
    this->CameraResetInterpSpeed = 0.00f;
    this->CurrentChord = 0;
    this->AnimGuitarState = EAnimGuitarState::Enter;
    this->RightHandState = EAnimGuitarRightHandState::StrumDown;
    this->bPlayingGuitar = false;
    this->bPlayFromContextual = false;
    this->bIsMajorScale = false;
    this->bShouldExitGuitar = false;
    this->bAutoStrumMode = false;
    this->CameraYaw = 0.00f;
    this->CameraPitch = 0.00f;
}

