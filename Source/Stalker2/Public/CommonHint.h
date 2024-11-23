#pragma once
#include "CoreMinimal.h"
#include "HintBase.h"
#include "CommonHint.generated.h"

class UHintSwitcher;
class ULocalizationWidget;
class URichTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UCommonHint : public UHintBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    ULocalizationWidget* LocalizationWidget;
    
    UPROPERTY(Instanced)
    UHintSwitcher* HintSwitcherWidget;
    
    UPROPERTY(Instanced)
    URichTextWidget* RichTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateLocalization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LocalizationSID;
    
    UCommonHint();

};

