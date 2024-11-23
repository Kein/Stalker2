#pragma once
#include "CoreMinimal.h"
#include "ModioCommonActivatableWidget.h"
#include "ModioCommonReportEmailViewBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonReportEmailViewBase : public UModioCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModioCommonReportEmailViewSubmitClicked, const FString&, EmailAddress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportEmailViewCancelClicked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModioCommonReportEmailViewBackClicked);
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportEmailViewBackClicked OnBackClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportEmailViewCancelClicked OnCancelClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnModioCommonReportEmailViewSubmitClicked OnSubmitClicked;
    
    UModioCommonReportEmailViewBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEmailValid(const FString& Email);
    
};

