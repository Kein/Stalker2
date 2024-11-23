#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceWeighted.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimSequenceWeighted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequenceBase* Animation;
    
    STALKER2_API FAnimSequenceWeighted();
};

