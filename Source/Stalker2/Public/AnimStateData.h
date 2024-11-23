#pragma once
#include "CoreMinimal.h"
#include "AnimStateData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bAlive;
    
    UPROPERTY(BlueprintReadOnly)
    bool bMoving;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWalking;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRunning;
    
    UPROPERTY(BlueprintReadOnly)
    bool bSprinting;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInAir;
    
    FAnimStateData();
};

