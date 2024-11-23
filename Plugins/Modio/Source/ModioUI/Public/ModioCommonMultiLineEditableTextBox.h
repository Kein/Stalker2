#pragma once
#include "CoreMinimal.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Styling/SlateTypes.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonMultiLineEditableTextBox.generated.h"

class UModioCommonMultiLineEditableTextBoxStyle;

UCLASS()
class MODIOUI_API UModioCommonMultiLineEditableTextBox : public UMultiLineEditableTextBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonMultiLineEditableTextBoxStyle> ModioStyle;
    
public:
    UPROPERTY(BlueprintAssignable)
    UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxChangedEvent OnMultiLineEditableTextChanged;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool IsCaretMovedWhenGainFocus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool SelectAllTextWhenFocused;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool RevertTextOnEscape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool SelectAllTextOnCommit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool AlwaysShowScrollbars;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool AllowMultiLine;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETextOverflowPolicy OverflowPolicy;
    
public:
    UModioCommonMultiLineEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonMultiLineEditableTextBoxStyle> InStyle);
    
    UFUNCTION(BlueprintPure)
    bool IsTextBoxFocused() const;
    
};

