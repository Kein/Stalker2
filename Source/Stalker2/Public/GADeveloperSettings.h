#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GADeveloperSettings.generated.h"

UCLASS(Config=Engine)
class UGADeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    float SessionStatus_AfkThresholdToRecordSessionFinishInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerPosition_RepeatIntervalInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerPosition_AfkTimeThresholdInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerFactionReputation_RepeatIntervalInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerStatus_RepeatIntervalInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerStatus_AfkTimeThresholdInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerStatus_EffectAppliedThrottleTimeWindowInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerStatus_DamageReceivedThrottleTimeWindowInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerStatus_MinDamageReceivedAmountToEmit;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TSet<FString> PlayerStatus_ListOfEffectsToTrack;
    
    UPROPERTY(Config, EditDefaultsOnly)
    int32 PlayerStatus_MaxEffectsAttributesCount;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float InventoryStatus_RepeatIntervalInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float InventoryAction_Hover_HoverdTimeThresholdInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerAction_Shoot_ThrottleTimeWindowInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerAction_UseQuickSlot_ThrottleTimeWindowInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerAction_GetHit_ThrottleTimeWindowInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerCombat_PlayerHitThrottleTimeWindowInSeconds;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float PlayerCombat_EnemyHitThrottleTimeWindowInSeconds;
    
    UGADeveloperSettings();

};

