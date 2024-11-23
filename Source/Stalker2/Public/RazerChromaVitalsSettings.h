#pragma once
#include "CoreMinimal.h"
#include "RazerChromaEvent.h"
#include "RazerChromaVitalsSettings.generated.h"

USTRUCT(BlueprintType)
struct FRazerChromaVitalsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRazerChromaEvent Event;
    
    UPROPERTY(EditAnywhere)
    float Threshold;
    
    UPROPERTY(EditAnywhere)
    bool bEnableIfHigher;
    
    STALKER2_API FRazerChromaVitalsSettings();
};

