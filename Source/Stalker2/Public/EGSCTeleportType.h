#pragma once
#include "CoreMinimal.h"
#include "EGSCTeleportType.generated.h"

UENUM(BlueprintType)
enum class EGSCTeleportType : uint8 {
    None,
    Default,
    Classic,
    Immersive,
    Instant,
    Quest,
};

