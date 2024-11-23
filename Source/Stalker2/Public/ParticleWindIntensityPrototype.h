#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ParticleConditionPrototype.h"
#include "ParticleWindIntensityPrototype.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FParticleWindIntensityPrototype : public FParticleConditionPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatInterval AllowedWindIntensityInterval;
    
    FParticleWindIntensityPrototype();
};

