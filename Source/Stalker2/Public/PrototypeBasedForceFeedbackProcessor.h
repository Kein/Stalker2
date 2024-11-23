#pragma once
#include "CoreMinimal.h"
#include "ERumbleType.h"
#include "ForceFeedbackProcessorBase.h"
#include "PrototypeBasedForceFeedbackProcessor.generated.h"

class UForceFeedbackEffect;

UCLASS(EditInlineNew)
class STALKER2_API UPrototypeBasedForceFeedbackProcessor : public UForceFeedbackProcessorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UForceFeedbackEffect* DefaultFeedback;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TMap<FString, UForceFeedbackEffect*> PrototypeToFeedback;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TMap<FString, ERumbleType> PrototypeToRumble;
    
public:
    UPrototypeBasedForceFeedbackProcessor();

};

