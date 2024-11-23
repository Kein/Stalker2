#include "MenuMainViewBase.h"

UMenuMainViewBase::UMenuMainViewBase() {
    this->SubMenuViewOverlay = NULL;
    this->LegendSubView = NULL;
    this->MainMenuBackgroundVideo = NULL;
    this->RootSubViewClass = NULL;
    this->FadeOutAnimation = NULL;
    this->FadeInAnimation = NULL;
    this->FadeInSpeedMultiplier = 0.00f;
    this->FadeOutSpeedMultiplier = 0.00f;
    this->EnhancedInputComponent = NULL;
}

void UMenuMainViewBase::FadeOutStartedFunction() {
}

void UMenuMainViewBase::FadeOutFinishedFunction() {
}

void UMenuMainViewBase::FadeInStartedFunction() {
}

void UMenuMainViewBase::FadeInFinishedFunction() {
}


