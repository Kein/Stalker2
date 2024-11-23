#pragma once
#include "CoreMinimal.h"
#include "ERelationChangingEvent.generated.h"

UENUM(BlueprintType)
enum class ERelationChangingEvent : uint8 {
    Damage,
    Wounded,
    KillWounded,
    Kill,
    Heal,
    Grenade,
    FractionDamage,
    Count,
};

