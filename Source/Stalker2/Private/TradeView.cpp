#include "TradeView.h"

UTradeView::UTradeView() {
    this->TraderGridWidget = NULL;
    this->SellGridWidget = NULL;
    this->BuyGridWidget = NULL;
    this->TradeConfirmInfoText = NULL;
    this->TradeResultMoney = NULL;
    this->TradeResultWeight = NULL;
    this->TradeResultWeightUnits = NULL;
    this->TraderButtonSwitcher = NULL;
    this->ButtonHintConfirmTrade = NULL;
    this->ButtonHintCancelTrade = NULL;
    this->HintBuy = NULL;
    this->HintSell = NULL;
    this->HintReturn = NULL;
}

void UTradeView::SellOrBuyReturnItemAction() {
}

void UTradeView::OnConfirmTradeHoldTriggered() {
}

void UTradeView::OnConfirmTradeHoldReleased() {
}

void UTradeView::OnCancelTradeHoldTriggered() {
}

void UTradeView::OnCancelTradeHoldReleased() {
}


