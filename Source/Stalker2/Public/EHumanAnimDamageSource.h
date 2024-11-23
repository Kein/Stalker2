#pragma once
#include "CoreMinimal.h"
#include "EHumanAnimDamageSource.generated.h"

UENUM(BlueprintType)
enum class EHumanAnimDamageSource : uint8 {
    None,
    Emmision,
    Bullet,
    Explosion,
    Chemical,
    Fire,
    Electro,
    Expulsion,
    Diamond,
    IronWind,
    Physics,
    Zombification,
    Carousel,
    GetCount,
};

