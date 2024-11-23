#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceBase.h"
#include "AnimInstanceContextualFace.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceContextualFace : public UAnimInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* HumanBody;
    
    UAnimInstanceContextualFace();

};

