#pragma once
#include "CoreMinimal.h"
#include "EAudioRoomPresetBandwidth.generated.h"

UENUM(BlueprintType)
enum class EAudioRoomPresetBandwidth : uint8 {
    None,
    Custom,
    Close,
    HalfOpen,
    Open,
    Isolated,
    GetCount,
};

