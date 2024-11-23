#pragma once
#include "CoreMinimal.h"
#include "ModioCommonUserProfileWidget.h"
#include "ModioUserProfileWidget.generated.h"

class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioUserProfileWidget : public UModioCommonUserProfileWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* NickNameText;
    
public:
    UModioUserProfileWidget();

};

