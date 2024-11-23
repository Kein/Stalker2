#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GSCAudioVolumeSettings.generated.h"

class UAkRtpc;

UCLASS(DefaultConfig, Config=Game)
class STALKER2_API UGSCAudioVolumeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float AmbientTimerDelay;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxNPCinVolume;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> AmbientVolumeRTPC;
    
    UGSCAudioVolumeSettings();

};

