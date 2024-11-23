#include "LoadingScreenWidget.h"

ULoadingScreenWidget::ULoadingScreenWidget() {
    this->PressAnyButtonText = NULL;
    this->LoadingScreenImage = NULL;
    this->LoadingProgressBar = NULL;
    this->LoadingProgressArrow = NULL;
    this->Title = NULL;
    this->Hint = NULL;
    this->FadeTime = 2.50f;
    this->ArrowInterpSpeed = 5.00f;
    this->PressAnyButtonL10n = TEXT("sid_misc_idle_screen");
}


