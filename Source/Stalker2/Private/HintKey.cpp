#include "HintKey.h"

UHintKey::UHintKey() {
    this->HintRichTextWidget = NULL;
    this->MultiClickAnim = NULL;
    this->RunActionAnim = NULL;
    this->MultiClickIdle = NULL;
    this->ActionSwitcher = NULL;
    this->HoldProgress = NULL;
    this->ProgressImage = NULL;
    this->ProgressImageBack = NULL;
    this->HintButton = NULL;
    this->HoldProgressImage = NULL;
    this->HoldProgressImageBack = NULL;
    this->MultiClickProgressImage = NULL;
    this->MultiClickProgressImageBack = NULL;
    this->HoldProgressTutorials = NULL;
    this->SingleClickAnim = NULL;
    this->HintDynamicBackground = NULL;
    this->bUseKeyFromTopMappingContext = false;
    this->HintDesignIteration = 0;
    this->IconKey = NULL;
    this->IconLock = NULL;
    this->IconLowHealth = NULL;
}

void UHintKey::SetLowHealthState(const bool ShowIcon) {
}

void UHintKey::SetHintState(const bool IsActive) {
}

void UHintKey::SetHintKeyLockState(const bool ShowIcon, const bool IsKeyAvailable) {
}



