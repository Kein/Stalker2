#pragma once
#include "CoreMinimal.h"
#include "EMagazineMeshType.generated.h"

UENUM(BlueprintType)
enum class EMagazineMeshType : uint8 {
    Full,
    Empty,
    RightEmpty,
    LeftEmpty,
};

