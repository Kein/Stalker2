#pragma once
#include "CoreMinimal.h"
#include "EMediaIOInputType.h"
#include "MediaIOConfiguration.h"
#include "MediaIOInputConfiguration.generated.h"

USTRUCT()
struct MEDIAIOCORE_API FMediaIOInputConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FMediaIOConfiguration MediaConfiguration;
    
    UPROPERTY(VisibleAnywhere)
    EMediaIOInputType InputType;
    
    UPROPERTY(VisibleAnywhere)
    int32 KeyPortIdentifier;
    
    FMediaIOInputConfiguration();
};

