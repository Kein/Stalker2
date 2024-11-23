#include "AnimNotify_LaunchVoiceOver.h"

UAnimNotify_LaunchVoiceOver::UAnimNotify_LaunchVoiceOver() {
    this->bQuest = false;
}

TArray<FString> UAnimNotify_LaunchVoiceOver::GetVoiceoverSIDOptions() const {
    return TArray<FString>();
}


