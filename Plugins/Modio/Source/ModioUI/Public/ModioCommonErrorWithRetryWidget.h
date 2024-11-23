#pragma once
#include "CoreMinimal.h"
#include "ModioUIAsyncRetryWidget.h"
#include "ModioCommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonErrorWithRetryWidget.generated.h"

class UModioCommonButtonBase;
class UModioCommonErrorWithRetryWidgetStyle;
class UModioCommonImage;
class UModioCommonTextBlock;

UCLASS(EditInlineNew)
class MODIOUI_API UModioCommonErrorWithRetryWidget : public UModioCommonActivatableWidget, public IModioUIAsyncRetryWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRetryClickedDynamicDelegate);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonErrorWithRetryWidgetStyle> ModioStyle;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonImage* IconImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ErrorTitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* ErrorDescriptionTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* RetryButton;
    
public:
    UPROPERTY(BlueprintAssignable)
    FRetryClickedDynamicDelegate RetryClickedDynamicDelegate;
    
    UModioCommonErrorWithRetryWidget();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UModioCommonErrorWithRetryWidgetStyle> InStyle);
    

    // Fix for true pure virtual functions not being implemented
};

