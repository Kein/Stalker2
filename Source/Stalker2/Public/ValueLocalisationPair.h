#pragma once
#include "CoreMinimal.h"
#include "ValueLocalisationPair.generated.h"

USTRUCT(BlueprintType)
struct FValueLocalisationPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    UPROPERTY(EditAnywhere)
    FText Loc10N;
    
    STALKER2_API FValueLocalisationPair();
};

