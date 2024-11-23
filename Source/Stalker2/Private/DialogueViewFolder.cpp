#include "DialogueViewFolder.h"

UDialogueViewFolder::UDialogueViewFolder() {
    this->InputDelayTime = 0.20f;
    this->DefaultFolderIndex = 0;
    this->DefaultSelectFolderSlot = StartSelectFolderType::ToTop;
    this->SelectedAnswerMark = NULL;
    this->FolderSlot1 = NULL;
    this->FolderSlot2 = NULL;
    this->FolderSlot3 = NULL;
    this->FolderSlot4 = NULL;
    this->FolderSlot5 = NULL;
    this->FolderSlot6 = NULL;
    this->AnswerContainer = NULL;
    this->ReplicOverlay = NULL;
    this->LeftButtonsContainer = NULL;
    this->RightButtonsContainer = NULL;
    this->ButtonHintExit = NULL;
    this->ButtonHintUpgrade = NULL;
    this->ButtonHintTrade = NULL;
    this->TimerProgressImage = NULL;
}

void UDialogueViewFolder::UIDialogOpenUpgrade() {
}

void UDialogueViewFolder::UIDialogOpenTrade() {
}

void UDialogueViewFolder::UIDialogClose() {
}

void UDialogueViewFolder::UIDialogAnswerUp() {
}

void UDialogueViewFolder::UIDialogAnswerDown() {
}

void UDialogueViewFolder::UIDialogAnswerConfirm() {
}

UDialogueAnswer* UDialogueViewFolder::ChangeSelectFolder(const int32 IndexOldFolder, const int32 AxisMove) {
    return NULL;
}


