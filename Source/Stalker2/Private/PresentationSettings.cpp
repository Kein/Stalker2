#include "PresentationSettings.h"

UPresentationSettings::UPresentationSettings() {
    this->bEnablePresentationSubsystem = false;
    this->DemoPopupTitleSID = TEXT("sid_misc_DEMO_storyPopup_Title");
    this->DemoPopupDescriptionSID = TEXT("sid_misc_DEMO_storyPopup_Body");
    this->QuestNodeToStopPresentation = TEXT("E02_MQ03_C05_Technical_DemoBuildIsOver");
    this->DemoPopupContinuePlaySID = TEXT("sid_misc_DEMO_storyPopup_Continue");
    this->DemoPopupToMainMenuSID = TEXT("sid_misc_settingsGeneral_returnMainMenu");
    this->PresentationTimer = 0;
    this->bShowEndPopup = true;
}


