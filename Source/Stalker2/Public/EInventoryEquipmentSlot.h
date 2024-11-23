#pragma once
#include "CoreMinimal.h"
#include "EInventoryEquipmentSlot.generated.h"

UENUM(BlueprintType)
enum class EInventoryEquipmentSlot : uint8 {
    None,
    PrimaryWeapon,
    SecondaryWeapon,
    Pistol,
    Detector,
    Head,
    Body,
    Artifact1,
    Artifact2,
    Artifact3,
    Artifact4,
    Artifact5,
    Knife,
    Bolt,
    Grenade,
    GetCount,
};

