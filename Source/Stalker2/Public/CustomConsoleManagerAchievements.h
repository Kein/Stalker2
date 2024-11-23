#pragma once
#include "CoreMinimal.h"
#include "BaseConsoleManager.h"
#include "CustomConsoleManagerAchievements.generated.h"

UCLASS()
class STALKER2_API UCustomConsoleManagerAchievements : public UBaseConsoleManager {
    GENERATED_BODY()
public:
    UCustomConsoleManagerAchievements();

    UFUNCTION(Exec)
    void XAchievementsUpdateDebugAchievement(const int32 Value);
    
    UFUNCTION(Exec)
    void XAchievementsResetAll();
    
    UFUNCTION(Exec)
    void XAchievementsProcessFinishCampaign();
    
    UFUNCTION(Exec)
    void XAchievementsAddProgress(const FString& Name, const int32 Value);
    
};

