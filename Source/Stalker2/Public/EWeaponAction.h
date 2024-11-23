#pragma once
#include "CoreMinimal.h"
#include "EWeaponAction.generated.h"

UENUM(BlueprintType)
enum class EWeaponAction : uint8 {
    ToggleTwinMagazineShift,
    JamRepaired,
    TryForceJam,
    ChangeFireType,
    AddAmmo,
    FinishReload,
    PerBulletReloading,
    PerBulletAmmoCountSection,
    Unloading,
    SwitchAttachMode,
    OnPullCotter,
    ForceShutterState,
    BulletMeshesVisibility,
    UnlockLeftHandIdle,
};

