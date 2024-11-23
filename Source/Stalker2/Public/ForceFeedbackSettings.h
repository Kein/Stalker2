#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ForceFeedbackSettings.generated.h"

class UForceFeedbackDataAsset;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class STALKER2_API UForceFeedbackSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UForceFeedbackDataAsset> FeedbackDataAsset;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 StopAllPriority;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bStopCurrentProcessor;
    
public:
    UForceFeedbackSettings();

};

