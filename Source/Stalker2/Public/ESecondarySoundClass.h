#pragma once
#include "CoreMinimal.h"
#include "ESecondarySoundClass.generated.h"

UENUM(BlueprintType)
enum class ESecondarySoundClass : uint8 {
    HitMark,
    FTS,
    Equip,
    ImpactFrom,
    Breath,
    P_Gun,
    P_Fire,
    P_Tail,
    Frag,
    Impact,
    Handling,
    Gun,
    Fire,
    Tail,
    Human,
    Creature,
    Polter,
    Menu,
    Inventory,
    Calm,
    Fight,
    Suspicious,
    Anomaly,
    Drone,
    Destruct,
    Int_Props,
    Unassign,
    WeatherBioms,
    InternalsScatter,
    Transition,
    Props,
    DayScatter,
    NightScatter,
    GetCount,
};

