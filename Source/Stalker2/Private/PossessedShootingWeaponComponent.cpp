#include "PossessedShootingWeaponComponent.h"

UPossessedShootingWeaponComponent::UPossessedShootingWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponAkComponent = NULL;
    this->FireAudioEvent = NULL;
    this->FireEventLoop = NULL;
    this->CurrentFireEvent = NULL;
    this->BreakAudioEvent = NULL;
    this->WeaponMuzzleComponent = NULL;
}


