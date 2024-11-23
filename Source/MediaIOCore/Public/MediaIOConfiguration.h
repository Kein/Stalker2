#pragma once
#include "CoreMinimal.h"
#include "MediaIOConnection.h"
#include "MediaIOMode.h"
#include "MediaIOConfiguration.generated.h"

USTRUCT()
struct MEDIAIOCORE_API FMediaIOConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsInput;
    
    UPROPERTY(VisibleAnywhere)
    FMediaIOConnection MediaConnection;
    
    UPROPERTY(VisibleAnywhere)
    FMediaIOMode MediaMode;
    
    FMediaIOConfiguration();
};

