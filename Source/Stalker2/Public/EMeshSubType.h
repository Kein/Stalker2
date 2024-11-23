#pragma once
#include "CoreMinimal.h"
#include "EMeshSubType.generated.h"

UENUM()
enum class EMeshSubType : int32 {
    None,
    Static,
    Skeletal,
    GetCount,
};

