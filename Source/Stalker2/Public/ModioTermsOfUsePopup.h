#pragma once
#include "CoreMinimal.h"
#include "ModioCommonTermsOfUseViewBase.h"
#include "ModioTermsOfUsePopup.generated.h"

class UHyperlinkButton;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioTermsOfUsePopup : public UModioCommonTermsOfUseViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UHyperlinkButton* PrivacyPolicyButton;
    
    UPROPERTY(Instanced)
    UHyperlinkButton* TermsOfUseButton;
    
public:
    UModioTermsOfUsePopup();

};

