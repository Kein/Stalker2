#pragma once
#include "CoreMinimal.h"
#include "ModioCommonDialogViewBase.h"
#include "Templates/SubclassOf.h"
#include "ModioCommonDialogView.generated.h"

class UModioCommonDialogMessageViewBase;
class UModioCommonWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonDialogView : public UModioCommonDialogViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonWidgetSwitcher* DialogSwitcher;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UModioCommonDialogMessageViewBase> DialogMessageViewClass;
    
private:
    UPROPERTY(Instanced, Transient)
    UModioCommonDialogMessageViewBase* DialogMessageView;
    
public:
    UModioCommonDialogView();

};

