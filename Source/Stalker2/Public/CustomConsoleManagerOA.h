#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerOA.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerOA : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerOA();

    UFUNCTION(Exec)
    void XPlayVideo(const FString& Path) const;
    
    UFUNCTION(Exec)
    void XNewDLCAvailable() const;
    
    UFUNCTION(Exec)
    void XIsHDREnabled() const;
    
    UFUNCTION(Exec)
    void XHasDLC(const FName DLCName) const;
    
    UFUNCTION(Exec)
    void XGetActiveDLC() const;
    
    UFUNCTION(Exec)
    void XDebugAudioScattererMap(const bool bEnabled);
    
    UFUNCTION(Exec)
    void XDebugAudioScattererEvents(const bool bEnabled, const float DrawTime);
    
};

