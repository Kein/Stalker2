#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioOptionalUser.h"
#include "ModioUIUserChangedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIUserChangedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIUserChangedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUserChanged(FModioOptionalUser NewUser);
    
};

