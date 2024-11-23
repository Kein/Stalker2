#pragma once
#include "CoreMinimal.h"
#include "RazerChromaEvent.generated.h"

USTRUCT(BlueprintType)
struct FRazerChromaEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString AnimationName;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool bLoopAnimation;
    
    STALKER2_API FRazerChromaEvent();
};

