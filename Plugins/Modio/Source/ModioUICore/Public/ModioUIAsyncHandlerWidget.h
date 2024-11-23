#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EModioUIAsyncOperationWidgetState.h"
#include "ModioUIAsyncHandlerWidget.generated.h"

class IModioUIAsyncOperationWidget;
class UModioUIAsyncOperationWidget;

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIAsyncHandlerWidget : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIAsyncHandlerWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LinkAsyncOperationWidget(const TScriptInterface<IModioUIAsyncOperationWidget>& Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EModioUIAsyncOperationWidgetState GetAsyncOperationState() const;
    
};

