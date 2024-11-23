#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceArray.h"
#include "ELookAtOwnerState.h"
#include "AnimDialogContextualArray.generated.h"

USTRUCT(BlueprintType)
struct FAnimDialogContextualArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ELookAtOwnerState, FAnimSequenceArray> DialogContextualAnimations;
    
    STALKER2_API FAnimDialogContextualArray();
};

