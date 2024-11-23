#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnChangeCheckDelegate.h"
#include "OnCheckBoxClickDelegate.h"
#include "WidgetBase.h"
#include "CheckBoxWidget.generated.h"

class UImageWidget;

UCLASS(EditInlineNew)
class STALKER2_API UCheckBoxWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UImageWidget* ImageObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldStartChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableMouseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableHoverRecolor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HoverTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor NormalTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CheckedStyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName UnCheckedStyleId;
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeCheck OnChangeCheck;
    
    UPROPERTY(BlueprintAssignable)
    FOnCheckBoxClick OnCheckBoxClick;
    
    UCheckBoxWidget();

    UFUNCTION(BlueprintCallable)
    void SetChecked(const bool bInChecked, const bool bBrodcastOnChangeCheck);
    
    UFUNCTION(BlueprintPure)
    bool GetChecked() const;
    
};

