#pragma once
#include "CoreMinimal.h"
#include "HintControllerBase.h"
#include "HintTutorialController.generated.h"

UCLASS(EditInlineNew)
class STALKER2_API UHintTutorialController : public UHintControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float IntervalClick;
    
    UPROPERTY(EditDefaultsOnly)
    float IntervalHold;
    
public:
    UHintTutorialController();

};

