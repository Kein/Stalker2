#include "SaveLoadNotificationBase.h"

USaveLoadNotificationBase::USaveLoadNotificationBase() {
    this->FadeInAnimation = NULL;
    this->FadeOutAnimation = NULL;
    this->BlinkingAnimation = NULL;
    this->Title = NULL;
    this->Description = NULL;
    this->SizeBox = NULL;
    this->Icon = NULL;
    this->SingleLineDescWidth = 65.00f;
    this->TwoLineDescWidth = 100.00f;
    this->ThreeLineDescWidth = 120.00f;
    this->TimerRate = 4.00f;
    this->FloppyDisk = NULL;
    this->BrokenFloppyDisk = NULL;
}


