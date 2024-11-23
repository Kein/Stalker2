#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerMP.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerMP : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerMP();

    UFUNCTION(Exec)
    void XWeaponDrag(const int32 ModelUID, const float Delay);
    
    UFUNCTION(Exec)
    void XTriggerAutoSave() const;
    
    UFUNCTION(Exec)
    void XToggleLogLoadingProgress() const;
    
    UFUNCTION(Exec)
    void XToggleDebugAimAssist();
    
    UFUNCTION(Exec)
    void XStartSleep() const;
    
    UFUNCTION(Exec)
    void XSetClosestFaustCloneSwitchValue(const float SearchRadius, const float SwitchValue);
    
    UFUNCTION(Exec)
    void XSetArtifactSpawnLuck(const float LuckValue);
    
    UFUNCTION(Exec)
    void XSetAimAssistEnabled(const bool bEnabled);
    
    UFUNCTION(Exec)
    void XLoadLastSave() const;
    
    UFUNCTION(Exec)
    void XEnableLegsIK();
    
    UFUNCTION(Exec)
    void XDisplayArtifactSpawnLuckStatus(const FString& ArtifactSpawnerSID);
    
    UFUNCTION(Exec)
    void XDisableLegsIK();
    
};

