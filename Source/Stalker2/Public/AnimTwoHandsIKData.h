#pragma once
#include "CoreMinimal.h"
#include "AnimHandIKData.h"
#include "AnimTwoHandsIKData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimTwoHandsIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FAnimHandIKData LeftHand;
    
    UPROPERTY(BlueprintReadWrite)
    FAnimHandIKData RightHand;
    
    FAnimTwoHandsIKData();
};

