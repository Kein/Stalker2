#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ParticleConditionPrototype.h"
#include "ParticleRainIntensityPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleRainIntensityPrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatInterval AllowedRainIntensityInterval;
    
    FParticleRainIntensityPrototype();
};

