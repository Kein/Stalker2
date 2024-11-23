#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerSM.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerSM : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerSM();

    UFUNCTION(Exec)
    void XSVFriendlyFire(bool bEnabled) const;
    
    UFUNCTION(Exec)
    void XStopEmission() const;
    
    UFUNCTION(Exec)
    void XStartEmissionBySID(const FString& PrototypeSID);
    
    UFUNCTION(Exec)
    void XStartEmission() const;
    
    UFUNCTION(Exec)
    void XShowProjectileTrajectory(bool bShow) const;
    
    UFUNCTION(Exec)
    void XResumeScheduledEmission() const;
    
    UFUNCTION(Exec)
    void XPauseScheduledEmission() const;
    
    UFUNCTION(Exec)
    void XGetEmissionState() const;
    
};

