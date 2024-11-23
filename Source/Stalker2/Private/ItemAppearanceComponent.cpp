#include "ItemAppearanceComponent.h"

UItemAppearanceComponent::UItemAppearanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponMeshInHands = NULL;
    this->WeaponMeshUnequipped = NULL;
    this->SecondaryItemInHands = NULL;
    this->ShootingAttachMesh = NULL;
    this->SilencerRTPCParameter = NULL;
    this->FireIntervalRTPCParameter = NULL;
    this->MechModulatorRTPCParameter = NULL;
    this->LastBulletInClipEvent = NULL;
    this->ShellSoundEvent = NULL;
    this->WeaponTypeSwitch = NULL;
    this->WeaponJamEvent = NULL;
    this->WeaponAkComponent = NULL;
    this->KnifeLightAttackImpactEvent = NULL;
    this->KnifeHeavyAttackImpactEvent = NULL;
    this->CollisionHandler = NULL;
}

void UItemAppearanceComponent::OnShotSoundStart(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}


