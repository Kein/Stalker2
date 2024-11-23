#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackParams.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FForceFeedbackParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPlayWhilePaused;
    
    FForceFeedbackParams();
};

