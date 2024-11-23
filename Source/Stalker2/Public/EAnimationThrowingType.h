#pragma once
#include "CoreMinimal.h"
#include "EAnimationThrowingType.generated.h"

UENUM(BlueprintType)
enum class EAnimationThrowingType : uint8 {
    None,
    Weak,
    Strong,
    WeakOneHanded,
    StrongOneHanded,
    WithoutEquip,
};

