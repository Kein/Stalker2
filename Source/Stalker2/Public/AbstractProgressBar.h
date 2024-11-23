#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "AbstractProgressBar.generated.h"

UCLASS(Abstract, EditInlineNew)
class STALKER2_API UAbstractProgressBar : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bEnableStyleManager;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float ProgressValue;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FName ProgressStyleId;
    
    UAbstractProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetProgressValue(float InProgress);
    
};

