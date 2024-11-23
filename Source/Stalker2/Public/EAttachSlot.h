#pragma once
#include "CoreMinimal.h"
#include "EAttachSlot.generated.h"

UENUM(BlueprintType)
enum class EAttachSlot : uint8 {
    None,
    Barrel,
    Scope,
    Handguard,
    Magazine,
    PlankScope,
    Flashlight,
    Lasersight,
    GetCount,
};

