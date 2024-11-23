#include "QuestNotification.h"

UQuestNotification::UQuestNotification() {
    this->TextureID = TEXT("Mask");
    this->QuestTitle = NULL;
    this->QuestImage = NULL;
    this->QuestNotificationHeader = NULL;
    this->LabelBackground = NULL;
    this->ContentLine = NULL;
    this->LabelText = NULL;
    this->Hint = NULL;
    this->QuestVerticalBox = NULL;
    this->ShowAnimation = NULL;
    this->HideAnimation = NULL;
    this->bMainQuest = false;
    this->QuestAddedSound = EUISound::OnShowReferenceTutorial;
    this->QuestCompletedSound = EUISound::OnShowReferenceTutorial;
    this->LastUpdatedTask = NULL;
    this->Settings = NULL;
    this->QuestStagesLen = 0;
    this->bTaskAnimationWasFinished = false;
    this->bTaskAnimationWasStarted = false;
}

void UQuestNotification::HideTasks() {
}


