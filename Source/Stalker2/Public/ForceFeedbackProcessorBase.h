#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERumbleType.h"
#include "ForceFeedbackParams.h"
#include "ForceFeedbackProcessorBase.generated.h"

class UForceFeedbackEffect;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class STALKER2_API UForceFeedbackProcessorBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIgnoreSelf;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FForceFeedbackParams Params;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ERumbleType RumbleType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ERumbleType DefaultRumbleType;
    
    UPROPERTY(Transient)
    UForceFeedbackEffect* CurrentFeedback;
    
public:
    UForceFeedbackProcessorBase();

};

