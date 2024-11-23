#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceFace.h"
#include "AnimInstanceTestFace.generated.h"

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceTestFace : public UAnimInstanceFace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBlendShapeAnimations;
    
    UAnimInstanceTestFace();

};

