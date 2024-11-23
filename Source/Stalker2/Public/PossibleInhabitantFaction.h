#pragma once
#include "CoreMinimal.h"
#include "FactionSelector.h"
#include "SpawnSettingsPerPlayerRank.h"
#include "PossibleInhabitantFaction.generated.h"

USTRUCT()
struct STALKER2_API FPossibleInhabitantFaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFactionSelector Faction;
    
    UPROPERTY(EditAnywhere)
    FSpawnSettingsPerPlayerRank SpawnSettingsPerPlayerRanks[4];
    
    FPossibleInhabitantFaction();
};

