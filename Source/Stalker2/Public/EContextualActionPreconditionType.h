#pragma once
#include "CoreMinimal.h"
#include "EContextualActionPreconditionType.generated.h"

UENUM(BlueprintType)
enum class EContextualActionPreconditionType : uint8 {
    None,
    Need,
    EquippedItem,
    NPCPrototype,
    AllowedAgentType,
    ItemInInventory,
    GlobalVariable,
    AvailableBodyPart,
    Weather,
    Rank,
    Faction,
};

