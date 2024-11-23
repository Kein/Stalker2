#include "QuestNotificationDataAsset.h"

UQuestNotificationDataAsset::UQuestNotificationDataAsset() {
    this->bEnableDelayBetweenNotifications = false;
    this->TimerRate = 0.10f;
    this->DelayAfterShow = 1.00f;
    this->TextureParameterName = TEXT("Mask");
    this->HoldTimeThreshold = 2.00f;
    this->BackgroundImageTexture = NULL;
    this->LeftLineTexture = NULL;
    this->DotsLeftTexture = NULL;
    this->DotsRightTexture = NULL;
    this->TaskClass = NULL;
    this->MaxTaskNumber = 5;
    this->MaxTitleLen = 25;
    this->AppendedEndText = TEXT("...");
    this->TrackQuestIcon = NULL;
    this->UntrackQuestIcon = NULL;
    this->NotNecessaryLocalizationSID = TEXT("sid_misc_qobjs_stage_status_variably");
    this->bEnableDelayForHide = false;
    this->QuestNotificationLifeTime = 5.00f;
    this->QuestNotificationLifeTimeTimerRate = 0.10f;
    this->OpenJournalString = TEXT("sid_misc_qobjs_hint_OpenJournal");
    this->TrackQuestString = TEXT("sid_misc_qobjs_hint_Activate");
    this->UnTrackQuestString = TEXT("sid_misc_qobjs_hint_Deactivate");
    this->QuestUpdatedL10n = TEXT("sid_misc_qobjs_quest_status_updated");
    this->QuestFailedL10n = TEXT("sid_misc_qobjs_quest_status_failed");
    this->QuestFinishedL10n = TEXT("sid_misc_qobjs_quest_status_complete");
    this->QuestCancelledL10n = TEXT("sid_misc_qobjs_quest_status_canceled");
    this->NewQuestL10n = TEXT("sid_misc_qobjs_quest_status_add");
    this->RemainingTimeAfterHintAction = 0.50f;
}


