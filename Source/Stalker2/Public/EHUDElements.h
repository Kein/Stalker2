#pragma once
#include "CoreMinimal.h"
#include "EHUDElements.generated.h"

UENUM()
enum class EHUDElements : int32 {
    None,
    HP,
    Stamina,
    Stealth = 4,
    Minimap = 8,
    Radiation = 16,
    PDA = 32,
    AmmoBar = 64,
    Crosshair = 128,
    StatsIcons = 256,
    BasicHUD = 479,
    Everything = 511,
    GetCount,
};

