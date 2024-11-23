#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EWeather.h"
#include "CustomConsoleManagerDR.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerDR : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerDR();

    UFUNCTION(Exec)
    void XSwitchToWeather(const EWeather WeatherType) const;
    
    UFUNCTION(Exec)
    void XInitializeBenchmarkSequence(const FString& AssetPath, const FString& AssetName);
    
    UFUNCTION(Exec)
    void XForceWeather(const EWeather WeatherType) const;
    
    UFUNCTION(Exec)
    void XEnableCinematicMode();
    
    UFUNCTION(Exec)
    void XDisableCinematicMode();
    
};

