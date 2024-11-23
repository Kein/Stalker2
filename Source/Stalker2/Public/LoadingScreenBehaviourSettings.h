#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenBehaviourSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FLoadingScreenBehaviourSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MinimumLoadingScreenDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAutoCompleteWhenLoadingComplete;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bWaitForManualStop;
    
    FLoadingScreenBehaviourSettings();
};

