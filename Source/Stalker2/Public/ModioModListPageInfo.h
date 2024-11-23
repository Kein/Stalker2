#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ModioModListPageInfo.generated.h"

class UHintInputController;
class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UModioModListPageInfo : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextWidget* PageInfoText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UHintInputController* HintNavigationLeft;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UHintInputController* HintNavigationRight;
    
public:
    UModioModListPageInfo();

};

