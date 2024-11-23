#pragma once
#include "CoreMinimal.h"
#include "ModioGameID.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioGameID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int64 GameId;
    
public:
    FModioGameID();
};

