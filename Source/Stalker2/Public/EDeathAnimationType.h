#pragma once
#include "CoreMinimal.h"
#include "EDeathAnimationType.generated.h"

UENUM(BlueprintType)
enum class EDeathAnimationType : uint8 {
    Default,
    Explosion,
    Burn,
    ChemicalBurn,
    Emission,
    Zombification,
    HeadShot,
    DeadOnSpawn,
    Killed,
    Drowned,
    Carousel,
    Shock,
    Physic,
};

