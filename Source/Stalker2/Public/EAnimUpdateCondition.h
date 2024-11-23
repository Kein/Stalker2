#pragma once
#include "CoreMinimal.h"
#include "EAnimUpdateCondition.generated.h"

UENUM(BlueprintType)
enum class EAnimUpdateCondition : uint8 {
    None,
    SwappedFirstAndThirdPerson,
    MainHandChanged,
    SecondaryHandChanged,
    Aimed,
    MainUnEquipped,
    AttachInstalled,
    WeaponStateChanged,
};

