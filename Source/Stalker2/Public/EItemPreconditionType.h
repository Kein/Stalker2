#pragma once
#include "CoreMinimal.h"
#include "EItemPreconditionType.generated.h"

UENUM(BlueprintType)
enum class EItemPreconditionType : uint8 {
    InventoryItem,
    MeshGenerator,
};

