#pragma once
#include "CoreMinimal.h"
#include "ELadderType.generated.h"

UENUM(BlueprintType)
enum class ELadderType : uint8 {
    Blockout,
    Wood,
    MetalCorner,
    MetalPipe,
    MetalClip,
};

