#pragma once
#include "CoreMinimal.h"
#include "EModioModfilePlatform.h"
#include "ModioGamePlatform.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioGamePlatform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EModioModfilePlatform Platform;
    
    UPROPERTY(BlueprintReadOnly)
    bool Locked;
    
    UPROPERTY(BlueprintReadOnly)
    bool Moderated;
    
    FModioGamePlatform();
};

