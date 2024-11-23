#include "InteractView.h"

UInteractView::UInteractView() {
    this->MainHint = NULL;
    this->OptionalHint = NULL;
    this->BothElementCanvas = NULL;
    this->InteractCanvas = NULL;
    this->NameText = NULL;
    this->ActionText = NULL;
    this->SecondActionText = NULL;
    this->MainActionElement = NULL;
    this->SecondActionElement = NULL;
    this->NameElement = NULL;
    this->UpgradeIcon = NULL;
    this->DurabilityIcon = NULL;
    this->OverweightIcon = NULL;
    this->MainRightSoftTile = NULL;
    this->UpgradesBlueprintL10n = TEXT("sid_misc_upgradesWindow_blueprint");
}

void UInteractView::UpdateInteractHints() {
}

void UInteractView::UpdateHintState() {
}

void UInteractView::HideInteractHints() {
}


