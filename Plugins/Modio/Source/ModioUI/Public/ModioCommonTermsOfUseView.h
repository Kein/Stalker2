#pragma once
#include "CoreMinimal.h"
#include "ModioCommonTermsOfUseViewBase.h"
#include "ModioCommonTermsOfUseView.generated.h"

class UModioCommonButtonBase;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonTermsOfUseView : public UModioCommonTermsOfUseViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ContentTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* TermsButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* PrivacyButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* SubmitButton;
    
public:
    UModioCommonTermsOfUseView();

};

