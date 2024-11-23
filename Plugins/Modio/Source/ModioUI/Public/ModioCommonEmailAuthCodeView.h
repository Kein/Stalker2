#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/SlateWrapperTypes.h"
#include "ModioCommonEmailAuthCodeViewBase.h"
#include "ModioCommonEmailAuthCodeView.generated.h"

class UEditableTextBox;
class UModioCommonButtonBase;
class UModioCommonCodeInputTextBox;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthCodeView : public UModioCommonEmailAuthCodeViewBase {
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
    UModioCommonButtonBase* BackButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* SubmitButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCodeInputTextBox* CodeInputTextBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UEditableTextBox* CustomCodeInputTextBox;
    
public:
    UModioCommonEmailAuthCodeView();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetValidationTextVisibility(ESlateVisibility Visbility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsBusy(bool bBusy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCodeValid(const FString& Code);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleOnSubmitClicked();
    
    // FIXME
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void HandleOnCustomSubmitClicked(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString GetInputText() const;
    
};

