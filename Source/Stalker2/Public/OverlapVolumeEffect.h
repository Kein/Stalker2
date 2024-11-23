#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "OverlapVolumeEffect.generated.h"

USTRUCT(BlueprintType)
struct FOverlapVolumeEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPrototypeSID EffectPrototype;
    
    UPROPERTY(EditAnywhere)
    uint8 AddOnBeginOverlap: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 RemoveOnEndOverlap: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 IgnorePlayer: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 IgnoreAI: 1;
    
    STALKER2_API FOverlapVolumeEffect();
};

