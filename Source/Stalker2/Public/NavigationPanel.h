#pragma once
#include "CoreMinimal.h"
#include "OnChangeSelectSlotDelegate.h"
#include "OnSlotClickedDelegate.h"
#include "WidgetBase.h"
#include "NavigationPanel.generated.h"

class UHintInputController;
class UPanelWidget;

UCLASS(EditInlineNew)
class STALKER2_API UNavigationPanel : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPanelWidget* SlotContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldEnableClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldSelectDefaultSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefaultSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldStopOthersInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldBindClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveToNextSlotAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveToPreviousSlotAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreInputOnPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldLoopMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PDASectionSwitch;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeSelectSlot OnChangeSelectSlot;
    
    UPROPERTY(BlueprintAssignable)
    FOnSlotClicked OnSlotClicked;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UHintInputController* PrevPageHint;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UHintInputController* NextPageHint;
    
    UNavigationPanel();

    UFUNCTION()
    void TransitToNextSlot();
    
    UFUNCTION()
    void TransitSelectSlotRelease();
    
    UFUNCTION()
    void TransitSelectSlotForward();
    
    UFUNCTION()
    void TransitSelectSlotBack();
    
    UFUNCTION()
    void MoveSelectSlotToPreviousSlot();
    
    UFUNCTION()
    void MoveSelectSlotToNextSlot();
    
    UFUNCTION()
    void InitClickTransition(FName ButtonId);
    
private:
    UFUNCTION()
    void ClickMenuButton(const FName InButtonId);
    
};

