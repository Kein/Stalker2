#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "SpawnSettingsPerArchetype.generated.h"

USTRUCT()
struct FSpawnSettingsPerArchetype {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPrototypeSID PrototypeSID;
    
    UPROPERTY(EditAnywhere)
    int32 MinQuantity;
    
    UPROPERTY(EditAnywhere)
    float SpawnWeight;
    
    STALKER2_API FSpawnSettingsPerArchetype();
};

