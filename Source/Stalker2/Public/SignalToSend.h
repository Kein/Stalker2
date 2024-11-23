#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSCComponentReference.h"
#include "SignalToSend.generated.h"

USTRUCT(BlueprintType)
struct FSignalToSend {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGSCComponentReference ReceiverComponentRef;
    
    UPROPERTY(VisibleAnywhere)
    FGuid ReceiverGuid;
    
    STALKER2_API FSignalToSend();
};

