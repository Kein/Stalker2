#include "PlayVideoWidget.h"

UPlayVideoWidget::UPlayVideoWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SkipHint = NULL;
    this->SubtitleTextWidget = NULL;
    this->BinkMediaPlayer = NULL;
}

void UPlayVideoWidget::SkipVideo() {
}

float UPlayVideoWidget::GetVideoDuration() const {
    return 0.0f;
}

void UPlayVideoWidget::EndVideo() {
}


