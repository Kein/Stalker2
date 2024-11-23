#pragma once
#include "CoreMinimal.h"
#include "EVitalType.generated.h"

UENUM(BlueprintType)
enum class EVitalType : uint8 {
    None,
    HP,
    SP,
    HungerPoints,
    ThirstPoints,
    SleepinessPoints,
    Bleeding,
    Radiation,
    PoppyFieldSleepiness,
    SuppressionPoints,
    PsyPoints,
    Drunkness,
    OverDrunkness,
    FallHeight,
    GetCount,
};

