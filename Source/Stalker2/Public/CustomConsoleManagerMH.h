#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerMH.generated.h"

UCLASS()
class UCustomConsoleManagerMH : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMH();

    UFUNCTION(Exec)
    void XToggleSoapBubbleDebug();
    
    UFUNCTION(Exec)
    void XToggleHubDoors(const bool bLocked, const float Radius);
    
    UFUNCTION(Exec)
    void XToggleDrawPlayerShootingDebug();
    
    UFUNCTION(Exec)
    void XToggleDrawPlayerRecoilDebug();
    
    UFUNCTION(Exec)
    void XToggleDrawPlayerDispersionDebug();
    
    UFUNCTION(Exec)
    void XToggleDrawAIShootingDebug();
    
    UFUNCTION(Exec)
    void XToggleCustomFov(const bool bEnable);
    
    UFUNCTION(Exec)
    void XSetFov(const float FOV);
    
    UFUNCTION(Exec)
    void XRemoveEffectFromPlayer(const FString& EffectPrototypeSID);
    
    UFUNCTION(Exec)
    void XApplyMainHandWeaponUpgradeBySID(const FString& UpgradePrototypeSID) const;
    
};

