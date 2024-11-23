#pragma once
#include "CoreMinimal.h"
#include "EScenarioBranch.generated.h"

UENUM(BlueprintType)
enum class EScenarioBranch : uint8 {
    None,
    Spark,
    Varta,
    Strelok,
    Skif,
    Stalker,
    Noon,
};

