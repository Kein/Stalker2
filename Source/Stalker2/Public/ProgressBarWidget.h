#pragma once
#include "CoreMinimal.h"
#include "AbstractProgressBar.h"
#include "ProgressBarWidget.generated.h"

class UProgressBar;

UCLASS(EditInlineNew)
class STALKER2_API UProgressBarWidget : public UAbstractProgressBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UProgressBar* ProgressBarObj;
    
public:
    UProgressBarWidget();

};

