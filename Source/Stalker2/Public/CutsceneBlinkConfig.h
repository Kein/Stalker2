#pragma once
#include "CoreMinimal.h"
#include "CutsceneBlinkConfig.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FCutsceneBlinkConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTimeInterval;
    
    FCutsceneBlinkConfig();
};

