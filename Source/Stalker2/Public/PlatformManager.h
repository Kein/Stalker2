#pragma once
#include "CoreMinimal.h"
#include "BaseTickableManager.h"
#include "PlatformManager.generated.h"

UCLASS(Config=Game)
class STALKER2_API UPlatformManager : public UBaseTickableManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    int32 InputStorySize;
    
    UPROPERTY(Config)
    bool bUsePlatformSwitchingThreshold;
    
    UPROPERTY(Config)
    float PlatformSwitchingThreshold;
    
    UPROPERTY(Config)
    bool bSwitchToOtherDeviceOnConnect;
    
    UPROPERTY(Config)
    bool bUseMouseFeatures;
    
public:
    UPlatformManager();

};

