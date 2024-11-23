#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthViewBase.h"
#include "ModioEmailAuthPopup.generated.h"

class UModioCommonEditableTextBox;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioEmailAuthPopup : public UModioCommonEmailAuthViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* ValidationText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonEditableTextBox* EmailTextBox;
    
public:
    UModioEmailAuthPopup();

private:
    UFUNCTION()
    void OnEditableTextBoxTextChanged(const FText& Text);
    
public:
    UFUNCTION(BlueprintPure)
    FString GetEmail() const;
    
};

