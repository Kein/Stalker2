#pragma once
#include "CoreMinimal.h"
#include "ModioHeaderImage.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioHeaderImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Filename;
    
    UPROPERTY(BlueprintReadOnly)
    FString Original;
    
    FModioHeaderImage();
};

