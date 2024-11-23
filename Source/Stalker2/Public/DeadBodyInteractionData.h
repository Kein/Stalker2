#pragma once
#include "CoreMinimal.h"
#include "ActorInteractionData.h"
#include "DeadBodyInteractionData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FDeadBodyInteractionData : public FActorInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverweight;
    
    FDeadBodyInteractionData();
};

