#pragma once
#include "CoreMinimal.h"
#include "ChangeFireTypeAnimation.h"
#include "ChangeFireTypeAnimations.generated.h"

USTRUCT(BlueprintType)
struct FChangeFireTypeAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FChangeFireTypeAnimation> AnimationsArray;
    
    STALKER2_API FChangeFireTypeAnimations();
};

