#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthCodeViewBase.h"
#include "ModioEmailAuthCodePopup.generated.h"

class UModioCommonCodeInputTextBox;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioEmailAuthCodePopup : public UModioCommonEmailAuthCodeViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* ValidationText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonCodeInputTextBox* CodeInputTextBox;
    
public:
    UModioEmailAuthCodePopup();

};

