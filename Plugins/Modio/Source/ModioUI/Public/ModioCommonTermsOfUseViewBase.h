#pragma once
#include "CoreMinimal.h"
#include "ModioTerms.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonTermsOfUseViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonTermsOfUseViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    // FIXME
    /*
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonTermsOfUseViewSubmitClicked OnSubmitClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonTermsOfUseViewCancelClicked OnCancelClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonTermsOfUseLinkClicked OnLinkClicked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FModioTerms Terms;
    */

    UModioCommonTermsOfUseViewBase();

};

