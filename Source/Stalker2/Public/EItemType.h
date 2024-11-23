#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM()
enum class EItemType : int32 {
    None = -1,
    Weapon = 0,
    Armor,
    Artifact,
    Attach,
    Consumable,
    Ammo,
    Detector,
    Grenade,
    Other,
    GetCount,
};

