#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceReplicateMesh.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class STALKER2_API UAnimInstanceReplicateMesh : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    UAnimInstanceReplicateMesh();

};

