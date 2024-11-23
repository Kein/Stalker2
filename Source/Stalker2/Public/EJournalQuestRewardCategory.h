#pragma once
#include "CoreMinimal.h"
#include "EJournalQuestRewardCategory.generated.h"

UENUM(BlueprintType)
enum class EJournalQuestRewardCategory : uint8 {
    None,
    Ammunition,
    Artifact,
    Attach,
    BodyArmor,
    Medicine,
    Detector,
    Food,
    Helmet,
    Money,
    Weapon,
    Other,
    GetCount,
};

