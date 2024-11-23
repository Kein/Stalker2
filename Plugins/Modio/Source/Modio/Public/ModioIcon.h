#pragma once
#include "CoreMinimal.h"
#include "ModioIcon.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Filename;
    
    UPROPERTY(BlueprintReadOnly)
    FString Original;
    
    UPROPERTY(BlueprintReadOnly)
    FString Thumb64x64;
    
    UPROPERTY(BlueprintReadOnly)
    FString Thumb128x128;
    
    UPROPERTY(BlueprintReadOnly)
    FString Thumb256x256;
    
    FModioIcon();
};

