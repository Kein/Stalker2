#include "ViewOpenSettings.h"

FViewOpenSettings::FViewOpenSettings() {
    this->bShouldEffectCursorOnShow = false;
    this->bShoudShowMouseCursor = false;
    this->bShoudIdleAnimation = false;
    this->bShoudIgnoreInputOnPause = false;
    this->bShoudClearInputOnClose = false;
    this->bShoudSendOpenUpdateEvent = false;
    this->bShoudCheckOpenView = false;
    this->bShoudIgnoreCheckOpenView = false;
    this->bShoudIgnoreLowPriority = false;
    this->bNewerCloseOtherViews = false;
    this->CloseType = ECloseType::OnlyPriority;
    this->PriorityZOrder = 0;
    this->bCanBeRestoredAfterPause = false;
}

