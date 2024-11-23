#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseManager.h"
#include "TimeManager.generated.h"

UCLASS()
class STALKER2_API UTimeManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bIsPaused;
    
    UPROPERTY(VisibleAnywhere)
    FDateTime CurrentDate;
    
    UPROPERTY(VisibleAnywhere)
    FDateTime WeatherDate;
    
    UPROPERTY(VisibleAnywhere)
    double GameTimeSecondsDouble;
    
    UPROPERTY(EditAnywhere)
    double WeatherTimeSeconds;
    
    UPROPERTY(EditAnywhere)
    double GameTimeSeconds;
    
    UPROPERTY(VisibleAnywhere)
    float RealTime;
    
    UPROPERTY(VisibleAnywhere)
    float LastTickDeltaTimeNormalized;
    
    UPROPERTY(VisibleAnywhere)
    float CustomDeltaTime;
    
    UPROPERTY(VisibleAnywhere)
    float SpeedFactor;
    
    UPROPERTY(VisibleAnywhere)
    float WeatherSpeedFactor;
    
    UPROPERTY(VisibleAnywhere)
    float FrameRate;
    
    UPROPERTY(VisibleAnywhere)
    int64 TickCounter;
    
    UPROPERTY(VisibleAnywhere)
    int32 FixedFPS;
    
    UPROPERTY(VisibleAnywhere)
    int32 GameHours;
    
    UPROPERTY(VisibleAnywhere)
    int32 GameMinutes;
    
    UPROPERTY(VisibleAnywhere)
    float GameSecondsClamped;
    
    UPROPERTY(VisibleAnywhere)
    bool bDay;
    
    UPROPERTY(EditAnywhere)
    FDateTime StartDate;
    
    UPROPERTY(VisibleAnywhere)
    int64 UnixTime;
    
    UPROPERTY(VisibleAnywhere)
    int64 LastUnixTimeUpdateTick;
    
public:
    UTimeManager();

};

