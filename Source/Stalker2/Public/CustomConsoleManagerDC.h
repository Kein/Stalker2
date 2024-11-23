#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerDC.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerDC : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerDC();

    UFUNCTION(Exec)
    void XVideoTeleportPlayerWithFade(const float Distance);
    
    UFUNCTION(Exec)
    void XToggleDrawDebugDiamondAnomaly();
    
    UFUNCTION(Exec)
    void XToggleDebugPlayerArmorInfo();
    
    UFUNCTION(Exec)
    void XToggleDebugLightningBallNavigation();
    
    UFUNCTION(Exec)
    void XToggleDebugDrawOverlapWithAnomalyObjects();
    
    UFUNCTION(Exec)
    void XToggleDebugCodeLock();
    
    UFUNCTION(Exec)
    void XToggleDebugBulletDistanceScaling();
    
    UFUNCTION(Exec)
    void XTeleportPlayerWithFade(const float Distance);
    
    UFUNCTION(Exec)
    void XTeleportPlayerInForwardDirection(const float Distance, const float Delay);
    
    UFUNCTION(Exec)
    void XShowIntroductionLogo();
    
    UFUNCTION(Exec)
    void XShowDebugInfoForStash(const FString& InStashIdentifier);
    
    UFUNCTION(Exec)
    void XSetWeatherTransitionTimeMultiplier(const float WeatherTransitionTimeMultiplier);
    
    UFUNCTION(Exec)
    void XSetCurrentCode(const FString& InCurrentCode);
    
    UFUNCTION(Exec)
    void XRegenerateItemsInStashes();
    
    UFUNCTION(Exec)
    void XNPCRemoveAbility(const int32 NpcUID, const FString& AbilityTag);
    
    UFUNCTION(Exec)
    void XNPCAddAbility(const int32 NpcUID, const FString& AbilityTag);
    
    UFUNCTION(Exec)
    void XKillNpcByUID(const int32 NpcUID);
    
    UFUNCTION(Exec)
    void XChangeDropBodyMethod(bool bShouldDrop);
    
};

