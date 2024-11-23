#pragma once
#include "CoreMinimal.h"
#include "EBodyMeshType.generated.h"

UENUM(BlueprintType)
enum class EBodyMeshType : uint8 {
    BodyArmor,
    Face,
    Hands,
    Head,
    Attach,
    Cloth,
};

