#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonActionBar.generated.h"

class ULocalPlayer;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonActionBar : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    UModioCommonActionBar();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MonitorPlayerActions(const ULocalPlayer* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePlayerAdded(int32 PlayerIdx);
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleDeferredDisplayUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleBoundActionsUpdated(bool bFromOwningPlayer);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetNumInputActions() const;
    
};

