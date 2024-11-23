#pragma once
#include "CoreMinimal.h"
#include "DifficultyData.generated.h"

class USetDifficulty;
class UTexture2D;

USTRUCT(BlueprintType)
struct FDifficultyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* DifficultyImage;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USetDifficulty* DifficultyButtonAction;
    
    STALKER2_API FDifficultyData();
};

