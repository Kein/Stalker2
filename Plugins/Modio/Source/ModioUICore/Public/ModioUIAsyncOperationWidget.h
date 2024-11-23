#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EModioUIAsyncOperationWidgetState.h"
#include "OnSetOperationStateDelegate.h"
#include "ModioUIAsyncOperationWidget.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIAsyncOperationWidget : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIAsyncOperationWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOperationStateDelegate(const FOnSetOperationState& Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestOperationRetry();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyOperationState(EModioUIAsyncOperationWidgetState NewState);
    
};

