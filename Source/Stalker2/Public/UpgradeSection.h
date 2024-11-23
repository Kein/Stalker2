#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELineDirection.h"
#include "EUpgradeTargetPartType.h"
#include "Templates/SubclassOf.h"
#include "WidgetBase.h"
#include "UpgradeSection.generated.h"

class UButton;
class UImage;
class UTextBlock;
class UUpgradeSection;
class UUpgradeSlot;
class UUpgradesSettings;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UUpgradeSection : public UWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSectionClicked, UUpgradeSection*, ClickedSection);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnimationProgress, const float, Alpha, const bool, bShowing);
    
    UPROPERTY()
    FOnSectionClicked OnSectionClicked;
    
    UPROPERTY(EditInstanceOnly)
    bool bIsEnabledSection;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EUpgradeTargetPartType TargetPart;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    ELineDirection UpgradesLineDirection;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    ELineDirection ModulesLineDirection;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D DotHoverSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D DotNormalSize;
    
    UPROPERTY()
    FOnAnimationProgress OnAnimationProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UVerticalBox*> ModulesVerticalBoxes;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UVerticalBox*> UpgradesVerticalBoxes;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* ConnectionLineUpgrade;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* UpgradesPanel;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* ConnectionLineModule;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* ModulesPanel;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* NewUpgradeNotification;
    
private:
    UPROPERTY(Instanced)
    UTextBlock* UpgradesTextBlock;
    
    UPROPERTY(Instanced)
    UTextBlock* ModulesTextBlock;
    
    UPROPERTY(Instanced)
    UImage* Dot;
    
    UPROPERTY(Instanced)
    UButton* DotButton;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUpgradeSlot> SlotWidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    UUpgradesSettings* SettingsAsset;
    
    UPROPERTY(Instanced, Transient)
    TArray<UUpgradeSlot*> Slots;
    
    UPROPERTY(EditDefaultsOnly)
    FText UpgradeL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FText ModulesL10n;
    
    UPROPERTY(EditDefaultsOnly)
    FText NewNotificationL10n;
    
    UPROPERTY(Instanced, Transient)
    UUpgradeSlot* LastHighlightedSlot;
    
public:
    UUpgradeSection();

    UFUNCTION()
    void ToggleSection();
    
    UFUNCTION()
    void SectionUnhovered();
    
    UFUNCTION()
    void SectionHovered();
    
    UFUNCTION()
    void SectionClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RebuildSections();
    
};

