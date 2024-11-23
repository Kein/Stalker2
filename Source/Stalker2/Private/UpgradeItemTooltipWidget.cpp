#include "UpgradeItemTooltipWidget.h"

UUpgradeItemTooltipWidget::UUpgradeItemTooltipWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TitleText = NULL;
    this->DescriptionText = NULL;
    this->MainVerticalBox = NULL;
    this->ContentVerticalBox = NULL;
    this->BlockingText = NULL;
    this->WeaponDurabilityIsTooLowL10n = TEXT("sid_misc_pda_upgrade_durability_low");
    this->TechnicianCantMakeThisUpgradeL10n = TEXT("sid_misc_pda_upgrade_technician_cant_upgrade");
    this->RequiredUpgradesL10n = TEXT("sid_misc_pda_upgrade_required");
    this->BlockingUpgradesL10n = TEXT("sid_misc_upgrade_blocking");
    this->NotEnoughMoneyL10n = TEXT("sid_misc_pda_upgrade_not_enough_money");
    this->RequiredItemsL10n = TEXT("sid_misc_upgrade_required_items");
    this->UpgradesBlueprintL10n = TEXT("sid_misc_upgradesWindow_blueprint");
    this->UnableToInstallL10n = TEXT("sid_misc_pda_upgrade_install_unable");
    this->NoUpgradesL10n = TEXT("sid_misc_pda_upgrade_noupgrades");
    this->OrL10n = TEXT("sid_misc_pda_upgrade_or");
    this->UpgradeEffectWidgetClass = NULL;
}


