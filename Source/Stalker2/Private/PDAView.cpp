#include "PDAView.h"

UPDAView::UPDAView() {
    this->Container = NULL;
    this->TimeWidget = NULL;
    this->RegionWidget = NULL;
    this->PDAFadeOutAnimation = NULL;
    this->PDAFadeInAnimation = NULL;
    this->bSholdShowInput = false;
    this->PDATurnOnTimer = 2.00f;
}


void UPDAView::HideAllWindows() {
}

void UPDAView::CloseUpdateView() {
}


