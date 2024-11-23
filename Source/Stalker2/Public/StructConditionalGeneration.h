#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.h"
#include "ERank.h"
#include "StructConditionalGeneration.generated.h"

USTRUCT()
struct STALKER2_API FStructConditionalGeneration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double RefreshGameTime;
    
    UPROPERTY(EditAnywhere)
    TArray<ERank> PlayerRanks;
    
    UPROPERTY(EditAnywhere)
    TArray<EGameDifficulty> Difficulties;
    
    UPROPERTY(EditAnywhere)
    int32 ReputationThreshold;
    
    FStructConditionalGeneration();
};

