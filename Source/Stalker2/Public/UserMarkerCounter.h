#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "UserMarkerCounter.generated.h"

class UTextWidget;

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UUserMarkerCounter : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UTextWidget* CounterText;
    
    UPROPERTY(EditDefaultsOnly)
    FString CounterFormat;
    
public:
    UUserMarkerCounter();

    UFUNCTION()
    void UpdateMarkerCounterWidget(const int32 NewAmount);
    
};

