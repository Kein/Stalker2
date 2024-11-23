#pragma once
#include "CoreMinimal.h"
#include "EStaticParticleType.generated.h"

UENUM(BlueprintType)
enum class EStaticParticleType : uint8 {
    None,
    Dust,
    FallingDust,
    Embers,
    FlyingGarbage,
    FireBarrel,
    Bonfire,
    OvenFire,
    PipeSmoke,
    Smoke,
    Fog,
    WaterFog,
    LowLandFog,
    WaterLeaks,
    Sparks,
    Water,
    Insects,
    Flies,
    Fireflies,
    ElectricField,
    RustyGeyser,
    DugaElectricField,
    Steam,
    Wildlife,
    FlyingCrows,
    CreepyCrawlyCoalition,
};

