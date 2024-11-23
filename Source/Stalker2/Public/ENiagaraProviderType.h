#pragma once
#include "CoreMinimal.h"
#include "ENiagaraProviderType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraProviderType : uint8 {
    None,
    WindProvider,
    TimeOfDayProvider,
    PlayerLocationProvider,
    EyeAdaptationProvider,
    TerrainOffsetProvider,
    GetCount,
};

