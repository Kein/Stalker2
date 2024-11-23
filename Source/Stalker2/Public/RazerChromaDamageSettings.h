#pragma once
#include "CoreMinimal.h"
#include "EDamageSource.h"
#include "RazerChromaEvent.h"
#include "RazerChromaDamageSettings.generated.h"

USTRUCT(BlueprintType)
struct FRazerChromaDamageSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRazerChromaEvent Event;
    
    UPROPERTY(EditAnywhere)
    float DamageThreshold;
    
    UPROPERTY(EditAnywhere)
    TArray<EDamageSource> DamageSources;
    
    STALKER2_API FRazerChromaDamageSettings();
};

