#pragma once
#include "CoreMinimal.h"
#include "EMediaIOQuadLinkTransportType.generated.h"

UENUM()
enum class EMediaIOQuadLinkTransportType : int32 {
    SquareDivision,
    TwoSampleInterleave,
};

