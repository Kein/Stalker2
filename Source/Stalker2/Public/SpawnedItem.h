#pragma once
#include "CoreMinimal.h"
#include "SpawnedItem.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FSpawnedItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString PrototypeSID;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    float MinDurability;
    
    UPROPERTY(EditAnywhere)
    float MaxDurability;
    
public:
    FSpawnedItem();
};

