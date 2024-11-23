#pragma once
#include "CoreMinimal.h"
#include "ECauseOfDeath.generated.h"

UENUM(BlueprintType)
enum class ECauseOfDeath : uint8 {
    None,
    Range,
    Puncture,
    Bite,
    Explosive,
    Burn,
    ChemicalBurn,
    Shock,
    Gravity,
    CarouselAnomaly,
    Emission,
    Zombification,
    PsyPhantomDeath,
    HeadShot,
    KnifeCritical,
    DeadOnSpawn,
    Killed,
    Drowned,
    SpawnedCorpseNoNPCCollision,
    Quest,
};

