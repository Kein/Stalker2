#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ProjectileSpawnSettings.generated.h"

UCLASS(DefaultConfig, Config=ProjectileSpawn)
class STALKER2_API UProjectileSpawnSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    float ProjectileAmountRefreshRate;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float ProjectileActiveKeepTime;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float ProjectileDesiredPreHeatTime;
    
    UPROPERTY(Config, EditDefaultsOnly)
    int32 ProjectileExtraPreHeatShots;
    
    UPROPERTY(Config, EditDefaultsOnly)
    int32 ProjectileSpawnPerFrameAmount;
    
    UPROPERTY(Config, EditDefaultsOnly)
    int32 MaxDestroyedProjectilesPerFrame;
    
    UProjectileSpawnSettings();

};

