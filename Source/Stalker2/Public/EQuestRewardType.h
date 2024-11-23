#pragma once
#include "CoreMinimal.h"
#include "EQuestRewardType.generated.h"

UENUM(BlueprintType)
enum class EQuestRewardType : uint8 {
    Random,
    Money,
    Helmet,
    Armor,
    Weapon,
    Detector,
    Artifact,
    Ammo,
    Attach,
    Medkit,
    Food,
};

