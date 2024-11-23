#pragma once
#include "CoreMinimal.h"
#include "EMediaIOInputType.generated.h"

UENUM()
enum class EMediaIOInputType : int32 {
    Fill,
    FillAndKey,
};

