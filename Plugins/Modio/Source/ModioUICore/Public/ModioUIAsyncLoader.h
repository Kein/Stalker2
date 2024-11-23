#pragma once
#include "CoreMinimal.h"
#include "Components/NamedSlotInterface.h"
#include "Components/Widget.h"
#include "EModioUIAsyncOperationWidgetState.h"
#include "ModioUIAsyncHandlerWidget.h"
#include "ModioUIAsyncLoader.generated.h"

UCLASS()
class MODIOUICORE_API UModioUIAsyncLoader : public UWidget, public IModioUIAsyncHandlerWidget, public INamedSlotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EModioUIAsyncOperationWidgetState CurrentState;
    
    UPROPERTY(Instanced)
    TMap<FName, UWidget*> NamedWidgets;
    
public:
    UModioUIAsyncLoader();

    UFUNCTION()
    void Retry();
    
protected:
    UFUNCTION()
    void OnRetryRequested();
    
    UFUNCTION()
    void NativeHandleAsyncOperationStateChange(EModioUIAsyncOperationWidgetState NewState);
    

    virtual void GetSlotNames(TArray<FName>& SlotNames) const override {  };
    virtual UWidget* GetContentForSlot(FName SlotName) const override { return NULL; };
    virtual void SetContentForSlot(FName SlotName, UWidget* Content) override {  };
};

