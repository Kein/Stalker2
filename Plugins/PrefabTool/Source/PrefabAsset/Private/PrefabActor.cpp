#include "PrefabActor.h"
#include "PrefabComponent.h"

APrefabActor::APrefabActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPrefabComponent>(TEXT("PrefabComponent"));
    this->PrefabComponent = (UPrefabComponent*)RootComponent;
}

void APrefabActor::SetPrefab(UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected) {
}

void APrefabActor::SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility) {
}

void APrefabActor::SetLockSelection(bool bInLocked) {
}

UPrefabAsset* APrefabActor::GetPrefab() const {
    return NULL;
}

bool APrefabActor::GetLockSelection() {
    return false;
}

void APrefabActor::DestroyPrefabActor(bool bDestroyAttachedChildren) {
}


