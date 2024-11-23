#pragma once
#include "CoreMinimal.h"
#include "ModioModStats.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioModStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int64 PopularityRankPosition;
    
    UPROPERTY(BlueprintReadOnly)
    int64 PopularityRankTotalMods;
    
    UPROPERTY(BlueprintReadOnly)
    int64 DownloadsTotal;
    
    UPROPERTY(BlueprintReadOnly)
    int64 SubscribersTotal;
    
    UPROPERTY(BlueprintReadOnly)
    int64 RatingTotal;
    
    UPROPERTY(BlueprintReadOnly)
    int64 RatingPositive;
    
    UPROPERTY(BlueprintReadOnly)
    int64 RatingNegative;
    
    UPROPERTY(BlueprintReadOnly)
    int64 RatingPercentagePositive;
    
    UPROPERTY(BlueprintReadOnly)
    float RatingWeightedAggregate;
    
    UPROPERTY(BlueprintReadOnly)
    FString RatingDisplayText;
    
    FModioModStats();
};

