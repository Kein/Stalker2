#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceBase.generated.h"

class AObj;
class UAnimSequence;
class USkeletalMeshComponent;

UCLASS(Abstract, NonTransient)
class UAnimInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AObj> Owner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* DummyAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* DummyBlueprint;
    
public:
    UAnimInstanceBase();

};

