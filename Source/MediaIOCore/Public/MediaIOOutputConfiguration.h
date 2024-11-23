#pragma once
#include "CoreMinimal.h"
#include "EMediaIOOutputType.h"
#include "EMediaIOReferenceType.h"
#include "MediaIOConfiguration.h"
#include "MediaIOOutputConfiguration.generated.h"

USTRUCT()
struct MEDIAIOCORE_API FMediaIOOutputConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FMediaIOConfiguration MediaConfiguration;
    
    UPROPERTY(VisibleAnywhere)
    EMediaIOOutputType OutputType;
    
    UPROPERTY(VisibleAnywhere)
    int32 KeyPortIdentifier;
    
    UPROPERTY(VisibleAnywhere)
    EMediaIOReferenceType OutputReference;
    
    UPROPERTY(VisibleAnywhere)
    int32 ReferencePortIdentifier;
    
    FMediaIOOutputConfiguration();
};

