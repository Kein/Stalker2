#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "EUpgradeTargetPartType.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "UpgradeMenuWidget.generated.h"

class UCanvasPanel;
class UConfirmUpgradePopup;
class UHintActionRichText;
class UHintInputController;
class UHorizontalBox;
class UImage;
class UImageWidget;
class UItemsStatsUpgrades;
class ULayeredItemImage;
class UOverlay;
class URepairPriceWidget;
class UTextWidget;
class UTexture2D;
class UUpgradeItemTooltipWidget;
class UUpgradePriceWidget;
class UUpgradeSection;
class UUpgradeSlot;
class UUserWidget;

UCLASS(EditInlineNew)
class STALKER2_API UUpgradeMenuWidget : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    TMap<EUpgradeTargetPartType, UUpgradeSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UUpgradeSection*> SectionWidgetsArray;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLinearColor BlackFade;
    
    UPROPERTY(EditDefaultsOnly)
    FString ConfirmWarningPopupL10n;
    
private:
    UPROPERTY(Transient)
    TSubclassOf<UUserWidget> UpgradeTooltipWidgetClass;
    
    UPROPERTY(Instanced, Transient)
    UHintInputController* RepairButton;
    
    UPROPERTY(Instanced, Transient)
    URepairPriceWidget* RepairPrice;
    
    UPROPERTY(Instanced, Transient)
    UHintInputController* HideInformationButton;
    
    UPROPERTY(Instanced, Transient)
    UHintInputController* RemoveAttachmentButton;
    
    UPROPERTY(Instanced, Transient)
    UHintActionRichText* DisassembleButton;
    
    UPROPERTY(Instanced, Transient)
    UHintInputController* InSelectInstallAttachmentButton;
    
    UPROPERTY(Instanced, Transient)
    UUpgradeSlot* CurrentSlot;
    
    UPROPERTY(Instanced)
    UUpgradePriceWidget* PriceWidget;
    
    UPROPERTY(Instanced)
    UTextWidget* ItemNameText;
    
    UPROPERTY(Instanced)
    UTextWidget* PlayerMoneyText;
    
    UPROPERTY(Instanced)
    ULayeredItemImage* UpgradedItemIcon;
    
    UPROPERTY(Instanced)
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(Instanced)
    UItemsStatsUpgrades* ItemTooltip;
    
    UPROPERTY(Instanced)
    UUpgradeItemTooltipWidget* UpgradeTooltipWidget;
    
    UPROPERTY(Instanced)
    UOverlay* ConfirmPopupContainer;
    
    UPROPERTY(Instanced)
    UConfirmUpgradePopup* ConfirmUpgradePopup;
    
    UPROPERTY(Instanced)
    UImageWidget* IconDurability;
    
    UPROPERTY(Instanced)
    UHorizontalBox* PlayerMoneyBox;
    
    UPROPERTY(EditDefaultsOnly)
    float TensileStrength;
    
    UPROPERTY(EditDefaultsOnly)
    FString RepairButtonL10N;
    
    UPROPERTY(EditDefaultsOnly)
    FString PriceStyle;
    
    UPROPERTY(EditDefaultsOnly)
    FString CurrencyImageId;
    
    UPROPERTY(Instanced, Transient)
    UUpgradeSection* LastActiveSection;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShowInfoOnClick;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPriceWidgetEnabled;
    
    UPROPERTY(Instanced, Transient)
    UUpgradeSection* LastHoveredSection;
    
    UPROPERTY(EditDefaultsOnly)
    FString ItemSID;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSetPositions;
    
    UPROPERTY(Instanced)
    UCanvasPanel* SectionsCanvas;
    
    UPROPERTY(Instanced)
    UImage* BlackWeaponFade;
    
public:
    UUpgradeMenuWidget();

private:
    UFUNCTION()
    void OnWeaponFadeProgress(const float Alpha, const bool bIsShowing);
    
    UFUNCTION()
    void OnUpgradeMouseExit();
    
    UFUNCTION()
    void OnUpgradeMouseEnter(const FString& UpgradeID);
    
    UFUNCTION()
    void OnUpgradeClick(const FString& UpgradeID, UUpgradeSlot* InCurrentSlot);
    
    UFUNCTION()
    void OnSectionFadeProgress(const float Alpha, const bool bIsShowing);
    
    UFUNCTION()
    void OnSectionClicked(UUpgradeSection* Section);
    
public:
    UFUNCTION()
    void OnRevertLastUpgrade();
    
    UFUNCTION()
    void OnRepair();
    
private:
    UFUNCTION()
    FEventReply OnMouseBlackFadeDown(FGeometry InGeometry, const FPointerEvent& InMouseEvent);
    
    UFUNCTION()
    void OnApplyUpgrade(const FString& UpgradeID, UUpgradeSlot* InCurrentSlot);
    
    UFUNCTION()
    void LogSectionPositions() const;
    
    UFUNCTION()
    void LoadPrototypeEditor();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DrawAttaches(UTexture2D* Texture, int32 AttachIndex);
    
public:
    UFUNCTION()
    void DisassembleItem();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ClearAttaches();
    
private:
    UFUNCTION()
    void ChangeUpgradeModule();
    
};

