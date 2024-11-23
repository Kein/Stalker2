#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerMB.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerMB : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMB();

    UFUNCTION(Exec)
    void XToggleShowTriggerCapsuleView() const;
    
    UFUNCTION(Exec)
    void XToggleShowProtection();
    
    UFUNCTION(Exec)
    void XToggleShowPlayerRequestedMainHandWeaponType();
    
    UFUNCTION(Exec)
    void XToggleShowPlayerLocation();
    
    UFUNCTION(Exec)
    void XToggleShowPlayerLastHeldItem();
    
    UFUNCTION(Exec)
    void XToggleShowModels();
    
    UFUNCTION(Exec)
    void XToggleShowLightningBallAnomalyDebugInfo();
    
    UFUNCTION(Exec)
    void XToggleDebugExpulsionAnomaly() const;
    
    UFUNCTION(Exec)
    void XSwitchAnomalySpawnerPreset();
    
    UFUNCTION(Exec)
    void XSetDrawDebugExplosion(const bool bDebug, const float DebugTime);
    
};

