#pragma once
#include "CoreMinimal.h"
#include "EModioPortal.generated.h"

UENUM(BlueprintType)
enum class EModioPortal : uint8 {
    None,
    Apple,
    EpicGamesStore,
    GOG,
    Google,
    Itchio,
    Nintendo,
    PSN,
    Steam,
    XboxLive,
};

