#pragma once
#include "CoreMinimal.h"
#include "ModioLogo.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioLogo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Filename;
    
    UPROPERTY(BlueprintReadOnly)
    FString Original;
    
    UPROPERTY(BlueprintReadOnly)
    FString Thumb320x180;
    
    UPROPERTY(BlueprintReadOnly)
    FString Thumb640x360;
    
    UPROPERTY(BlueprintReadOnly)
    FString Thumb1280x720;
    
    FModioLogo();
};

