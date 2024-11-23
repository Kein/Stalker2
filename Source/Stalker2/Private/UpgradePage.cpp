#include "UpgradePage.h"

UUpgradePage::UUpgradePage() {
    this->UpgradePanel = NULL;
    this->ButtonAll = NULL;
    this->ButtonWeapon = NULL;
    this->ButtonArmor = NULL;
    this->ButtonHelmet = NULL;
    this->UpgradeMenu = NULL;
    this->HintNavLeft = NULL;
    this->HintNavRight = NULL;
    this->HideInformation = NULL;
    this->RepairButton = NULL;
    this->RemoveAttachment = NULL;
    this->SelectInstalAttachment = NULL;
    this->ButtonHintExit = NULL;
    this->NavigationHint = NULL;
    this->UpgradeSwitcher = NULL;
    this->DisassembleButton = NULL;
    this->RepairPrice = NULL;
    this->UpgradesIndex = 0;
    this->EmptyScreenIndex = 1;
    this->GreyValue = 0.25f;
    this->ExitTextHintl10nSID = TEXT("sid_misc_pda_hint_exit");
    this->BackTextHintl10nSID = TEXT("sid_misc_hintGeneral_back");
    this->HintHoldTime = 1.50f;
}

void UUpgradePage::UpdatePanel() {
}

void UUpgradePage::UnbindUpgradesNavigation() {
}

void UUpgradePage::UnbindConfirmPopup() {
}

void UUpgradePage::UIPDAUpgradesTreeNavigationUp() {
}

void UUpgradePage::UIPDAUpgradesTreeNavigationSelect() {
}

void UUpgradePage::UIPDAUpgradesTreeNavigationRight() {
}

void UUpgradePage::UIPDAUpgradesTreeNavigationLeft() {
}

void UUpgradePage::UIPDAUpgradesTreeNavigationDown() {
}

void UUpgradePage::UIPDAUpgradesTreeNavigationBack() {
}

void UUpgradePage::UIPDAUpgradesDisassemble() {
}

void UUpgradePage::UIPDANavigationUp() {
}

void UUpgradePage::UIPDANavigationRight() {
}

void UUpgradePage::UIPDANavigationLeft() {
}

void UUpgradePage::UIPDANavigationDown() {
}

void UUpgradePage::UIPDANavigationButtonRelease() {
}

void UUpgradePage::Repair() {
}

void UUpgradePage::Remove() {
}

void UUpgradePage::Hide() {
}

void UUpgradePage::HandleConfirmPopupBindings(bool InBind) {
}

void UUpgradePage::DisassembleItemHoldStarted() {
}

void UUpgradePage::DisassembleItemHoldReleased() {
}

void UUpgradePage::ClickButtonMenu(const FName ButtonId) {
}

void UUpgradePage::ClearInput() {
}

void UUpgradePage::BindUpgradesNavigation() {
}

void UUpgradePage::BindConfirmPopup() {
}


