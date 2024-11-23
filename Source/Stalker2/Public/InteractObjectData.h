#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "InteractObjectData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FInteractObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPrototypeSID PrototypeSID;
    
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(EditAnywhere)
    float MinDurability;
    
    UPROPERTY(EditAnywhere)
    float MaxDurability;
    
    FInteractObjectData();
};

