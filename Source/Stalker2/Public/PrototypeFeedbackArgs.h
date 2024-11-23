#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackArgs.h"
#include "PrototypeFeedbackArgs.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FPrototypeFeedbackArgs : public FForceFeedbackArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PrototypeSID;
    
    FPrototypeFeedbackArgs();
};

