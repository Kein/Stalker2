#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioModID.h"
#include "ModioUIModEnableWidget.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIModEnableWidget : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIModEnableWidget : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnModEnabledStateChanged(FModioModID ModId, bool bNewSubscriptionState);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void ModEnabledStateChangedHandler(FModioModID ModId, bool bNewSubscriptionState);
    
};

