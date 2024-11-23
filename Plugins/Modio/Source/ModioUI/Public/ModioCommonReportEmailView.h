#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "ModioCommonReportEmailViewBase.h"
#include "ModioCommonReportEmailView.generated.h"

class UModioCommonButtonBase;
class UModioCommonEditableTextBox;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonReportEmailView : public UModioCommonReportEmailViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ValidationTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonEditableTextBox* EmailTextBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* BackButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* SubmitButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CancelButton;
    
public:
    UModioCommonReportEmailView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetValidationTextVisibility(ESlateVisibility EVisbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEditableTextBoxTextChanged(const FText& InText);
    
};

