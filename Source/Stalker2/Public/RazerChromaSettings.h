#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "EVitalType.h"
#include "RazerChromaDamageSettings.h"
#include "RazerChromaEvent.h"
#include "RazerChromaVitalsSettings.h"
#include "RazerChromaSettings.generated.h"

UCLASS(DefaultConfig, Config=RazerChroma)
class STALKER2_API URazerChromaSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FString ContentBasePath;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FString AnimationSuffix;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TArray<FString> SupportedDevices;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float OneTimeEventLifetime;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent KillEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent UseConsumableEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent AchievementUnlockedEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent PlayerNoticedEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent SaveGameEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent ArtifactPickupEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent ArtifactVisualizedEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent DetectorPingEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent ChangeFireTypeEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent ChangeAmmoTypeEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent ChangeWeaponEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent ToggleUnderbarrelEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent LooseShootEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TArray<FRazerChromaDamageSettings> DamageEvents;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent ActivePDAEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent OverweightEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent SprintEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent DeathEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent IdleEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent ReloadEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent NoAmmoEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent WeaponJammedEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    FRazerChromaEvent AudioLogEvent;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TMap<EVitalType, FRazerChromaVitalsSettings> VitalsEvents;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TMap<FGameplayTag, FRazerChromaEvent> CinematicEvents;
    
    URazerChromaSettings();

};

