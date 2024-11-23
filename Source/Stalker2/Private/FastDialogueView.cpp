#include "FastDialogueView.h"

UFastDialogueView::UFastDialogueView() {
    this->AnswerContainer = NULL;
    this->TimerWidget = NULL;
    this->DialogueAnswerFastLeft = NULL;
    this->DialogueAnswerFastRight = NULL;
    this->bIsImportant = false;
}

void UFastDialogueView::UpdateAfterClick() {
}

void UFastDialogueView::UIFastDialogSecondAnswer() {
}

void UFastDialogueView::UIFastDialogFirstAnswer() {
}


void UFastDialogueView::EndSelectAnswer(bool bIsRightAnswer) {
}

void UFastDialogueView::BlockInput() {
}


