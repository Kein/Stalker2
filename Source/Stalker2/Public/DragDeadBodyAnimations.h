#pragma once
#include "CoreMinimal.h"
#include "DragDeadBodyAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDragDeadBodyAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* PickUpBodyFaceUp;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* DropBody;
    
    STALKER2_API FDragDeadBodyAnimations();
};

