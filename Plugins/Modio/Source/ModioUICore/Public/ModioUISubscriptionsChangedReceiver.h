#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioModID.h"
#include "ModioUISubscriptionsChangedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUISubscriptionsChangedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUISubscriptionsChangedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSubscriptionsChanged(FModioModID ModId, bool bNewSubscriptionState);
    
};

