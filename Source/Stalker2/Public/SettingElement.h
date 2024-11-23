#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "EInputTypeForButtons.h"
#include "WidgetBase.h"
#include "SettingElement.generated.h"

class UButton;
class UImage;
class UProgressBar;
class USettingElement;
class USettingsMenuSubView;
class USlider;
class UTextWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class STALKER2_API USettingElement : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    bool bShouldHideOnShipping;
    
    UPROPERTY(EditInstanceOnly)
    bool bShouldHideOnPresentation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HoveredTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TextStyle;
    
    UPROPERTY(Instanced)
    UImage* Background;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* HoveredBackground;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* UnhoveredBackground;
    
    UPROPERTY(EditAnywhere)
    FButtonStyle HoveredArrow;
    
    UPROPERTY(EditAnywhere)
    FButtonStyle UnHoveredArrow;
    
    UPROPERTY(EditDefaultsOnly)
    FProgressBarStyle HoveredSlider;
    
    UPROPERTY(EditDefaultsOnly)
    FProgressBarStyle UnHoveredSlider;
    
    UPROPERTY(EditDefaultsOnly)
    FSliderStyle HoveredThumbSlider;
    
    UPROPERTY(EditDefaultsOnly)
    FSliderStyle UnHoveredThumbSlider;
    
    UPROPERTY(Instanced)
    UTextWidget* NameText;
    
    UPROPERTY(Instanced)
    UTextWidget* ValueText;
    
    UPROPERTY(Instanced)
    UButton* LeftButton;
    
    UPROPERTY(Instanced)
    UButton* RightButton;
    
    UPROPERTY(Instanced)
    UButton* LeftButtonImage;
    
    UPROPERTY(Instanced)
    UButton* RightButtonImage;
    
    UPROPERTY(Instanced)
    UProgressBar* ProgressBar;
    
    UPROPERTY(Instanced)
    USlider* Slider;
    
    UPROPERTY(EditAnywhere)
    FString NameLocSID;
    
    UPROPERTY(EditAnywhere)
    FString DescriptionLocSID;
    
    UPROPERTY(EditInstanceOnly, Instanced)
    TArray<USettingElement*> WidgetDependencies;
    
    UPROPERTY(EditInstanceOnly)
    EInputTypeForButtons InputTypeToDisplayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSpecialButton;
    
    UPROPERTY(Instanced)
    USettingsMenuSubView* Settings;
    
public:
    USettingElement();

    UFUNCTION()
    void OnRightButtonClicked();
    
    UFUNCTION()
    void OnLeftButtonClicked();
    
    UFUNCTION(BlueprintPure)
    bool GetIsEnabledElement() const;
    
};

