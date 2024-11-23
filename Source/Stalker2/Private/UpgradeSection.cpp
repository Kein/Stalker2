#include "UpgradeSection.h"

UUpgradeSection::UUpgradeSection() {
    this->bIsEnabledSection = false;
    this->TargetPart = EUpgradeTargetPartType::None;
    this->UpgradesLineDirection = ELineDirection::Left;
    this->ModulesLineDirection = ELineDirection::Left;
    this->ConnectionLineUpgrade = NULL;
    this->UpgradesPanel = NULL;
    this->ConnectionLineModule = NULL;
    this->ModulesPanel = NULL;
    this->NewUpgradeNotification = NULL;
    this->UpgradesTextBlock = NULL;
    this->ModulesTextBlock = NULL;
    this->Dot = NULL;
    this->DotButton = NULL;
    this->SlotWidgetClass = NULL;
    this->SettingsAsset = NULL;
    this->UpgradeL10n = FText::FromString(TEXT("sid_misc_pda_TopPanel_Upgrades"));
    this->ModulesL10n = FText::FromString(TEXT("sid_misc_pda_upgrade_modules"));
    this->NewNotificationL10n = FText::FromString(TEXT("sid_misc_upgradesWindow_new"));
    this->LastHighlightedSlot = NULL;
}

void UUpgradeSection::ToggleSection() {
}

void UUpgradeSection::SectionUnhovered() {
}

void UUpgradeSection::SectionHovered() {
}

void UUpgradeSection::SectionClicked() {
}



