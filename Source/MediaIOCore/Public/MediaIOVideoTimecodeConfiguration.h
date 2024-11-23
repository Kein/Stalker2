#pragma once
#include "CoreMinimal.h"
#include "EMediaIOAutoDetectableTimecodeFormat.h"
#include "MediaIOConfiguration.h"
#include "MediaIOVideoTimecodeConfiguration.generated.h"

USTRUCT()
struct MEDIAIOCORE_API FMediaIOVideoTimecodeConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FMediaIOConfiguration MediaConfiguration;
    
    UPROPERTY(VisibleAnywhere)
    EMediaIOAutoDetectableTimecodeFormat TimecodeFormat;
    
    FMediaIOVideoTimecodeConfiguration();
};

