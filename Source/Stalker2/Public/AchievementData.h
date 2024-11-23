#pragma once
#include "CoreMinimal.h"
#include "AchievementData.generated.h"

class UAchievementTracker;

USTRUCT()
struct FAchievementData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAchievementTracker* Tracker;
    
    STALKER2_API FAchievementData();
};

