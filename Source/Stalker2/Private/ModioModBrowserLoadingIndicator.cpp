#include "ModioModBrowserLoadingIndicator.h"

UModioModBrowserLoadingIndicator::UModioModBrowserLoadingIndicator() : UUserWidget(FObjectInitializer::Get()) {
    this->SpinnerImageSizeBox = NULL;
    this->SpinnerImage = NULL;
    this->SpinnerAnim = NULL;
    this->SpinnerAnimSpeed = 1.00f;
}


