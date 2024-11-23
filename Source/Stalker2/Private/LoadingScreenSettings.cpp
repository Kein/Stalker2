#include "LoadingScreenSettings.h"

ULoadingScreenSettings::ULoadingScreenSettings() {
    this->WaitForUserInputTextPos = 65.00f;
    this->TipsRangeMax = 60;
    this->WaitForUserInputText = FText::FromString(TEXT("Press any button to continue"));
    this->InfoScreenSettingsData.AddDefaulted(10);
    this->TimeTillShowingLoadingIndicator = 1.00f;
    this->TimeTillHidingLoadingScreen = 1.00f;
}


