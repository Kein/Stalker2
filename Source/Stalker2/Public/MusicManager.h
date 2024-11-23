#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "MusicManager.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS()
class STALKER2_API UMusicManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAkAudioEvent* GameMusicEvent;
    
    UPROPERTY()
    UAkRtpc* MusicVolumeSlider;
    
public:
    UMusicManager();

};

