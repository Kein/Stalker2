#pragma once
#include "CoreMinimal.h"
#include "ModioCommonReportMessageViewBase.h"
#include "ModioCommonReportMessageView.generated.h"

class UModioCommonButtonBase;
class UModioCommonMultiLineEditableTextBox;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonReportMessageView : public UModioCommonReportMessageViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* CharactersTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ValidationTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ErrorMessageTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonMultiLineEditableTextBox* MessageTextBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* BackButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* SubmitButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CancelButton;
    
public:
    UModioCommonReportMessageView();

    UFUNCTION()
    void OnMultiLineTextBoxTextChanged(const FText& Text);
    
};

