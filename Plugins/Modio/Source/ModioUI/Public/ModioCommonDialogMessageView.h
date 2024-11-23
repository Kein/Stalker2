#pragma once
#include "CoreMinimal.h"
#include "EModioCommonDialogButtonType.h"
#include "ModioCommonDialogMessageViewBase.h"
#include "ModioCommonDialogMessageView.generated.h"

class UModioCommonButtonBase;
class UModioCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonDialogMessageView : public UModioCommonDialogMessageViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* BackButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* CancelButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* ConfirmButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* OkButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* ModDetailsButton;
    
public:
    UModioCommonDialogMessageView();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonEnabledState(UModioCommonButtonBase* Button, bool bEnabled);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TMap<EModioCommonDialogButtonType, UModioCommonButtonBase*> GetButtons() const;
    
};

