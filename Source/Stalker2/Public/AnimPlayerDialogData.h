#pragma once
#include "CoreMinimal.h"
#include "AnimPlayerDialogData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bInDialog;
    
    FAnimPlayerDialogData();
};

