#include "FinalCreditsWithVideo.h"

UFinalCreditsWithVideo::UFinalCreditsWithVideo() : UUserWidget(FObjectInitializer::Get()) {
    this->CreditsWidget = NULL;
    this->BinkMediaPlayer = NULL;
    this->Border = NULL;
}


float UFinalCreditsWithVideo::GetVideoDuration() const {
    return 0.0f;
}

void UFinalCreditsWithVideo::EndVideo() {
}


