#include "GADeveloperSettings.h"

UGADeveloperSettings::UGADeveloperSettings() {
    this->SessionStatus_AfkThresholdToRecordSessionFinishInSeconds = 3600.00f;
    this->PlayerPosition_RepeatIntervalInSeconds = 10.00f;
    this->PlayerPosition_AfkTimeThresholdInSeconds = 120.00f;
    this->PlayerFactionReputation_RepeatIntervalInSeconds = 300.00f;
    this->PlayerStatus_RepeatIntervalInSeconds = 60.00f;
    this->PlayerStatus_AfkTimeThresholdInSeconds = 120.00f;
    this->PlayerStatus_EffectAppliedThrottleTimeWindowInSeconds = 0.50f;
    this->PlayerStatus_DamageReceivedThrottleTimeWindowInSeconds = 1.00f;
    this->PlayerStatus_MinDamageReceivedAmountToEmit = 1.00f;
    this->PlayerStatus_MaxEffectsAttributesCount = 30;
    this->InventoryStatus_RepeatIntervalInSeconds = 300.00f;
    this->InventoryAction_Hover_HoverdTimeThresholdInSeconds = 3.00f;
    this->PlayerAction_Shoot_ThrottleTimeWindowInSeconds = 1.00f;
    this->PlayerAction_UseQuickSlot_ThrottleTimeWindowInSeconds = 1.00f;
    this->PlayerAction_GetHit_ThrottleTimeWindowInSeconds = 1.00f;
    this->PlayerCombat_PlayerHitThrottleTimeWindowInSeconds = 1.00f;
    this->PlayerCombat_EnemyHitThrottleTimeWindowInSeconds = 1.00f;
}


