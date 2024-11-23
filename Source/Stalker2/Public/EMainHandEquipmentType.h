#pragma once
#include "CoreMinimal.h"
#include "EMainHandEquipmentType.generated.h"

UENUM(BlueprintType)
enum class EMainHandEquipmentType : uint8 {
    None,
    Pistol,
    PrimaryWeapon,
    SecondaryWeapon,
    Knife,
    Grenade,
    Bolt,
    Item,
    GetCount,
};

