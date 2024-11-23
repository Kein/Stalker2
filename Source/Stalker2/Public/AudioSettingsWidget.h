#pragma once
#include "CoreMinimal.h"
#include "SettingsPage.h"
#include "AudioSettingsWidget.generated.h"

class USettingElementOnOff;
class USettingElementSwitcher;
class USettingsElementPercent;

UCLASS(EditInlineNew)
class STALKER2_API UAudioSettingsWidget : public USettingsPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USettingsElementPercent* MainVolume;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* MuteAllVolume;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* MusicVolume;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* PlayMusicInCombat;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* DialogueVolume;
    
    UPROPERTY(Instanced)
    USettingsElementPercent* EffectsVolume;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* AudioOutputDeviceId;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* TypeOfSoundDevice;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* ForceMono;
    
    UPROPERTY(Instanced)
    USettingElementSwitcher* DynamicRange;
    
    UPROPERTY(Instanced)
    USettingElementOnOff* HelmetEffects;
    
    UPROPERTY(EditDefaultsOnly)
    FString DefaultAudioDeviceLocalizedSID;
    
public:
    UAudioSettingsWidget();

};

