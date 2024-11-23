#pragma once
#include "CoreMinimal.h"
#include "ModioApiKey.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioApiKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString ApiKey;
    
public:
    FModioApiKey();
};

