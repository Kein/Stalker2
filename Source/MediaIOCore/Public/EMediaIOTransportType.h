#pragma once
#include "CoreMinimal.h"
#include "EMediaIOTransportType.generated.h"

UENUM()
enum class EMediaIOTransportType : int32 {
    SingleLink,
    DualLink,
    QuadLink,
    HDMI,
};

