#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonButtonBase.generated.h"

class UModioCommonButtonStyle;
class UModioCommonImage;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonButtonBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText OverrideActionDisplayName;
    
    UPROPERTY(EditAnywhere)
    bool bShouldTriggerButtonClickOnEnterOrGamepadAccept;
    
protected:
    UPROPERTY(EditAnywhere)
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFocusOnHover;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonImage* Icon;
    
public:
    UPROPERTY(BlueprintAssignable)
    FCommonButtonBaseClicked OnButtonBaseFocusReceived;
    
    UPROPERTY(BlueprintAssignable)
    FCommonButtonBaseClicked OnButtonBaseFocusLost;
    
private:
    UPROPERTY()
    TSubclassOf<UModioCommonButtonStyle> ModioDefaultStyleClass;
    
    UPROPERTY(Transient)
    UClass* ModioFocusedStyleClass;
    
public:
    UModioCommonButtonBase();

    UFUNCTION(BlueprintCallable)
    void SetLabel(FText NewLabel);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonFocus();
    
};

