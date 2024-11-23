#pragma once
#include "CoreMinimal.h"
#include "ModioCommonEmailAuthLoadingViewBase.h"
#include "ModioCommonEmailAuthLoadingView.generated.h"

class UModioCommonButtonBase;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonEmailAuthLoadingView : public UModioCommonEmailAuthLoadingViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CancelButton;
    
public:
    UModioCommonEmailAuthLoadingView();

};

