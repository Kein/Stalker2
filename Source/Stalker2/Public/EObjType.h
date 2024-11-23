#pragma once
#include "CoreMinimal.h"
#include "EObjType.generated.h"

UENUM(BlueprintType)
enum class EObjType : uint8 {
    NPC,
    Anomaly,
    AnomalySpawner,
    ArtifactSpawner,
    Marker,
    Squad,
    Item,
    ItemContainer,
    Grenade,
    Lair,
    ContextualAction,
    Zone,
    DestructibleObject,
    Patrol,
    Searchpoint,
    Door,
    InteractableObject,
    Bed,
    ALifeScenarioModel,
    WanderingLights,
    VortexArchAnomaly,
    VolumeForEffects,
    MistArchianomaly,
    PoppyFieldArchanomaly,
    FireBreathArchAnomaly,
    BulbArchAnomaly,
    Invalid,
    GetCount = Invalid,
};

