#pragma once
#include "CoreMinimal.h"
#include "EMainSoundClass.generated.h"

UENUM(BlueprintType)
enum class EMainSoundClass : uint8 {
    All,
    Music,
    SFX,
    Ambient,
    Player,
    Weapon,
    UI,
    NPC,
    GetCount,
};

