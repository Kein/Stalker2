#pragma once
#include "CoreMinimal.h"
#include "ModioCommonUserProfileBase.h"
#include "ModioCommonUserProfileWidget.generated.h"

class UModioCommonButtonBase;

UCLASS(Abstract, EditInlineNew)
class MODIOUI_API UModioCommonUserProfileWidget : public UModioCommonUserProfileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UModioCommonButtonBase* ProfileButton;
    
public:
    UModioCommonUserProfileWidget();

};

