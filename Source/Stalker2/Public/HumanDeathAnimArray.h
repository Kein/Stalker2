#pragma once
#include "CoreMinimal.h"
#include "HumanDeathAnimArray.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FHumanDeathAnimArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAnimMontage*> Animations;
    
    STALKER2_API FHumanDeathAnimArray();
};

