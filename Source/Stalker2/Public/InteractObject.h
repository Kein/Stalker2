#pragma once
#include "CoreMinimal.h"
#include "PrototypeSID.h"
#include "InteractObject.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FInteractObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPrototypeSID PrototypeSID;
    
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(EditAnywhere)
    bool bConsumedOnUse;
    
    FInteractObject();
};

