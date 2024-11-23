#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMediaIOStandardType.h"
#include "MediaIOMode.generated.h"

USTRUCT()
struct MEDIAIOCORE_API FMediaIOMode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FFrameRate FrameRate;
    
    UPROPERTY(VisibleAnywhere)
    FIntPoint Resolution;
    
    UPROPERTY(VisibleAnywhere)
    EMediaIOStandardType Standard;
    
    UPROPERTY(VisibleAnywhere)
    int32 DeviceModeIdentifier;
    
    FMediaIOMode();
};

