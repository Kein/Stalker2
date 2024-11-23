#pragma once
#include "CoreMinimal.h"
#include "ESoundEffectSubtype.generated.h"

UENUM(BlueprintType)
enum class ESoundEffectSubtype : uint8 {
    None,
    SetState,
    SetSwitch,
    SetParameter,
    SetGlobalParameter,
    PlaySoundAttached,
    StopInfiniteSound,
    GetCount,
};

