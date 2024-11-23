#pragma once
#include "CoreMinimal.h"
#include "GSCComponentReference.h"
#include "SignalToReceive.generated.h"

USTRUCT()
struct FSignalToReceive {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGSCComponentReference SenderComponentRef;
    
    STALKER2_API FSignalToReceive();
};

