#pragma once
#include "CoreMinimal.h"
#include "EFaction.generated.h"

UENUM(BlueprintType)
enum class EFaction : uint8 {
    None,
    Bloodsucker,
    Boar,
    Beaver,
    Burer,
    Chimera,
    Controller,
    Dog,
    Flesh,
    Poltergeist,
    Pseudodog,
    Pseudogiant,
    Snork,
    Tushkan,
    Zombie,
    Bandits,
    Duty,
    Freedom,
    Mercenaries,
    Militaries,
    Monolith,
    Neutrals,
    Scientists,
    Varta,
    Player,
    GetCount,
};

