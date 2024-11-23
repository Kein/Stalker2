#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ItemUID.h"
#include "StackSplitContextual.generated.h"

class UButton;
class UCurveFloat;
class UHintInputController;
class UImage;
class UOverlay;
class UPlatformSwitcherBase;
class USizeBox;
class USlider;
class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UStackSplitContextual : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSplitConfirmed, int32, Count, FItemUID, ItemUID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSplitCanceled);
    
protected:
    UPROPERTY(Instanced)
    UHintInputController* ConfirmHint;
    
    UPROPERTY(Instanced)
    UHintInputController* ConfirmAllHint;
    
    UPROPERTY(Instanced)
    UHintInputController* CancelHint;
    
    UPROPERTY(Instanced)
    UTextWidget* TitleText;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor SignCaptionPressedColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor SignCaptionDefaultColor;
    
    UPROPERTY(Instanced)
    USlider* Slider_ItemSplit;
    
    UPROPERTY(Instanced)
    UTextWidget* SplitTextTest;
    
    UPROPERTY(Instanced)
    UTextWidget* ItemName;
    
    UPROPERTY(Instanced)
    USizeBox* SizeBoxSlider;
    
    UPROPERTY(Instanced)
    UOverlay* OverlayNumbers;
    
    UPROPERTY(Instanced)
    UOverlay* OverlaySize;
    
    UPROPERTY(Instanced)
    UImage* SliderImage;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* MovementCurve;
    
    UPROPERTY(Instanced)
    UButton* ArrowLeft;
    
    UPROPERTY(Instanced)
    UButton* ArrowRight;
    
    UPROPERTY(Instanced)
    UPlatformSwitcherBase* ArrowRightPlatformSwitcher;
    
    UPROPERTY(Instanced)
    UPlatformSwitcherBase* ArrowLeftPlatformSwitcher;
    
public:
    UPROPERTY(Instanced)
    UOverlay* MainOverlay;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor ActiveBarColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor NonActiveBarColor;
    
public:
    UStackSplitContextual();

private:
    UFUNCTION()
    void PressChangeAmmount();
    
    UFUNCTION()
    void OnSplitValueChanged(float Value);
    
public:
    UFUNCTION()
    void OnSplitButtonClicked();
    
private:
    UFUNCTION()
    void OnPlusButtonReleased();
    
    UFUNCTION()
    void OnPlusButtonPressed();
    
public:
    UFUNCTION()
    void OnPlusButtonClicked();
    
private:
    UFUNCTION()
    void OnMinusButtonReleased();
    
    UFUNCTION()
    void OnMinusButtonPressed();
    
public:
    UFUNCTION()
    void OnMinusButtonClicked();
    
private:
    UFUNCTION()
    void OnHoldTimerTriggered();
    
public:
    UFUNCTION()
    void OnDropAllButtonClicked();
    
private:
    UFUNCTION()
    void OnCancelButtonClicked();
    
};

