#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "DeathCounter.generated.h"

class UTextWidget;

UCLASS(EditInlineNew)
class STALKER2_API UDeathCounter : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextWidget* DeathCounterText;
    
public:
    UDeathCounter();

};

