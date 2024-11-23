#pragma once
#include "CoreMinimal.h"
#include "EGrenadeType.generated.h"

UENUM()
enum class EGrenadeType {
    None = -1,
    RGD5 = 0,
    F1,
    Molotov,
    Dynamite,
    GetCount,
};

