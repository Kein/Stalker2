#pragma once
#include "CoreMinimal.h"
#include "EThreatType.generated.h"

UENUM(BlueprintType)
enum class EThreatType : uint8 {
    None,
    Corpse,
    Sound,
    PhysicsTouch,
    Hit,
    Flashlight,
    CharacterTouch,
    UnidentifiedEnemy,
    IdentifiedEnemy,
    Explosive,
};

