#pragma once
#include "CoreMinimal.h"
#include "EDialogAnimationCategory.h"
#include "EDialogAnimationType.h"
#include "DialogAnimationType.generated.h"

USTRUCT()
struct STALKER2_API FDialogAnimationType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDialogAnimationType Value;
    
    UPROPERTY(EditAnywhere)
    EDialogAnimationCategory DialogAnimationCategory;
    
    FDialogAnimationType();
};

