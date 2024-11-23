#pragma once
#include "CoreMinimal.h"
#include "InventoryNew.h"
#include "TradeView.generated.h"

class UCustomGrid;
class UHintInputController;
class UPlatformSwitcher;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UTradeView : public UInventoryNew {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UCustomGrid* TraderGridWidget;
    
    UPROPERTY(Instanced)
    UCustomGrid* SellGridWidget;
    
    UPROPERTY(Instanced)
    UCustomGrid* BuyGridWidget;
    
    UPROPERTY(Instanced)
    UTextWidget* TradeConfirmInfoText;
    
    UPROPERTY(Instanced)
    UTextWidget* TradeResultMoney;
    
    UPROPERTY(Instanced)
    UTextWidget* TradeResultWeight;
    
    UPROPERTY(Instanced)
    UTextWidget* TradeResultWeightUnits;
    
    UPROPERTY(Instanced)
    UPlatformSwitcher* TraderButtonSwitcher;
    
    UPROPERTY(Instanced)
    UHintInputController* ButtonHintConfirmTrade;
    
    UPROPERTY(Instanced)
    UHintInputController* ButtonHintCancelTrade;
    
protected:
    UPROPERTY(Instanced)
    UHintInputController* HintBuy;
    
    UPROPERTY(Instanced)
    UHintInputController* HintSell;
    
    UPROPERTY(Instanced)
    UHintInputController* HintReturn;
    
public:
    UTradeView();

    UFUNCTION()
    void SellOrBuyReturnItemAction();
    
protected:
    UFUNCTION()
    void OnConfirmTradeHoldTriggered();
    
public:
    UFUNCTION()
    void OnConfirmTradeHoldReleased();
    
protected:
    UFUNCTION()
    void OnCancelTradeHoldTriggered();
    
public:
    UFUNCTION()
    void OnCancelTradeHoldReleased();
    
};

