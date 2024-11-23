#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeTransform;
    
    STALKER2_API FEventData();
};

