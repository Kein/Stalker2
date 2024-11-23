#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OnRetryRequestedDelegate.h"
#include "ModioUIAsyncRetryWidget.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIAsyncRetryWidget : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIAsyncRetryWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRetryRequestedDelegate(const FOnRetryRequested& Delegate);
    
};

