#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "AnimHandIKData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimHandIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAlphaBlend BlendArgs;
    
    FAnimHandIKData();
};

