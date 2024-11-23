#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackProcessorBase.h"
#include "SimpleForceFeedbackProcessor.generated.h"

class UForceFeedbackEffect;

UCLASS(EditInlineNew)
class STALKER2_API USimpleForceFeedbackProcessor : public UForceFeedbackProcessorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UForceFeedbackEffect* Feedback;
    
    USimpleForceFeedbackProcessor();

};

