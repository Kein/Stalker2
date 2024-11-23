#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonEditableTextBox.generated.h"

class UModioCommonEditableTextBoxStyle;

UCLASS()
class MODIOUI_API UModioCommonEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonEditableTextBoxStyle> ModioStyle;
    
public:
    UPROPERTY(BlueprintAssignable)
    UEditableTextBox::FOnEditableTextBoxChangedEvent OnEditableTextChanged;
    
    UModioCommonEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonEditableTextBoxStyle> InStyle);
    
    UFUNCTION(BlueprintPure)
    bool IsTextBoxFocused() const;
    
};

