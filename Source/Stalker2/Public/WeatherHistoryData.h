#pragma once
#include "CoreMinimal.h"
#include "EWeather.h"
#include "WeatherHistoryData.generated.h"

USTRUCT(BlueprintType)
struct FWeatherHistoryData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EWeather WeatherType;
    
    UPROPERTY(VisibleAnywhere)
    float BlendWeight;
    
    UPROPERTY(VisibleAnywhere)
    float BlendWeightIncrease;
    
    UPROPERTY(VisibleAnywhere)
    int32 Cooldown;
    
    UPROPERTY(VisibleAnywhere)
    int32 MaxRepeatAmount;
    
    UPROPERTY(VisibleAnywhere)
    int32 RepeatAmount;
    
    UPROPERTY(VisibleAnywhere)
    bool bPaused;
    
    UPROPERTY(VisibleAnywhere)
    bool bAllowInDialogueTransition;
    
    STALKER2_API FWeatherHistoryData();
};

