#pragma once
#include "CoreMinimal.h"
#include "EArchiartifactType.generated.h"

UENUM(BlueprintType)
enum class EArchiartifactType : uint8 {
    None,
    Ball,
    Water,
    Flower,
    Bolt,
    Nut,
    Kettle,
    GetCount,
};

