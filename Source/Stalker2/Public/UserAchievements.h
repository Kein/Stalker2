#pragma once
#include "CoreMinimal.h"
#include "AchievementData.h"
#include "UserAchievements.generated.h"

USTRUCT(BlueprintType)
struct FUserAchievements {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FString, FAchievementData> Achievements;
    
    STALKER2_API FUserAchievements();
};

