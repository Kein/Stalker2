#pragma once
#include "CoreMinimal.h"
#include "BaseLoadingScreenWidget.h"
#include "TimedLoadingScreenWidget.generated.h"

class UImage;
class UThrobber;

UCLASS(EditInlineNew)
class STALKER2_API UTimedLoadingScreenWidget : public UBaseLoadingScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UThrobber* LoadingIndicator;
    
    UPROPERTY(Instanced)
    UImage* ContentImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FadeTime;
    
public:
    UTimedLoadingScreenWidget();

};

