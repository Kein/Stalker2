#pragma once
#include "CoreMinimal.h"
#include "ESignificanceFlags.generated.h"

UENUM(BlueprintType)
enum class ESignificanceFlags : uint8 {
    None,
    Distance,
    LastRender,
    ScreenSize = 4,
    GetCount,
};

