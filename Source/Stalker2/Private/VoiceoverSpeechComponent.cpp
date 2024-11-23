#include "VoiceoverSpeechComponent.h"

UVoiceoverSpeechComponent::UVoiceoverSpeechComponent() {
    this->AkVoiceoverSpeakerComponent = NULL;
}

void UVoiceoverSpeechComponent::OnAKEventFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}


