#pragma once
#include "CoreMinimal.h"
#include "ModioGameID.h"
#include "ModioGameStats.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioGameStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioGameID GameId;
    
    UPROPERTY(BlueprintReadOnly)
    int64 ModCountTotal;
    
    UPROPERTY(BlueprintReadOnly)
    int64 ModDownloadsToday;
    
    UPROPERTY(BlueprintReadOnly)
    int64 ModDownloadsTotal;
    
    UPROPERTY(BlueprintReadOnly)
    int64 ModDownloadsDailyAverage;
    
    UPROPERTY(BlueprintReadOnly)
    int64 ModSubscribersTotal;
    
    UPROPERTY(BlueprintReadOnly)
    int64 DateExpires;
    
    FModioGameStats();
};

