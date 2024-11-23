#include "ModioCommonQuickAccessTabView.h"
#include "Templates/SubclassOf.h"

UModioCommonQuickAccessTabView::UModioCommonQuickAccessTabView() {
    this->ModioStyle = NULL;
    this->InternalBackgroundBorder = NULL;
    this->OverlayBackgroundBorder = NULL;
    this->ProfileImage = NULL;
    this->UserNameTextBlock = NULL;
    this->StorageSpaceTrackerUserWidget = NULL;
    this->ModOperationTrackerUserWidget = NULL;
    this->MainGameMenuButton = NULL;
    this->AuthButton = NULL;
    this->MyCollectionButton = NULL;
}

void UModioCommonQuickAccessTabView::SetStyle(TSubclassOf<UModioCommonQuickAccessTabViewStyle> InStyle) {
}

void UModioCommonQuickAccessTabView::HandleOnMainGameMenuButtonClicked_Implementation() {
}

void UModioCommonQuickAccessTabView::HandleOnCollectionButtonClicked_Implementation() {
}

void UModioCommonQuickAccessTabView::HandleOnCloseButtonClicked_Implementation() {
}

void UModioCommonQuickAccessTabView::HandleOnAuthButtonClicked_Implementation() {
}


