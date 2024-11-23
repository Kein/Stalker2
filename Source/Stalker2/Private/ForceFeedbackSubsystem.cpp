#include "ForceFeedbackSubsystem.h"

UForceFeedbackSubsystem::UForceFeedbackSubsystem() {
    this->DataAsset = NULL;
}

bool UForceFeedbackSubsystem::StopFeedback(const FGameplayTag& Trigger) {
    return false;
}

void UForceFeedbackSubsystem::StopAll() {
}

void UForceFeedbackSubsystem::SetIntensityMultiplier(const float NewValue) {
}

float UForceFeedbackSubsystem::GetIntensityMultiplier() const {
    return 0.0f;
}

bool UForceFeedbackSubsystem::BP_StartFeedback(const FGameplayTag& Trigger, const FForceFeedbackArgs& Args, const float InIntensityMultiplier, const bool bOverrideStopCurrent, const bool bStopCurrent) {
    return false;
}


