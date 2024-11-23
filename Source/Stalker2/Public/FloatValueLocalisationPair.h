#pragma once
#include "CoreMinimal.h"
#include "FloatValueLocalisationPair.generated.h"

USTRUCT(BlueprintType)
struct FFloatValueLocalisationPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PercentValue;
    
    UPROPERTY(EditAnywhere)
    FText Loc10N;
    
    STALKER2_API FFloatValueLocalisationPair();
};

