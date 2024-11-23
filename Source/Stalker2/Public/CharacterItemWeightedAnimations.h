#pragma once
#include "CoreMinimal.h"
#include "CharacterItemWeightedAnimations.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FCharacterItemWeightedAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    STALKER2_API FCharacterItemWeightedAnimations();
};

