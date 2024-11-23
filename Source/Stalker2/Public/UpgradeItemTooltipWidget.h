#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "UpgradeItemTooltipWidget.generated.h"

class URichTextWidget;
class UTextBlock;
class UUpgradeEffectWidget;
class UVerticalBox;

UCLASS(EditInlineNew)
class STALKER2_API UUpgradeItemTooltipWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* TitleText;
    
    UPROPERTY(Instanced)
    UTextBlock* DescriptionText;
    
    UPROPERTY(Instanced)
    UVerticalBox* MainVerticalBox;
    
    UPROPERTY(Instanced)
    UVerticalBox* ContentVerticalBox;
    
    UPROPERTY(Instanced)
    URichTextWidget* BlockingText;
    
    UPROPERTY(EditDefaultsOnly)
    FString WeaponDurabilityIsTooLowL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString TechnicianCantMakeThisUpgradeL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString RequiredUpgradesL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString BlockingUpgradesL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString NotEnoughMoneyL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString RequiredItemsL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString UpgradesBlueprintL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString UnableToInstallL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString NoUpgradesL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FString OrL10n;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUpgradeEffectWidget> UpgradeEffectWidgetClass;
    
    UPROPERTY(Instanced, Transient)
    TArray<UUpgradeEffectWidget*> EffectWidgets;
    
    UPROPERTY(Transient)
    FString LastUpgradePrototypeSID;
    
public:
    UUpgradeItemTooltipWidget();

};

