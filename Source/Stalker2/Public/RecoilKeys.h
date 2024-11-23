#pragma once
#include "CoreMinimal.h"
#include "RecoilKeys.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FRecoilKeys {
    GENERATED_BODY()
public:
    UPROPERTY()
    float X;
    
    UPROPERTY()
    float Y;
    
    FRecoilKeys();
};

