#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "InteractEffectData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FInteractEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPrototypeSID PrototypeSID;
    
    FInteractEffectData();
};

