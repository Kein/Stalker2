#pragma once
#include "CoreMinimal.h"
#include "ViewBaseExtended.h"
#include "SettingsView.generated.h"

class UImage;
class ULocalizedImage;
class USettingsNavigationPanel;
class USettingsPage;
class USizeBox;
class UTextWidget;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class STALKER2_API USettingsView : public UViewBaseExtended {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USettingsNavigationPanel* NavigationPanel;
    
    UPROPERTY(Instanced)
    USettingsNavigationPanel* NavigationPanelMapping;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* NavPanelSwitcher;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* CategorySwitcher;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* NestingSwitcher;
    
    UPROPERTY(Instanced)
    UTextWidget* SettingName;
    
    UPROPERTY(Instanced)
    UTextWidget* SettingDescription;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USizeBox* SettingsVisualizationBox;
    
    UPROPERTY(Instanced)
    ULocalizedImage* SettingsVisualization;
    
    UPROPERTY(Instanced)
    UImage* DescriptionLine;
    
    UPROPERTY(Instanced)
    USettingsPage* KeyboardMapping;
    
    UPROPERTY(EditAnywhere)
    FString SavePopupTitleSID;
    
    UPROPERTY(EditAnywhere)
    FString SavePopupDescSID;
    
    UPROPERTY(EditAnywhere)
    FString SavePopupButtonSID;
    
    UPROPERTY(EditAnywhere)
    FString ExitPopupTitleSID;
    
    UPROPERTY(EditAnywhere)
    FString ExitPopupDescSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString ExitPopupButtonOkSID;
    
    UPROPERTY(EditDefaultsOnly)
    FString ExitPopupButtonNoSID;
    
    UPROPERTY(EditAnywhere)
    FString ResetPopupTitleSID;
    
    UPROPERTY(EditAnywhere)
    FString ResetPopupDescSID;
    
    UPROPERTY(EditAnywhere)
    FString ResetPopupButtonOkSID;
    
    UPROPERTY(EditAnywhere)
    FString ResetPopupButtonNoSID;
    
    UPROPERTY(EditAnywhere)
    FString ExitToSettingsPopupTitleSID;
    
    UPROPERTY(EditAnywhere)
    FString NeedRestartPopupDescSID;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> KeyboardMappingTexture;
    
    USettingsView();

};

