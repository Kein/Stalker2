#pragma once
#include "CoreMinimal.h"
#include "ERank.h"
#include "SpawnSettingsPerArchetype.h"
#include "SpawnSettingsPerPlayerRank.generated.h"

USTRUCT()
struct FSpawnSettingsPerPlayerRank {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ERank PlayerRank;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSpawnQuantity;
    
    UPROPERTY(EditAnywhere)
    float InitialSpawnQuantityPercent;
    
    UPROPERTY(EditAnywhere)
    float InitialSpawnQuantityRespawnTimeSeconds;
    
    UPROPERTY(EditAnywhere)
    float MaxSpawnQuantityRespawnTimeSeconds;
    
    UPROPERTY(EditAnywhere)
    float WipeRespawnTimeoutSeconds;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnSettingsPerArchetype> SpawnSettingsPerArchetypes;
    
    STALKER2_API FSpawnSettingsPerPlayerRank();
};

