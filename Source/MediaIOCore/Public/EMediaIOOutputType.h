#pragma once
#include "CoreMinimal.h"
#include "EMediaIOOutputType.generated.h"

UENUM()
enum class EMediaIOOutputType : int32 {
    Fill,
    FillAndKey,
};

