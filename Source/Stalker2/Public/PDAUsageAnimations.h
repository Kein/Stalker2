#pragma once
#include "CoreMinimal.h"
#include "PDAUsageAnimations.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FPDAUsageAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* EquipPDA;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* InteractWithPDA;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* UnequipPDA;
    
    STALKER2_API FPDAUsageAnimations();
};

