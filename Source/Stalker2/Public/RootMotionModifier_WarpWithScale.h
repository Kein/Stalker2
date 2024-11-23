#pragma once
#include "CoreMinimal.h"
#include "RootMotionModifier_SkewWarp.h"
#include "RootMotionModifier_WarpWithScale.generated.h"

UCLASS(EditInlineNew)
class URootMotionModifier_WarpWithScale : public URootMotionModifier_SkewWarp {
    GENERATED_UCLASS_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ScaleWarpTargetName;
    
    //URootMotionModifier_WarpWithScale();

};

