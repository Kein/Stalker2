#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioModManagementEvent.h"
#include "ModioUIModManagementEventReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIModManagementEventReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIModManagementEventReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnModManagementEvent(FModioModManagementEvent Event);
    
};

