#include "SubtitleView.h"

USubtitleView::USubtitleView() {
    this->DebugLenSpeaker = NULL;
    this->DebugLenSubtitle = NULL;
    this->DebugRowSpeaker = NULL;
    this->DebugRowSubtitle = NULL;
    this->SpeakerDialogText = NULL;
    this->NameBox = NULL;
    this->SubtitileBorder = NULL;
    this->SubtitileContainer = NULL;
    this->TextDialog = NULL;
    this->CharToShow = 10000;
    this->SpeedCharToShow = 0.03f;
    this->AnimationSpeed = 1.00f;
    this->HideSkipHintLifeBond = 3.00f;
}


