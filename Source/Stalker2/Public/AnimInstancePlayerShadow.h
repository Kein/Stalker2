#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimPlayerShadowData.h"
#include "AnimPlayerStateData.h"
#include "AnimInstancePlayerShadow.generated.h"

UCLASS(NonTransient)
class STALKER2_API UAnimInstancePlayerShadow : public UAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimPlayerShadowData ShadowData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnimPlayerStateData StateData;
    
public:
    UAnimInstancePlayerShadow();

};

