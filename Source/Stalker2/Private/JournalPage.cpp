#include "JournalPage.h"

UJournalPage::UJournalPage() {
    this->CurrentQuestButton = NULL;
    this->DoneQuestButton = NULL;
    this->PDAQuestPanel = NULL;
    this->QuestDetails = NULL;
    this->SelectQuestHint = NULL;
    this->HintSelectPanelLeft = NULL;
    this->HintSelectPanelRight = NULL;
    this->ButtonHintTransitionToMap = NULL;
    this->QuestSlotListScrollTime = 0.50f;
    this->TabTransitionTime = 0.50f;
}

void UJournalPage::UpdateStageOnDetailed() {
}

void UJournalPage::UpdateHoverDetailsElement(const bool bHovered, const EDetailsElementType ElementType) {
}

void UJournalPage::UpdateButton(const int32 IndexUpdateButton) {
}

void UJournalPage::UIPDATransitionToMarkerPosition() {
}

void UJournalPage::UIPDANavigationUp() {
}

void UJournalPage::UIPDANavigationSelectPanelRight() {
}

void UJournalPage::UIPDANavigationSelectPanelLeft() {
}

void UJournalPage::UIPDANavigationSelect() {
}

void UJournalPage::UIPDANavigationRightHint() {
}

void UJournalPage::UIPDANavigationRight() {
}

void UJournalPage::UIPDANavigationReleased() {
}

void UJournalPage::UIPDANavigationLeftHint() {
}

void UJournalPage::UIPDANavigationLeft() {
}

void UJournalPage::UIPDANavigationDown() {
}

void UJournalPage::StageSlotHover() {
}

void UJournalPage::ShowDetails(bool bEmpty) {
}

void UJournalPage::SelectedSlotWithMouse() {
}

void UJournalPage::ClickButtonQuest(const FName ButtonId) {
}


