#pragma once
#include "CoreMinimal.h"
#include "EAttachedMagazineType.generated.h"

UENUM(BlueprintType)
enum class EAttachedMagazineType : uint8 {
    Eject,
    Insert,
};

