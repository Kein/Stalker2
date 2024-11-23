#include "SystemNotificationItem.h"

USystemNotificationItem::USystemNotificationItem() {
    this->bWasVoiceNotePlayed = false;
    this->MoveUpAnim = NULL;
    this->MoveFromDownAnim = NULL;
    this->HideAnim = NULL;
    this->AppearAnim = NULL;
    this->Title = NULL;
    this->Description = NULL;
    this->Hint = NULL;
    this->Icon = NULL;
    this->AudiologSwitcher = NULL;
    this->VoiceHorizontalBox = NULL;
    this->AudiologProgressBar = NULL;
    this->AudiologDuration = NULL;
    this->AudiologCurrentDuration = NULL;
    this->BackgroundBody = NULL;
    this->BackgroundTop = NULL;
    this->BackgroundDown = NULL;
    this->AppearanceLayer = NULL;
    this->AppearanceLine = NULL;
    this->RegularHeight = 0;
    this->HeightWithHint = 0;
    this->OneLineNotificationAlignment = 10;
    this->InactiveHintTransparency = 0.50f;
}

void USystemNotificationItem::SetModel() {
}


