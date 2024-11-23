#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ModioOptionalUser.h"
#include "ModioUIAuthenticationChangedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIAuthenticationChangedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIAuthenticationChangedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAuthenticationChanged(FModioOptionalUser User);
    
};

