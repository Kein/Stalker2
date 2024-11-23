#pragma once
#include "CoreMinimal.h"
#include "BaseManager.h"
#include "UserAchievements.h"
#include "AchievementManager.generated.h"

UCLASS()
class UAchievementManager : public UBaseManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FString, FUserAchievements> UsersToProgress;
    
    UPROPERTY(Transient)
    FUserAchievements DefaultUserAchievements;
    
public:
    UAchievementManager();

};

