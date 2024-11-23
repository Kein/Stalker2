#include "UpgradeMenuWidget.h"

UUpgradeMenuWidget::UUpgradeMenuWidget() {
    this->ConfirmWarningPopupL10n = TEXT("sid_misc_pda_upgrade_replace");
    this->UpgradeTooltipWidgetClass = NULL;
    this->RepairButton = NULL;
    this->RepairPrice = NULL;
    this->HideInformationButton = NULL;
    this->RemoveAttachmentButton = NULL;
    this->DisassembleButton = NULL;
    this->InSelectInstallAttachmentButton = NULL;
    this->CurrentSlot = NULL;
    this->PriceWidget = NULL;
    this->ItemNameText = NULL;
    this->PlayerMoneyText = NULL;
    this->UpgradedItemIcon = NULL;
    this->CanvasPanel = NULL;
    this->ItemTooltip = NULL;
    this->UpgradeTooltipWidget = NULL;
    this->ConfirmPopupContainer = NULL;
    this->ConfirmUpgradePopup = NULL;
    this->IconDurability = NULL;
    this->PlayerMoneyBox = NULL;
    this->TensileStrength = 0.25f;
    this->RepairButtonL10N = TEXT("sid_misc_inv_right_click_menu_Repair");
    this->PriceStyle = TEXT("<default>");
    this->LastActiveSection = NULL;
    this->bShowInfoOnClick = true;
    this->bPriceWidgetEnabled = false;
    this->LastHoveredSection = NULL;
    this->bSetPositions = false;
    this->SectionsCanvas = NULL;
    this->BlackWeaponFade = NULL;
}

void UUpgradeMenuWidget::OnWeaponFadeProgress(const float Alpha, const bool bIsShowing) {
}

void UUpgradeMenuWidget::OnUpgradeMouseExit() {
}

void UUpgradeMenuWidget::OnUpgradeMouseEnter(const FString& UpgradeID) {
}

void UUpgradeMenuWidget::OnUpgradeClick(const FString& UpgradeID, UUpgradeSlot* InCurrentSlot) {
}

void UUpgradeMenuWidget::OnSectionFadeProgress(const float Alpha, const bool bIsShowing) {
}

void UUpgradeMenuWidget::OnSectionClicked(UUpgradeSection* Section) {
}

void UUpgradeMenuWidget::OnRevertLastUpgrade() {
}

void UUpgradeMenuWidget::OnRepair() {
}

FEventReply UUpgradeMenuWidget::OnMouseBlackFadeDown(FGeometry InGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}

void UUpgradeMenuWidget::OnApplyUpgrade(const FString& UpgradeID, UUpgradeSlot* InCurrentSlot) {
}

void UUpgradeMenuWidget::LogSectionPositions() const {
}

void UUpgradeMenuWidget::LoadPrototypeEditor() {
}


void UUpgradeMenuWidget::DisassembleItem() {
}


void UUpgradeMenuWidget::ChangeUpgradeModule() {
}


