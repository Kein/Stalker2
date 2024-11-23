#pragma once
#include "CoreMinimal.h"
#include "EGrenadeDebugFlag.generated.h"

UENUM()
enum class EGrenadeDebugFlag : uint32 {
    None,
    DrawFragments,
    DrawInnerRadius,
    DrawOuterRadius = 4,
    DrawTraces = 8,
    DrawRadii = 6,
    Everything = 15,
};

