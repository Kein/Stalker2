#pragma once
#include "CoreMinimal.h"
#include "EItemGenerationCategory.generated.h"

UENUM()
enum class EItemGenerationCategory : int32 {
    None,
    Ammo,
    Artifact,
    Attach,
    BodyArmor,
    Consumable,
    Detector,
    Head,
    Junk,
    Mask,
    SubItemGenerator,
    WeaponPistol,
    WeaponPrimary,
    WeaponSecondary,
    GetCount,
};

