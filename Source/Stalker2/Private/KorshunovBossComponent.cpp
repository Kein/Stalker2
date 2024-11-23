#include "KorshunovBossComponent.h"

UKorshunovBossComponent::UKorshunovBossComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeleeResistancePercent = 0.90f;
    this->StunDuration = 20.00f;
    this->JumpZScale = 1.50f;
    this->CutsceneSequenceTrackingDistance = 200.00f;
    this->ShieldArmorHealth = 500.00f;
    this->CoilsHeatingThreshold = 50.00f;
    this->CoilsMaterialInstance = NULL;
    this->TelekineticShieldType = NULL;
}


