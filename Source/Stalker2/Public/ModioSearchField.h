#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Types/SlateEnums.h"
#include "ModioSearchField.generated.h"

class UHintInputController;
class UModioCommonEditableTextBox;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioSearchField : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UHintInputController* SearchHint;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonEditableTextBox* SearchTextBox;
    
public:
    UModioSearchField();

protected:
    UFUNCTION()
    void HandleOnTextCommitted(const FText& Text, const TEnumAsByte<ETextCommit::Type> CommitMethod);
    
public:
    UFUNCTION(BlueprintPure)
    FString GetSearchKeywords() const;
    
};

