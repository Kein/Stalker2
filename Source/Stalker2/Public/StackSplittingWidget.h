#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "StackSplittingWidget.generated.h"

class UButton;
class UImageWidget;
class USlider;
class UTextBlock;

UCLASS(EditInlineNew)
class STALKER2_API UStackSplittingWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* TextBlock_AmountToDrop;
    
    UPROPERTY(Instanced)
    USlider* Slider_ItemSplit;
    
    UPROPERTY(Instanced)
    UTextBlock* TextBlock_FullAmount;
    
    UPROPERTY(Instanced)
    UButton* Button_Cancel;
    
    UPROPERTY(Instanced)
    UButton* Button_Split;
    
    UPROPERTY(Instanced)
    UTextBlock* TextBlock_Split;
    
    UPROPERTY(Instanced)
    UImageWidget* ItemImage;
    
    UPROPERTY(Instanced)
    UTextBlock* HeaderText;
    
    UPROPERTY(Instanced)
    UTextBlock* ItemName;
    
public:
    UStackSplittingWidget();

private:
    UFUNCTION()
    void OnSplitValueChanged(float Value);
    
public:
    UFUNCTION()
    void OnSplitButtonClicked();
    
private:
    UFUNCTION()
    void OnCancelButtonClicked();
    
};

