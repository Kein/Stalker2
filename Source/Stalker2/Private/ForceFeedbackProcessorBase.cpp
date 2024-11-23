#include "ForceFeedbackProcessorBase.h"

UForceFeedbackProcessorBase::UForceFeedbackProcessorBase() {
    this->Priority = 0;
    this->bIgnoreSelf = false;
    this->RumbleType = ERumbleType::None;
    this->DefaultRumbleType = ERumbleType::None;
    this->CurrentFeedback = NULL;
}


