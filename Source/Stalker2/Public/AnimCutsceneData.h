#pragma once
#include "CoreMinimal.h"
#include "AnimCutsceneData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimCutsceneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float BlendTime;
    
    UPROPERTY(BlueprintReadOnly)
    bool CacheToggleFlag;
    
    FAnimCutsceneData();
};

