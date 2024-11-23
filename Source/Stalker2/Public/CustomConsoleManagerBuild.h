#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerBuild.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerBuild : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerBuild();

    UFUNCTION(Exec)
    void XSpawnItemNearPlayerBySID(const FString& ItemPrototypeSID) const;
    
    UFUNCTION(Exec)
    void XSpawnItemInCoordinatesBySID(const FString& ItemPrototypeSID, float Px, float Py, float Pz) const;
    
    UFUNCTION(Exec)
    void XShowPlayerCoordinates() const;
    
    UFUNCTION(Exec)
    void XSetPlayerSpeedMultiplier(float SpeedMultiplier);
    
    UFUNCTION(Exec)
    void XSetNoClipGSC(bool bNoClipGSC, float Speed);
    
    UFUNCTION(Exec)
    void XSetGodModeByUID(int32 EntityUID, bool bGodModeState) const;
    
    UFUNCTION(Exec)
    void XSetGodModeAllFactions(bool bGodModeState) const;
    
    UFUNCTION(Exec)
    void XSetFreeCameraSpeedMultiplier(float SpeedMultiplier);
    
    UFUNCTION(Exec)
    void XSetFactionGodMode(const FString& CurrentFactionSelector, bool bGodModeState) const;
    
    UFUNCTION(Exec)
    void XSetEntityUnkillableByUID(int32 EntityUID, bool bGodModeState) const;
    
    UFUNCTION(Exec)
    void XResetCurrentWeaponDurabilityToZero();
    
    UFUNCTION(Exec)
    void XResetCurrentBodyArmorDurabilityToZero();
    
    UFUNCTION(Exec)
    void XRepairCurrentWeapon();
    
    UFUNCTION(Exec)
    void XDisplayFocusingPlayerEnemiesCount();
    
};

