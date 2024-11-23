#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "SettingsManager.generated.h"

class UAkEffectShareSet;
class UAkRtpc;

UCLASS()
class STALKER2_API USettingsManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAkRtpc* MainVolumeRTPCParameter;
    
    UPROPERTY()
    UAkRtpc* MusicVolumeRTPCParameter;
    
    UPROPERTY()
    UAkRtpc* EffectsVolumeRTPCParameter;
    
    UPROPERTY()
    UAkRtpc* DialogueVolumeRTPCParameter;
    
    UPROPERTY()
    UAkRtpc* MuteAllRTPCParameter;
    
    UPROPERTY()
    UAkRtpc* DisableCopyrightedMusicRTPCParameter;
    
    UPROPERTY()
    UAkEffectShareSet* FullAkEffectShareSet;
    
    UPROPERTY()
    UAkEffectShareSet* MediumAkEffectShareSet;
    
    UPROPERTY()
    UAkEffectShareSet* NarrowAkEffectShareSet;
    
public:
    USettingsManager();

};

