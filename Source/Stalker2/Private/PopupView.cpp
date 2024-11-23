#include "PopupView.h"

UPopupView::UPopupView() {
    this->PopupOverlay = NULL;
    this->PopupViewZOrder = 1000000;
    this->ActivePopupWidget = NULL;
}

void UPopupView::Retry() {
}

void UPopupView::Discard() {
}

void UPopupView::Confirm() {
}

void UPopupView::Cancel() {
}


