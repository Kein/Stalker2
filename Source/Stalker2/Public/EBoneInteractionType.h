#pragma once
#include "CoreMinimal.h"
#include "EBoneInteractionType.generated.h"

UENUM(BlueprintType)
enum class EBoneInteractionType : uint8 {
    HideBone,
    ShowBone,
    HideBoneOnAmmoCount,
};

