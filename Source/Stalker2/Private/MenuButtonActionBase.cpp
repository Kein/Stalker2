#include "MenuButtonActionBase.h"

UMenuButtonActionBase::UMenuButtonActionBase() {
    this->bShouldPlaySound = true;
    this->OnExecuteSound = EUISound::Click;
}

void UMenuButtonActionBase::ExecuteButtonAction() {
}


