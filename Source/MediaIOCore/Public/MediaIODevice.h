#pragma once
#include "CoreMinimal.h"
#include "MediaIODevice.generated.h"

USTRUCT()
struct MEDIAIOCORE_API FMediaIODevice {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName DeviceName;
    
    UPROPERTY(EditAnywhere)
    int32 DeviceIdentifier;
    
    FMediaIODevice();
};

