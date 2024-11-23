#include "AudioSettingsWidget.h"

UAudioSettingsWidget::UAudioSettingsWidget() {
    this->MainVolume = NULL;
    this->MuteAllVolume = NULL;
    this->MusicVolume = NULL;
    this->PlayMusicInCombat = NULL;
    this->DialogueVolume = NULL;
    this->EffectsVolume = NULL;
    this->AudioOutputDeviceId = NULL;
    this->TypeOfSoundDevice = NULL;
    this->ForceMono = NULL;
    this->DynamicRange = NULL;
    this->HelmetEffects = NULL;
    this->DefaultAudioDeviceLocalizedSID = TEXT("sid_misc_audioSettings_userDevice_MVA");
}


