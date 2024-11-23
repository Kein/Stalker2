#pragma once
#include "CoreMinimal.h"
#include "EWeaponGenerationFlags.generated.h"

UENUM(BlueprintType)
enum class EWeaponGenerationFlags : uint8 {
    None,
    RequireMagazineAmmo,
    RequireAdditionalAmmo,
    RequireWeapon = 4,
    RequireAllAmmo = 3,
    RequireAll = 7,
    RequireWeaponWithMagazine = 5,
    RequireWeaponWithAdditionalAmmo,
};

