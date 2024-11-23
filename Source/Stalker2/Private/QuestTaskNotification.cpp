#include "QuestTaskNotification.h"

UQuestTaskNotification::UQuestTaskNotification() {
    this->TextWidget = NULL;
    this->TrackingStage = NULL;
    this->CanceledStage = NULL;
    this->FailedStage = NULL;
    this->FinishedStage = NULL;
    this->UntrackingStage = NULL;
    this->AppearAnim = NULL;
    this->FailAnim = NULL;
    this->FinishedAnim = NULL;
    this->CancelAnim = NULL;
    this->LastAnim = NULL;
    this->QuestStateSwitcher = NULL;
}


void UQuestTaskNotification::PlayTaskAnimation(const EQuestTaskAnimationType AnimationType, const bool bWithSound) {
}


