#pragma once
#include "CoreMinimal.h"
#include "ESubtitlesSize.generated.h"

UENUM(BlueprintType)
enum class ESubtitlesSize : uint8 {
    Small,
    Standart,
    Big,
    GetCount,
};

