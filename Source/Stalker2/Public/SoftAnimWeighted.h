#pragma once
#include "CoreMinimal.h"
#include "SoftAnimWeighted.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FSoftAnimWeighted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimSequenceBase> Animation;
    
    STALKER2_API FSoftAnimWeighted();
};

