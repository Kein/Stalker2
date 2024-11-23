#pragma once
#include "CoreMinimal.h"
#include "ECameraShakeEffectSubtype.generated.h"

UENUM(BlueprintType)
enum class ECameraShakeEffectSubtype : uint8 {
    None,
    AddEffect,
    RemoveEffect,
    GetCount,
};

