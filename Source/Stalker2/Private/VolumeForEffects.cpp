#include "VolumeForEffects.h"
#include "SignalReceiverComponent.h"

AVolumeForEffects::AVolumeForEffects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSpawnDisabled = false;
    this->ActivateVolumeSignal = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("ActivateVolumeSignal"));
    this->DeactivateVolumeSignal = CreateDefaultSubobject<USignalReceiverComponent>(TEXT("DeactivateVolumeSignal"));
}

void AVolumeForEffects::SetDisabled(const bool bDisabled) {
}

void AVolumeForEffects::DeactivateDelegateHandle(UObject* DataObject) {
}

void AVolumeForEffects::ActivateDelegateHandle(UObject* DataObject) {
}


