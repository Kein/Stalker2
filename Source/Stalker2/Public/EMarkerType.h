#pragma once
#include "CoreMinimal.h"
#include "EMarkerType.generated.h"

UENUM(BlueprintType)
enum class EMarkerType : uint8 {
    None,
    QuestMain,
    QuestSecondary,
    QuestGiverMain,
    QuestGiverSecondary,
    FollowLandmark,
    PlayerLandmarkDanger,
    PlayerLandmarkRadiation,
    PlayerLandmarkLoot,
    PlayerLandmarkAnomaly,
    Enemy,
    QuestMainTargetEnemy,
    QuestSecondaryTargetEnemy,
    Hub,
    DeadBody,
    Cache,
    CacheOpened,
    Trader,
    Technician,
    Guide,
    Bed,
    PlayerStorage,
    AnomalyArea,
    SearchPoint,
    ArchAnomaly,
    Location,
    RegionMarker,
    QuestEnemy,
    Medic,
    PartyLeader,
    HubLeader,
    GetCount,
};

