#include "DialogueAnswer.h"

UDialogueAnswer::UDialogueAnswer() {
    this->Button = NULL;
    this->Action = NULL;
    this->Back = NULL;
    this->Line = NULL;
    this->HoverAnimation = NULL;
    this->ColorStyle = NULL;
    this->bIsEnabledHoverEvents = true;
    this->BorderPadding = 19.00f;
    this->DebugTextLen = NULL;
    this->DebugTextRow = NULL;
}

void UDialogueAnswer::AnswerWidgetClick() {
}


