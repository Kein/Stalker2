#pragma once
#include "CoreMinimal.h"
#include "EDialogAnswerColor.h"
#include "DialogAnswerInfo.generated.h"

USTRUCT()
struct FDialogAnswerInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bAvailable;
    
    UPROPERTY()
    EDialogAnswerColor AnswerColor;
    
    STALKER2_API FDialogAnswerInfo();
};

