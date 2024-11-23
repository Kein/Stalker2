#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "ModioCommonEmailAuthViewBase.h"
#include "ModioCommonEmailAuthView.generated.h"

class UModioCommonButtonBase;
class UModioCommonEditableTextBox;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthView : public UModioCommonEmailAuthViewBase {
    GENERATED_BODY()
public:
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
    
    UModioCommonEmailAuthView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetValidationTextVisibility(ESlateVisibility Visbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEditableTextBoxTextChanged(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEmailValid(const FString& Email);
    
};

