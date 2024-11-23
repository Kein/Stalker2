#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Widgets/Input/IVirtualKeyboardEntry.h"
#include "Components/Widget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonCodeInputTextBox.generated.h"

class UModioCommonCodeInputTextBoxStyle;

UCLASS()
class MODIOUI_API UModioCommonCodeInputTextBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCodeSubmitDynamic);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonCodeInputTextBoxStyle> ModioStyle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETextFlowDirection TextFlowDirection;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumberOfCharacters;
    
    UPROPERTY(BlueprintAssignable)
    FOnCodeSubmitDynamic OnCodeSubmitDynamic;
    
    UModioCommonCodeInputTextBox();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonCodeInputTextBoxStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetCodeString(const FString& InCodeString);
    
    UFUNCTION(BlueprintPure)
    FString GetCodeString() const;
    
};

