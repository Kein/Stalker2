#pragma once
#include "CoreMinimal.h"
#include "PDAPage.h"
#include "UpgradePage.generated.h"

class UHintActionRichText;
class UHintInputController;
class UPDAUpgradePanel;
class UPDAUpgradesButton;
class URepairPriceWidget;
class UUpgradeMenuWidget;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API UUpgradePage : public UPDAPage {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPDAUpgradePanel* UpgradePanel;
    
    UPROPERTY(Instanced)
    UPDAUpgradesButton* ButtonAll;
    
    UPROPERTY(Instanced)
    UPDAUpgradesButton* ButtonWeapon;
    
    UPROPERTY(Instanced)
    UPDAUpgradesButton* ButtonArmor;
    
    UPROPERTY(Instanced)
    UPDAUpgradesButton* ButtonHelmet;
    
    UPROPERTY(Instanced)
    UUpgradeMenuWidget* UpgradeMenu;
    
    UPROPERTY(Instanced)
    UHintInputController* HintNavLeft;
    
    UPROPERTY(Instanced)
    UHintInputController* HintNavRight;
    
    UPROPERTY(Instanced)
    UHintInputController* HideInformation;
    
    UPROPERTY(Instanced)
    UHintInputController* RepairButton;
    
    UPROPERTY(Instanced)
    UHintInputController* RemoveAttachment;
    
    UPROPERTY(Instanced)
    UHintInputController* SelectInstalAttachment;
    
    UPROPERTY(Instanced)
    UHintInputController* ButtonHintExit;
    
    UPROPERTY(Instanced)
    UHintInputController* NavigationHint;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* UpgradeSwitcher;
    
    UPROPERTY(Instanced)
    UHintActionRichText* DisassembleButton;
    
    UPROPERTY(Instanced)
    URepairPriceWidget* RepairPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SelectInput;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UpgradesIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EmptyScreenIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float GreyValue;
    
    UPROPERTY(EditDefaultsOnly)
    FString ExitTextHintl10nSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString BackTextHintl10nSID;
    
protected:
    UPROPERTY(Instanced)
    TArray<UPDAUpgradesButton*> MenuButtons;
    
    UPROPERTY(EditDefaultsOnly)
    float HintHoldTime;
    
public:
    UUpgradePage();

    UFUNCTION()
    void UpdatePanel();
    
protected:
    UFUNCTION()
    void UnbindUpgradesNavigation();
    
    UFUNCTION()
    void UnbindConfirmPopup();
    
public:
    UFUNCTION()
    void UIPDAUpgradesTreeNavigationUp();
    
    UFUNCTION()
    void UIPDAUpgradesTreeNavigationSelect();
    
    UFUNCTION()
    void UIPDAUpgradesTreeNavigationRight();
    
    UFUNCTION()
    void UIPDAUpgradesTreeNavigationLeft();
    
    UFUNCTION()
    void UIPDAUpgradesTreeNavigationDown();
    
    UFUNCTION()
    void UIPDAUpgradesTreeNavigationBack();
    
    UFUNCTION()
    void UIPDAUpgradesDisassemble();
    
    UFUNCTION()
    void UIPDANavigationUp();
    
    UFUNCTION()
    void UIPDANavigationRight();
    
    UFUNCTION()
    void UIPDANavigationLeft();
    
    UFUNCTION()
    void UIPDANavigationDown();
    
    UFUNCTION()
    void UIPDANavigationButtonRelease();
    
    UFUNCTION()
    void Repair();
    
    UFUNCTION()
    void Remove();
    
    UFUNCTION()
    void Hide();
    
protected:
    UFUNCTION()
    void HandleConfirmPopupBindings(bool InBind);
    
public:
    UFUNCTION()
    void DisassembleItemHoldStarted();
    
    UFUNCTION()
    void DisassembleItemHoldReleased();
    
protected:
    UFUNCTION()
    void ClickButtonMenu(const FName ButtonId);
    
public:
    UFUNCTION()
    void ClearInput();
    
protected:
    UFUNCTION()
    void BindUpgradesNavigation();
    
    UFUNCTION()
    void BindConfirmPopup();
    
};

