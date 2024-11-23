#pragma once
#include "CoreMinimal.h"
#include "AbstractProgressBar.h"
#include "TwoSideProgressBar.generated.h"

class UImage;
class USlider;

UCLASS(EditInlineNew)
class STALKER2_API UTwoSideProgressBar : public UAbstractProgressBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    USlider* RightSlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    USlider* LeftSlider;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* ProgressLine;
    
public:
    UTwoSideProgressBar();

};

