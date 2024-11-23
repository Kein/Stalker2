#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "EAgentType.h"
#include "EDamageType.h"
#include "EHUDElements.h"
#include "ERank.h"
#include "EVitalType.h"
#include "CustomConsoleManagerRK.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerRK : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerRK();

    UFUNCTION(Exec)
    void XUnlockDoor(int32 DoorUID) const;
    
    UFUNCTION(Exec)
    void XTogglePsyPhantomDebugMode();
    
    UFUNCTION(Exec)
    void XTogglePlayerRadiationSphereVisibility();
    
    UFUNCTION(Exec)
    void XToggleNPCFlashlight(int32 UID);
    
    UFUNCTION(Exec)
    void XToggleHUDElements(EHUDElements ElementsToHide);
    
    UFUNCTION(Exec)
    void XToggleFreeCamera();
    
    UFUNCTION(Exec)
    void XToggleDrawPlayerStats(float ValueFontXSizeCoef, float ValueFontYSizeCoef);
    
    UFUNCTION(Exec)
    void XToggleDrawInteractNPCStats(const float ValueFontXSizeCoef, const float ValueFontYSizeCoef);
    
    UFUNCTION(Exec)
    void XToggleDrawCurrentDiscounts();
    
    UFUNCTION(Exec)
    void XToggleDetailedVitalsStat(EVitalType VitalType);
    
    UFUNCTION(Exec)
    void XTeleportToObjUID(int32 ObjUID);
    
    UFUNCTION(Exec)
    void XTeleportTo(float XCoord, float YCoord, float ZCoord) const;
    
    UFUNCTION(Exec)
    void XStopBenchmark();
    
    UFUNCTION(Exec)
    void XStartGSCBackgroundProfiler(float MsecThreshold, float RamMBThreshold, uint32 InFramesToCaptureOnSpike, uint32 InFrameCountToComputeAverage);
    
    UFUNCTION(Exec)
    void XStartBenchmark(float CameraHeight, float CircleRadius, float InitialPitch, float InitialYaw, int32 BenchRuns, bool bProfileCsv);
    
    UFUNCTION(Exec)
    void XSpawnPsyNPC(const bool bIsPsyPhantom, const FString& ObjPrototypeSID, const ERank Rank, const int32 Count);
    
    UFUNCTION(Exec)
    void XSpawnObjBySID(const FString& PrototypeSID, ERank Rank, bool bDestroyOnOffline, float Px, float Py, float Pz, float Pitch, float Yaw, float Roll) const;
    
    UFUNCTION(Exec)
    int32 XSpawnItemContainer(const FString& PrototypeID, float Px, float Py, float Pz, int32 Gold, float Pitch, float Yaw, float Roll) const;
    
    UFUNCTION(Exec)
    void XSetWeatherLocked(const bool bNowLocked);
    
    UFUNCTION(Exec)
    void XSetPsyNPCFilterParams(const bool bIsPsyPhantom, const EAgentType AgentType1, const EAgentType AgentType2, const FString& ObjPrototypeFilter1, const FString& ObjPrototypeFilter2, const FString& ObjPrototypeFilter3);
    
    UFUNCTION(Exec)
    void XSetGodModeForInteractObj(bool bGodMode) const;
    
    UFUNCTION(Exec)
    void XSetGodMode(bool bGodMode) const;
    
    UFUNCTION(Exec)
    void XSetGlobalObjectPath(const FString& SID, const FString& InValue);
    
    UFUNCTION(Exec)
    void XSetGlobalBool(const FString& SID, bool InValue);
    
    UFUNCTION(Exec)
    void XRevertUpgradeBySID(const FString& ItemPrototypeSID, const FString& UpgradePrototypeSID) const;
    
    UFUNCTION(Exec)
    void XOpenDoor(int32 DoorUID) const;
    
    UFUNCTION(Exec)
    void XObjRecalcAllEquipment(int32 ObjUID) const;
    
    UFUNCTION(Exec)
    void XObjRecalcAllCachedStats(int32 ObjUID) const;
    
    UFUNCTION(Exec)
    void XModifyStamina(int32 TargetUID, float FPSpent) const;
    
    UFUNCTION(Exec)
    void XModifyBleeding(int32 TargetUID, int32 AddBleeding) const;
    
    UFUNCTION(Exec)
    void XIncreaseEnsuresLimit(int32 IncreaseLimit);
    
    UFUNCTION(Exec)
    void XForceActorInteract(int32 ActorUID, int32 InteractableUID) const;
    
    UFUNCTION(Exec)
    void XFileExists(const FString& FilePath) const;
    
    UFUNCTION(Exec)
    void XDrawPsyFieldVolumes(bool bInDrawPsyField);
    
    UFUNCTION(Exec)
    void XDisassemblyCurrentWeapon() const;
    
    UFUNCTION(Exec)
    void XDisableFrictionForPlayerInBulb(bool bInDrawBulbDebug);
    
    UFUNCTION(Exec)
    void XDealDurabilityDamage(int32 ItemUID, float DurabilityDamage) const;
    
    UFUNCTION(Exec)
    void XDealDamage(int32 TargetUID, float Damage, float ArmorDamage, float ArmorPiercing, float Bleeding, float BleedingChanceIncrement, EDamageType Type, const FString& BoneHit) const;
    
    UFUNCTION(Exec)
    void XCreateItemInInventoryByID(const FString& PrototypeID, int32 ObjUID, int32 Count, float Durability) const;
    
    UFUNCTION(Exec)
    void XApplyUpgradeBySID(const FString& ItemPrototypeSID, const FString& UpgradePrototypeSID) const;
    
    UFUNCTION(Exec)
    void XApplyEffectOnPlayer(const FString& EffectPrototypeSID);
    
    UFUNCTION(Exec)
    void XApplyEffectOnNPCByUID(const FString& EffectPrototypeSID, const int32 UID);
    
    UFUNCTION(Exec)
    void XApplyEffectOnInteractNPC(const FString& EffectPrototypeSID);
    
    UFUNCTION(Exec)
    void TransformUID(int32 UID);
    
};

